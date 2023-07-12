//#include <stdafx.h>
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include "../Loader/Loader.h"
HINSTANCE mHinst = 0, mHinstDLL = 0;
extern "C" UINT_PTR mProcs[17] = { 0 };
LPCSTR mImportNames[17] = {
	"GetFileVersionInfoA", "GetFileVersionInfoByHandle", "GetFileVersionInfoExA", "GetFileVersionInfoExW",
	"GetFileVersionInfoSizeA", "GetFileVersionInfoSizeExA", "GetFileVersionInfoSizeExW", "GetFileVersionInfoSizeW", "GetFileVersionInfoW",
	"VerFindFileA", "VerFindFileW", "VerInstallFileA", "VerInstallFileW", "VerLanguageNameA", "VerLanguageNameW", "VerQueryValueA",
	"VerQueryValueW"
};
void load_original_dll();

static bool hooked = false;

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	mHinst = hinstDLL;

	if (fdwReason == DLL_PROCESS_ATTACH) {
		load_original_dll();
		for (int i = 0; i < 17; i++) {
			mProcs[i] = reinterpret_cast<UINT_PTR>(GetProcAddress(mHinstDLL, mImportNames[i]));
		}
	}
	else if (fdwReason == DLL_PROCESS_DETACH) {
		FreeLibrary(mHinstDLL);
	}

	if (hooked) {
		return (TRUE);
	}
	if (fdwReason == DLL_THREAD_ATTACH) {
		hooked = true;
		Loader::LoadModLoader();
	}
	return (TRUE);
}

// Loads the original DLL from the default system directory
//	Function originally written by Michael Koch
void load_original_dll()
{
	char buffer[MAX_PATH];

	// Get path to system dir and to version.dll
	GetSystemDirectoryA(buffer, MAX_PATH);

	// Append DLL name
	strcat_s(buffer, "\\version.dll");

	// Try to load the system's version.dll, if pointer empty
	if (!mHinstDLL) {
		mHinstDLL = LoadLibraryA(buffer);
	}

	// Debug
	if (!mHinstDLL) {
		OutputDebugStringA("PROXYDLL: Original version.dll not loaded ERROR ****\r\n");
		ExitProcess(0); // Exit the hard way
	}
}


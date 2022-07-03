#pragma once
#include <Windows.h>
#include <cstdint>

struct FString {
	int16_t* data;
	int32_t length;

	FString();
	FString(const char* message);
private:
	void create_message(const char* message);
};

FString::FString()
	: data(nullptr)
	, length(0)
{}

FString::FString(const char* message) {
	this->create_message(message);
}

void FString::create_message(const char* message) {
	length = (int32_t)strlen(message) + 1;
	int16_t *chars = new int16_t[length + 1];
	for (size_t i = 0; i < length; i++) {
		chars[i] = message[i];
	}
	chars[length] = '\0';
	data = chars;
}
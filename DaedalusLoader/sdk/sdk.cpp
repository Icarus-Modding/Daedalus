#include <sdk.h>
#include "sdk-helper.h"

#define PLAYER_CHARACTER_CLASS "Class Icarus.IcarusPlayerCharacter"

UE4::UClass* icarus::AIcarusPlayerCharacter::StaticClass()
{
    return UE4::UObject::FindClass(PLAYER_CHARACTER_CLASS);
}

icarus::AIcarusPlayerCharacter* icarus::AIcarusPlayerCharacter::GetPlayerController()
{
	UE4::UFunction* fn = FindObject<UE4::UFunction>("Function Engine.GameplayStatics.GetPlayerController");
	UE4::UGameplayStatics* gpStatics = FindObject<UE4::UGameplayStatics>("Class Engine.GameplayStatics");

	Log::Info("FN 0x%x", fn);
	Log::Info("GS 0x%x", gpStatics);

	if (!fn || !gpStatics)
	{
		return nullptr;
	}

	struct
	{
		UE4::UObject* WorldContextObject;
		int PlayerIndex;
		icarus::AIcarusPlayerCharacter* ReturnValue;
	}params;

	params.WorldContextObject = UE4::UWorld::GetWorld();
	params.PlayerIndex = 0;

	gpStatics->ProcessEvent(fn, &params);

	return params.ReturnValue;
}

bool icarus::AIcarusPlayerCharacter::IsSprinting()
{
    IMPL_FIND_AND_CALL_FUNC_NO_ARGS(PLAYER_CHARACTER_CLASS ".IsSprinting", bool, val);
    return val;
}

bool icarus::AIcarusPlayerCharacter::IsReloading()
{
    IMPL_FIND_AND_CALL_FUNC_NO_ARGS(PLAYER_CHARACTER_CLASS ".IsReloading", bool, val);
    return val;
}

bool icarus::AIcarusPlayerCharacter::IsAiming()
{
    IMPL_FIND_AND_CALL_FUNC_NO_ARGS(PLAYER_CHARACTER_CLASS ".IsAiming", bool, val);
    return val;
}

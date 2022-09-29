#pragma once

#include <CoreUObject_classes.hpp>

namespace icarus {
    LOADER_API class AIcarusPlayerCharacter : public UE4::APlayerController {
    public:
        LOADER_API static UE4::UClass* StaticClass();
        LOADER_API static AIcarusPlayerCharacter* GetPlayerController();

        LOADER_API bool IsSprinting();
        LOADER_API bool IsReloading();
        LOADER_API bool IsAiming();
    };
}

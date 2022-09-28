#pragma once

class AIcarusPlayerCharacterSurvival;

USTRUCT(BlueprintType)
struct FThrowData {
	GENERATED_BODY()

struct AIcarusPlayerCharacterSurvival : AIcarusPlayerCharacter {
	bool bIsHoldingJump; // 0xab0(0x01)
	char pad_AB1[0x7]; // 0xab1(0x07)
	char pad_AB8[0x48]; // 0xab8(0x48)
	bool bClientFrozenMovement; // 0xb00(0x01)
	bool bServerFrozenMovement; // 0xb01(0x01)
	bool bActualFrozenMovement; // 0xb02(0x01)
	char pad_B03[0x5]; // 0xb03(0x05)
	struct UScopedViewportBlocker* FrozenMovementViewportBlocker; // 0xb08(0x08)
	bool bIsSpectateTarget; // 0xb10(0x01)
	char pad_B11[0x3]; // 0xb11(0x03)
	float base_turn_rate; // 0xb14(0x04)
	float base_look_up_rate; // 0xb18(0x04)
	float PlayerPitch; // 0xb1c(0x04)
	float PlayerYaw; // 0xb20(0x04)
	char pad_B24[0x4]; // 0xb24(0x04)
	struct UInventory* EnvirosuitInventory; // 0xb28(0x08)
	struct UInventory* BackpackInventory; // 0xb30(0x08)
	struct UInventory* QuickbarInventory; // 0xb38(0x08)
	struct UInventory* UpgradeInventory; // 0xb40(0x08)
	struct UInventory* VisionInventory; // 0xb48(0x08)
	int32_t FocusedQuickbarSlot; // 0xb50(0x04)
	bool bSmoothMouseInput; // 0xb54(0x01)
	char pad_B55[0x3]; // 0xb55(0x03)
	float InputSmoothSpeed; // 0xb58(0x04)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct UFLODInfluencePlayer* FLODInfluence; // 0xb60(0x08)
	struct UStomachComponent* StomachComponent; // 0xb68(0x08)
	struct UPlayerTerrainAnchorComponent* TerrainAnchor; // 0xb70(0x08)
	char pad_B78[0x8]; // 0xb78(0x08)
	void* ptr_23f354bb140; // 0xb80(0x08)
	char pad_B88[0x48]; // 0xb88(0x48)
	struct TArray<struct ADDGIVolume*> RTXGIVolumes; // 0xbd0(0x10)
	struct UPlayerStateRecorderComponent* Recorder; // 0xbe0(0x08)
	struct FMulticastInlineDelegate OnAttachedSeatChanged; // 0xbe8(0x10)
	struct FMulticastInlineDelegate OnPlayersSlept; // 0xbf8(0x10)
	struct FMulticastInlineDelegate OnInventoryWeightChanged; // 0xc08(0x10)
	struct FMulticastInlineDelegate OnPerspectiveUpdated; // 0xc18(0x10)
	char pad_C28[0x8]; // 0xc28(0x08)

	void UpdateMetaResources(); // Function Icarus.IcarusPlayerCharacterSurvival.UpdateMetaResources // (Final|Native|Public|BlueprintCallable) // @ game+0x18c2cb0
	void UpdateFrozenMovement(); // Function Icarus.IcarusPlayerCharacterSurvival.UpdateFrozenMovement // (Final|Native|Protected) // @ game+0x18c2c90
	void StopJump(); // Function Icarus.IcarusPlayerCharacterSurvival.StopJump // (Final|Native|Public|BlueprintCallable) // @ game+0x18c2c50
	void StartJump(); // Function Icarus.IcarusPlayerCharacterSurvival.StartJump // (Final|Native|Public|BlueprintCallable) // @ game+0x18c2c30
	void StartCrouch(); // Function Icarus.IcarusPlayerCharacterSurvival.StartCrouch // (Final|Native|Public|BlueprintCallable) // @ game+0x18c2c10
	void SetThermalVisionActive(bool bActive); // Function Icarus.IcarusPlayerCharacterSurvival.SetThermalVisionActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	void SetSpectateTarget(bool bState); // Function Icarus.IcarusPlayerCharacterSurvival.SetSpectateTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x18c2b80
	void SetIsTravellingInDropship(bool bIsInDropship); // Function Icarus.IcarusPlayerCharacterSurvival.SetIsTravellingInDropship // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	void SetAimVignetteIntensity(float NewIntensityTarget, float InterpSpeed); // Function Icarus.IcarusPlayerCharacterSurvival.SetAimVignetteIntensity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	void SetAimSpaceValues(float Pitch, float Yaw); // Function Icarus.IcarusPlayerCharacterSurvival.SetAimSpaceValues // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18c2a80
	void SetADSOffset(struct FTransform& NewOffset); // Function Icarus.IcarusPlayerCharacterSurvival.SetADSOffset // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	void ServerUpdateClientFrozenMovement(bool bFreezeMovement); // Function Icarus.IcarusPlayerCharacterSurvival.ServerUpdateClientFrozenMovement // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x18c28d0
	void ServerPlayerLeftByDropship(); // Function Icarus.IcarusPlayerCharacterSurvival.ServerPlayerLeftByDropship // (Final|Native|Public|BlueprintCallable) // @ game+0x18c25f0
	void Respawn(); // Function Icarus.IcarusPlayerCharacterSurvival.Respawn // (Final|Native|Private) // @ game+0x18c2400
	void OnWaterLevelUpdated(int32_t WaterLevel); // Function Icarus.IcarusPlayerCharacterSurvival.OnWaterLevelUpdated // (Final|Native|Public) // @ game+0x18c20f0
	void OnWaterConsumed(); // Function Icarus.IcarusPlayerCharacterSurvival.OnWaterConsumed // (Final|Native|Private|BlueprintCallable) // @ game+0x18c20d0
	void OnTerrainAnchorStateChanged(); // Function Icarus.IcarusPlayerCharacterSurvival.OnTerrainAnchorStateChanged // (Final|Native|Protected) // @ game+0x18c20b0
	void OnTemperatureUpdated(int32_t Temperature); // Function Icarus.IcarusPlayerCharacterSurvival.OnTemperatureUpdated // (Final|Native|Public) // @ game+0x18c2020
	void OnServer_ExitLadder(); // Function Icarus.IcarusPlayerCharacterSurvival.OnServer_ExitLadder // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x18c1fb0
	void OnPlayerDeath(struct UActorState* ActorStateIn); // Function Icarus.IcarusPlayerCharacterSurvival.OnPlayerDeath // (Final|Native|Private|BlueprintCallable) // @ game+0x18c18b0
	void OnOxygenLevelUpdated(int32_t OxygenLevel); // Function Icarus.IcarusPlayerCharacterSurvival.OnOxygenLevelUpdated // (Final|Native|Public) // @ game+0x18c1800
	void OnOxygenConsumed(); // Function Icarus.IcarusPlayerCharacterSurvival.OnOxygenConsumed // (Final|Native|Private|BlueprintCallable) // @ game+0x18c17e0
	void OnJumpFailed(); // Function Icarus.IcarusPlayerCharacterSurvival.OnJumpFailed // (Event|Public|BlueprintEvent) // @ game+0x1d63ee0
	void OnInventoryBouncedItem(struct FItemData& Item); // Function Icarus.IcarusPlayerCharacterSurvival.OnInventoryBouncedItem // (Final|Native|Protected|HasOutParms) // @ game+0x18c1640
	void OnFrozenMovementChanged(); // Function Icarus.IcarusPlayerCharacterSurvival.OnFrozenMovementChanged // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x18c13e0
	void OnFoodLevelUpdated(int32_t FoodLevel); // Function Icarus.IcarusPlayerCharacterSurvival.OnFoodLevelUpdated // (Final|Native|Public) // @ game+0x18c1350
	void OnFoodConsumed(); // Function Icarus.IcarusPlayerCharacterSurvival.OnFoodConsumed // (Final|Native|Private|BlueprintCallable) // @ game+0x18c1330
	void OnBiomeUpdated(); // Function Icarus.IcarusPlayerCharacterSurvival.OnBiomeUpdated // (Final|Native|Private|BlueprintCallable) // @ game+0x18c12f0
	void NotifyPlayersSlept(); // Function Icarus.IcarusPlayerCharacterSurvival.NotifyPlayersSlept // (Final|Native|Protected|BlueprintCallable) // @ game+0x18c12c0
	void NotifyPerspectiveUpdated(); // Function Icarus.IcarusPlayerCharacterSurvival.NotifyPerspectiveUpdated // (Final|Native|Protected|BlueprintCallable) // @ game+0x18c1290
	void NotifyInventoryWeightChanged(int32_t NewWeight); // Function Icarus.IcarusPlayerCharacterSurvival.NotifyInventoryWeightChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x18c1200
	void NotifyAttachedSeatChanged(); // Function Icarus.IcarusPlayerCharacterSurvival.NotifyAttachedSeatChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x18c11d0
	void NotifyAddedMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // Function Icarus.IcarusPlayerCharacterSurvival.NotifyAddedMovementInput // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1d63ee0
	void MoveRight(float Value); // Function Icarus.IcarusPlayerCharacterSurvival.MoveRight // (Final|Native|Public) // @ game+0x18c1150
	void MoveForward(float Value); // Function Icarus.IcarusPlayerCharacterSurvival.MoveForward // (Final|Native|Public) // @ game+0x18c10d0
	bool IsAlive(); // Function Icarus.IcarusPlayerCharacterSurvival.IsAlive // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x18c0fe0
	void InventoryUpdated(struct UInventory* Inventory, int32_t Location); // Function Icarus.IcarusPlayerCharacterSurvival.InventoryUpdated // (Final|Native|Public) // @ game+0x18c0ee0
	bool HasCraftingRequirements(struct FTalentsRowHandle Talent); // Function Icarus.IcarusPlayerCharacterSurvival.HasCraftingRequirements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	bool GetThermalVisionActive(); // Function Icarus.IcarusPlayerCharacterSurvival.GetThermalVisionActive // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	struct TArray<struct FItemData> GetLoadout(); // Function Icarus.IcarusPlayerCharacterSurvival.GetLoadout // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	bool GetIsInCave(); // Function Icarus.IcarusPlayerCharacterSurvival.GetIsInCave // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	void GetFPCameraOrientation(struct FVector& OutPosition, struct FVector& OutForward); // Function Icarus.IcarusPlayerCharacterSurvival.GetFPCameraOrientation // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	struct AIcarusItem* GetFocusedItem(); // Function Icarus.IcarusPlayerCharacterSurvival.GetFocusedItem // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	enum class EProspectLocation GetCurrentProspectLocation(); // Function Icarus.IcarusPlayerCharacterSurvival.GetCurrentProspectLocation // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18c0ad0
	int32_t GetCurrentInventoryWeight(); // Function Icarus.IcarusPlayerCharacterSurvival.GetCurrentInventoryWeight // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	struct USphereComponent* GetAudioCollider(); // Function Icarus.IcarusPlayerCharacterSurvival.GetAudioCollider // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	void EndCrouch(); // Function Icarus.IcarusPlayerCharacterSurvival.EndCrouch // (Final|Native|Public|BlueprintCallable) // @ game+0x18c0700
	void Debug_SetGOAPWorldStatsActive(bool bActive); // Function Icarus.IcarusPlayerCharacterSurvival.Debug_SetGOAPWorldStatsActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	bool Debug_GetGOAPWorldStatsActive(); // Function Icarus.IcarusPlayerCharacterSurvival.Debug_GetGOAPWorldStatsActive // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1d63ee0
	void Debug_DrawArmourComponent(); // Function Icarus.IcarusPlayerCharacterSurvival.Debug_DrawArmourComponent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1d63ee0
	void AddYaw(float Value); // Function Icarus.IcarusPlayerCharacterSurvival.AddYaw // (Final|Native|Public) // @ game+0x18c0170
	void AddPitch(float Value); // Function Icarus.IcarusPlayerCharacterSurvival.AddPitch // (Final|Native|Public) // @ game+0x18c00f0
};
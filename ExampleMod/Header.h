#pragma once
#include "ExampleMod.h"
#include "Utilities/MinHook.h"
#include "Ue4.hpp"
struct UTraitBehaviour : UActorComponent {
	struct UTraitBehaviours* OwningComponent; // 0xb0(0x08)
	bool bBehaviourDelegatesBound; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // Function Icarus.TraitBehaviour.OnTraitAnimNotify // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19e23a0
	void OnRep_OwningComponent(); // Function Icarus.TraitBehaviour.OnRep_OwningComponent // (Native|Event|Protected|BlueprintEvent) // @ game+0x179ef10
};

struct UInventory : UTraitBehaviour {
	struct FMulticastInlineDelegate* OnInventoryItemChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate* OnAllInventoryItemsChanged; // 0xd0(0x10)
	int32_t CurrentWeight; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FInventorySlotsFastArray* Slots; // 0xe8(0x158)
	struct UE4::FTransform OverflowSpawnTransform; // 0x240(0x30)
	struct UE4::TArray<struct FItemData> InitialItems; // 0x270(0x10)
	struct FMulticastSparseDelegate* OnItemAdded; // 0x280(0x01)
	struct FMulticastSparseDelegate* OnItemRemoved; // 0x281(0x01)
	struct FMulticastSparseDelegate* OnItemRemovedVerbose; // 0x282(0x01)
	struct FMulticastSparseDelegate* Client_OnItemsUpdated; // 0x283(0x01)
	struct FMulticastSparseDelegate* OnWeightUpdated; // 0x284(0x01)
	struct FMulticastSparseDelegate* SlotCountChange; // 0x285(0x01)
	struct FMulticastSparseDelegate* SlotsUpdated; // 0x286(0x01)
	struct FMulticastSparseDelegate* OnDroppingOverflowItem; // 0x287(0x01)
	struct FMulticastSparseDelegate* OnItemBroke; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FInventoryInfoRowHandle* InventoryInfoRowHandle; // 0x28c(0x18)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	char pad_2A8[0x18]; // 0x2a8(0x18)
};

struct AIcarusPlayerCharacterSurvival {
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
	struct UE4::TArray<struct ADDGIVolume*> RTXGIVolumes; // 0xbd0(0x10)
	struct UPlayerStateRecorderComponent* Recorder; // 0xbe0(0x08)
	char pad_C28[0x8]; // 0xc28(0x08)
};

struct ABP_IcarusPlayerCharacterSurvival_C : AIcarusPlayerCharacterSurvival {
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc30(0x08)
	struct UBoxComponent* PP_Container; // 0xc38(0x08)
	struct UPostProcessComponent* PostProcess_Underwater_Day; // 0xc40(0x08)
	struct UPostProcessComponent* PostProcess_Underwater_Night; // 0xc48(0x08)
	struct UPostProcessComponent* PostProcess_Lensflare; // 0xc50(0x08)
	struct UPostProcessComponent* PostProcess_EnterWater; // 0xc58(0x08)
	struct UPostProcessComponent* PostProcess_OutOfWater; // 0xc60(0x08)
	struct UPostProcessComponent* PostProcess_Water; // 0xc68(0x08)
	struct UPostProcessComponent* HighlightablePostProcess; // 0xc70(0x08)
	struct UPostProcessComponent* ActionablePostProcess; // 0xc78(0x08)
	struct UPostProcessComponent* PostProcess_Heat; // 0xc80(0x08)
	struct UPostProcessComponent* PostProcess_Thermal; // 0xc88(0x08)
	struct UPostProcessComponent* PostProcess_DamageIndicator; // 0xc90(0x08)
	struct UPostProcessComponent* PostProcess_Underwater; // 0xc98(0x08)
	struct UPostProcessComponent* PostProcess_Cold; // 0xca0(0x08)
	struct UShelteredModifierComponent* ShelteredModifier; // 0xca8(0x08)
	struct UCapsuleComponent* ClothAffector; // 0xcb0(0x08)
	struct UBP_UIProjectionComponent_Player_C* BP_UIProjectionComponent_Player; // 0xcb8(0x08)
	struct UBP_Flammable_Player_C* BP_Flammable_Player; // 0xcc0(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion; // 0xcc8(0x08)
	struct UBP_ItemManipulationComponent_C* BP_ItemManipulationComponent; // 0xcd0(0x08)
	struct USphereComponent* WeightCollider; // 0xcd8(0x08)
	struct UBP_PlayerMusicComponent_C* BP_PlayerMusicComponent; // 0xce0(0x08)
	struct UNiagaraComponent* UnderwaterFX; // 0xce8(0x08)
	struct UStaticMeshComponent* UnderwaterVolume; // 0xcf0(0x08)
	struct UBP_PlayerMovementAudioComponent_C* BP_PlayerMovementAudioComponent; // 0xcf8(0x08)
	struct UExperienceComponent* Experience; // 0xd00(0x08)
	struct USceneComponent* NameMarkerLocation; // 0xd08(0x08)
	struct UBP_PlayerBuildingPlacement_C* BP_PlayerBuildingPlacement; // 0xd10(0x08)
	struct UChildActorComponent* BP_RVT_FoliagePersistant; // 0xd18(0x08)
	struct UBP_PlayerEnvironmentalAudioComponent_C* BP_PlayerEnvironmentalAudioComponent; // 0xd20(0x08)
	struct UBP_ShelteredComponent_C* BP_ShelteredComponent; // 0xd28(0x08)
	struct UBP_GroundSurfaceChecker_C* BP_GroundSurfaceChecker; // 0xd30(0x08)
	struct USkeletalMeshComponent* TPMeshFull; // 0xd38(0x08)
	struct UBP_PlayerEffectsComponent_C* BP_PlayerEffectsComponent; // 0xd40(0x08)
	struct USceneComponent* FPSpotlightAttach; // 0xd48(0x08)
	struct USceneComponent* TPSpotlightAttach; // 0xd50(0x08)
	struct USkeletalMeshComponent* TPMeshSimple; // 0xd58(0x08)
	struct UBP_SwimmingComponent_C* BP_SwimmingComponent; // 0xd60(0x08)
	struct USceneComponent* DamageDirectionPivot; // 0xd68(0x08)
	struct UCameraComponent* FPCamera; // 0xd70(0x08)
	struct USkeletalMeshComponent* FPMesh; // 0xd78(0x08)
	struct USceneComponent* BowLocator; // 0xd80(0x08)
	struct UBP_PlayerCameraComponent_C* BP_PlayerCameraComponent; // 0xd88(0x08)
	struct UBP_Weight_C* BP_Weight; // 0xd90(0x08)
	struct UProcessingComponent* Processing; // 0xd98(0x08)
	struct UWidgetComponent* PlayerNameWidget; // 0xda0(0x08)
	struct UArrowComponent* Arrow1; // 0xda8(0x08)
	float PP_ExitWater_Line_205F5B6F4CBC44F0C618AB9DF54C52A8; // 0xdb0(0x04)
	float PP_ExitWater_Time_205F5B6F4CBC44F0C618AB9DF54C52A8; // 0xdb4(0x04)
	enum class ETimelineDirection* PP_ExitWater__Direction_205F5B6F4CBC44F0C618AB9DF54C52A8; // 0xdb8(0x01)
	char pad_DB9[0x7]; // 0xdb9(0x07)
	struct UTimelineComponent* PP_ExitWater; // 0xdc0(0x08)
	float PP_EnterWater_Time_BC5B894041D4A44E3CB9059F469AE474; // 0xdc8(0x04)
	enum class ETimelineDirection* PP_EnterWater__Direction_BC5B894041D4A44E3CB9059F469AE474; // 0xdcc(0x01)
	char pad_DCD[0x3]; // 0xdcd(0x03)
	struct UTimelineComponent* PP_EnterWater; // 0xdd0(0x08)
	bool JumpRequested; // 0xdd8(0x01)
	char pad_DD9[0x3]; // 0xdd9(0x03)
	float TurnRate; // 0xddc(0x04)
	float LookUpRate; // 0xde0(0x04)
	bool IsItemActionPlaying; // 0xde4(0x01)
	char pad_DE5[0x3]; // 0xde5(0x03)
	struct AIcarusItem* FocusedItem; // 0xde8(0x08)
	struct USkeletalMeshComponent* ActiveMesh; // 0xdf0(0x08)
	struct ABP_Grid_Base_C* RemoteFocusedGrid; // 0xdf8(0x08)
	struct ABP_ObjectSlot_C* CurrentSlotConnection; // 0xe00(0x08)
	bool IsLocalCrafting; // 0xe08(0x01)
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FMulticastInlineDelegate* ProcessingUpdated; // 0xe10(0x10)
	bool ClientHasAuthority; // 0xe20(0x01)
	char pad_E21[0x3]; // 0xe21(0x03)
	float DefaultFPCameraFOV; // 0xe24(0x04)
	struct AIcarusItem* UtilityItem; // 0xe28(0x08)
	struct UE4::TArray<struct UUMG_DamageIndicator_C*> DamageIndicatorWidgets; // 0xe30(0x10)
	struct FTransform* ADSOffset; // 0xe40(0x30)
	struct UMaterialInstanceDynamic* PPDamageMat; // 0xe70(0x08)
	float PPDamageTakenIntensity; // 0xe78(0x04)
	char pad_E7C[0x4]; // 0xe7c(0x04)
	struct UE4::AActor* LastDamageCauser; // 0xe80(0x08)
	struct UE4::FVector LastDamageLocation; // 0xe88(0x0c)
	char pad_E94[0x4]; // 0xe94(0x04)
	struct UMaterialInstanceDynamic* PPDamageAppliedMat; // 0xe98(0x08)
	struct UCurveFloat* HeartbeatCurve; // 0xea0(0x08)
	int32_t LastStamina; // 0xea8(0x04)
	float PPDamageDealtIntensity; // 0xeac(0x04)
	int32_t CurrentWeight; // 0xeb0(0x04)
	char pad_EB4[0x4]; // 0xeb4(0x04)
	struct FMulticastInlineDelegate* AttachedSeatChanged; // 0xeb8(0x10)
	int32_t CurrentStamina; // 0xec8(0x04)
	int32_t OverburnedUID; // 0xecc(0x04)
	float FootstepCooldownEndTime; // 0xed0(0x04)
	struct FFAfflictionTrigger* Afflication_Threshold_Overheating; // 0xed4(0x2c)
	struct FFAfflictionTrigger* Afflication_Threshold_HeatOverload; // 0xf00(0x2c)
	struct FFAfflictionTrigger* Afflication_Threshold_Chilled; // 0xf2c(0x2c)
	struct FFAfflictionTrigger* Afflication_Threshold_Freezing; // 0xf58(0x2c)
	float FootstepMaxPlayDistanceSquared; // 0xf84(0x04)
	struct FMulticastInlineDelegate* AbortInteraction; // 0xf88(0x10)
	struct UAnimMontage* TPWaveEmote; // 0xf98(0x08)
	struct UAnimMontage* FPWaveEmote; // 0xfa0(0x08)
	struct AIcarusActor* CachedInteractionRaycastHit; // 0xfa8(0x08)
	struct FMulticastInlineDelegate* UtilityItemChanged; // 0xfb0(0x10)
	struct FMulticastInlineDelegate* UnderwaterChanged; // 0xfc0(0x10)
	struct UMaterialInstanceDynamic* HelmetMatRef; // 0xfd0(0x08)
	struct FTimerHandle* SwimmingTimer; // 0xfd8(0x08)
	int32_t SwimmingUID; // 0xfe0(0x04)
	bool BlockPostprocess; // 0xfe4(0x01)
	char pad_FE5[0x3]; // 0xfe5(0x03)
	struct FMulticastInlineDelegate* FireModeChanged; // 0xfe8(0x10)
	struct FMulticastInlineDelegate* FocusedItemUpdated; // 0xff8(0x10)
	bool OutOfWaterPPEnabled; // 0x1008(0x01)
	char pad_1009[0x3]; // 0x1009(0x03)
	float OutOfWaterPPLength; // 0x100c(0x04)
	float OutOfWaterPPFadeOutLength; // 0x1010(0x04)
	char pad_1014[0x4]; // 0x1014(0x04)
	struct UMaterialInstanceDynamic* WaterPPMaterial; // 0x1018(0x08)
	bool IsTravellingInDropship; // 0x1020(0x01)
	char pad_1021[0x7]; // 0x1021(0x07)
	struct FMulticastInlineDelegate* TravellingInDropshipChanged; // 0x1028(0x10)
	bool ToggleCrouch; // 0x1038(0x01)
	bool HasValidFocusMontage; // 0x1039(0x01)
	char pad_103A[0x6]; // 0x103a(0x06)
	struct FPoseSnapshot* DeathPose; // 0x1040(0x38)
	struct UMaterialInstanceDynamic* WaterEnterPPMaterial; // 0x1078(0x08)
	bool CameFromUnderwater; // 0x1080(0x01)
	char pad_1081[0x7]; // 0x1081(0x07)
	struct UUMG_GOAPWorldStats_C* GOAPWorldStatsRef; // 0x1088(0x08)
	bool GOAPWorldStatsActive; // 0x1090(0x01)
	char pad_1091[0x7]; // 0x1091(0x07)
	struct FTimerHandle* AltInteractionTimer; // 0x1098(0x08)
	float LastDamageYaw; // 0x10a0(0x04)
	float LastDamageTime; // 0x10a4(0x04)
	struct FMulticastInlineDelegate* OnCosmeticDamageEffects; // 0x10a8(0x10)
	struct AIcarusCharacter* Host; // 0x10b8(0x08)
	bool IsUnderwater; // 0x10c0(0x01)
	bool InteractPressed; // 0x10c1(0x01)
	bool CameraIsUnderwater; // 0x10c2(0x01)
	char pad_10C3[0x5]; // 0x10c3(0x05)
	struct UE4::TArray<struct FItemData> Items; // 0x10c8(0x10)
	bool IsDead; // 0x10d8(0x01)
	char pad_10D9[0x7]; // 0x10d9(0x07)
	struct UE4::TMap<struct FKeybindingsRowHandle, struct FTimerHandle> KeybindHoldTimerHandles; // 0x10e0(0x50)
	struct FMulticastInlineDelegate* BuildingRepairWarningChanged; // 0x1130(0x10)
	bool ShowRepairWarning; // 0x1140(0x01)
	char pad_1141[0x3]; // 0x1141(0x03)
	float DefaultVignetteIntensity; // 0x1144(0x04)
	struct UCurveFloat* CameraShakeCurve; // 0x1148(0x08)
	bool ServerIsCurrentlyInCave; // 0x1150(0x01)
	bool ToggleSprint; // 0x1151(0x01)
	char pad_1152[0x2]; // 0x1152(0x02)
	float LastMovementInputTime; // 0x1154(0x04)
	float MovementInputEndDelay; // 0x1158(0x04)
	float MovementInputEndThreshold; // 0x115c(0x04)
	struct AActor* CurrentCaveActor; // 0x1160(0x08)
	bool GracePeriodActive; // 0x1168(0x01)
	char pad_1169[0x3]; // 0x1169(0x03)
	int32_t UtilitySlotIndex; // 0x116c(0x04)
	bool BackpackMeshHidden; // 0x1170(0x01)
	char pad_1171[0x7]; // 0x1171(0x07)
	struct AIcarusItem* LightItem; // 0x1178(0x08)
	struct FMulticastInlineDelegate* VisionItemChanged; // 0x1180(0x10)
	struct FMulticastInlineDelegate* OnFootstep; // 0x1190(0x10)
	bool IsHoldingCrouch; // 0x11a0(0x01)
	char pad_11A1[0x7]; // 0x11a1(0x07)
	struct FTimerHandle* PlayerOutOfWorldTimer; // 0x11a8(0x08)
	struct UE4::FVector LastGroundedWorldLocation; // 0x11b0(0x0c)
	float TimeStartedFalling; // 0x11bc(0x04)
	float LastGroundedLocationTeleportTime; // 0x11c0(0x04)
};
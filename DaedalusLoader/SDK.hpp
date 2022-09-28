#include "Utilities/MinHook.h"
#include "Ue4.hpp"

enum class EDynamicItemProperties : uint8_t {
	AssociatedItemInventoryId = 0,
	AssociatedItemInventorySlot = 1,
	DynamicState = 2,
	GunCurrentMagSize = 3,
	CurrentAmmoType = 4,
	BuildingVariation = 5,
	Durability = 6,
	ItemableStack = 7,
	MillijoulesRemaining = 8,
	TransmutableUnits = 9,
	Fillable_StoredUnits = 10,
	Fillable_Type = 11,
	Decayable_CurrentSpoilTime = 12,
	InventoryContainer_LinkedInventoryId = 13,
	MaxDynamicItemProperties = 14,
	EDynamicItemProperties_MAX = 15
};

struct FIntEnum {
	char pad_0[0x8]; // 0x00(0x08)
	struct UE4::FName Value; // 0x08(0x08)
};

struct FRowEnum : FIntEnum {
};

struct FStatsEnum : FRowEnum {
};

struct FAlterationsEnum : FRowEnum {
};

struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

struct FIcarusTableRowBase : FTableRowBase {
	struct UE4::TArray<struct UE4::UObject*> CachedHardReferences; // 0x08(0x10)
};

struct FItemDynamicData : FIcarusTableRowBase {
	enum class EDynamicItemProperties PropertyType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Value; // 0x1c(0x04)
};

struct FRowHandleInternal {
	char pad_0[0x1]; // 0x00(0x01)
};

struct FRowHandle : FRowHandleInternal {
	int32_t DataTablePtr; // 0x00(0x08)
	struct UE4::FName RowName; // 0x08(0x08)
	struct UE4::FName DataTableName; // 0x10(0x08)
};

struct FItemsStaticRowHandle : FRowHandle {
};

struct FTagQueriesRowHandle : FRowHandle {
};

struct FIcarusStatReplicated {
	struct FStatsEnum Stat; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

struct FCustomProperties {
	struct UE4::TArray<struct FIcarusStatReplicated> StaticWorldStats; // 0x00(0x10)
	struct UE4::TArray<struct FIcarusStatReplicated> StaticWorldHeldStats; // 0x10(0x10)
	struct UE4::TArray<struct FIcarusStatReplicated> Stats; // 0x20(0x10)
	struct UE4::TArray<struct FAlterationsEnum> Alterations; // 0x30(0x10)
};

struct FGameplayTag {
	struct UE4::FName TagName; // 0x00(0x08)
};

struct FGameplayTagContainer {
	struct UE4::TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct UE4::TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

struct FItemData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle ItemStaticData; // 0x18(0x18)
	struct UE4::TArray<struct FItemDynamicData> ItemDynamicData; // 0x30(0x10)
	struct FCustomProperties CustomProperties; // 0x40(0x40)
	struct UE4::FString DatabaseGUID; // 0x80(0x10)
	struct FGameplayTagContainer RuntimeTags; // 0x90(0x20)
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

struct FInventorySlot : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FItemData ItemData; // 0x10(0xb0)
	struct FTagQueriesRowHandle Query; // 0xc0(0x18)
	bool Locked; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FItemsStaticRowHandle LastItem; // 0xdc(0x18)
	bool Slotable; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32_t Index; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};



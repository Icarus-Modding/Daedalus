// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableTrainPlatform.h"
#include "FGTrainPlatformConnection.h"
#include "FGPowerInfoComponent.h"
#include "FGFactoryHologram.h"

AFGBuildableTrainPlatform::AFGBuildableTrainPlatform() : Super() {
	this->mPlatformConnections.Add(mPlatformConnection0); this->mPlatformConnections.Add(mPlatformConnection1);
	this->mPlatformConnection0 = CreateDefaultSubobject<UFGTrainPlatformConnection>(TEXT("PlatformConnection0")); this->mPlatformConnection0->SetupAttachment(this->RootComponent);
	this->mPlatformConnection1 = CreateDefaultSubobject<UFGTrainPlatformConnection>(TEXT("PlatformConnection1")); this->mPlatformConnection1->SetupAttachment(this->RootComponent);
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableTrainPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableTrainPlatform::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableTrainPlatform::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGBuildableTrainPlatform::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableTrainPlatform::Dismantle_Implementation(){ }
void AFGBuildableTrainPlatform::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
bool AFGBuildableTrainPlatform::IsUseable_Implementation() const{ return bool(); }
FRailroadTrackPosition AFGBuildableTrainPlatform::GetTrackPosition() const{ return FRailroadTrackPosition(); }
int32 AFGBuildableTrainPlatform::GetTrackGraphID() const{ return int32(); }
AFGBuildableTrainPlatform* AFGBuildableTrainPlatform::GetConnectedPlatformInDirectionOf(uint8 direction){ return nullptr; }
void AFGBuildableTrainPlatform::NotifyTrainDocked( AFGRailroadVehicle* railroadVehicle,  AFGBuildableRailroadStation* initiatedByStation){ }
void AFGBuildableTrainPlatform::UpdateDockingSequence(){ }
void AFGBuildableTrainPlatform::SetupRailroadTrack(){ }
void AFGBuildableTrainPlatform::FinishDockingSequence(){ }
void AFGBuildableTrainPlatform::OnRep_UpdateDockingStatus(){ }
void AFGBuildableTrainPlatform::ReverseConnectionDirections(){ }
void AFGBuildableTrainPlatform::AssignRailroadTrack( AFGBuildableRailroadTrack* track){ }

// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePole.h"
#include "Hologram/FGPoleHologram.h"
#include "FGColoredInstanceMeshProxy.h"
#include "FGFactoryConnectionComponent.h"
#include "Components/SceneComponent.h"

AFGBuildablePole::AFGBuildablePole() : Super() {
	this->mHeight = 100.0;
	this->mPoleComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("PoleComponentProxy"));
	this->mSnapOnly0 = CreateDefaultSubobject<UFGFactoryConnectionComponent>(TEXT("SnapOnly0"));
	this->mPoleMesh = nullptr;
	this->mUseStaticHeight = false;
	this->mHologramClass = AFGPoleHologram::StaticClass();
	this->mPoleComponentProxy->SetupAttachment(RootComponent);
	this->mSnapOnly0->SetupAttachment(RootComponent);
}
void AFGBuildablePole::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePole::BeginPlay(){ }
void AFGBuildablePole::SetPoleHeight(float height){ }
void AFGBuildablePole::SetupConnectionComponent(){ }
void AFGBuildablePole::PostLoad(){ Super::PostLoad(); }
const FName AFGBuildablePole::PoleMeshName = FName();

// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceDeposit.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AFGResourceDeposit::AFGResourceDeposit() : Super() {
	this->mResourceDepositTableIndex = -1;
	this->mDepositMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("DepositMesh"));
	this->mExtractMultiplier = 2;
	this->mDoSpawnParticle = true;
	this->bReplicates = true;
}
void AFGResourceDeposit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGResourceDeposit::PostLoad(){ Super::PostLoad();}
void AFGResourceDeposit::BeginPlay(){ }
void AFGResourceDeposit::RollResourceType(){ }
void AFGResourceDeposit::TrySetDesiredResourceType(){ }
void AFGResourceDeposit::SetupResourceInfo(){ }
void AFGResourceDeposit::ExtractResourceAndGiveToPlayer(AFGCharacterPlayer* toPlayer, int32 amount){ }
void AFGResourceDeposit::OnRep_ResourceDepositEmptied(){ }
void AFGResourceDeposit::InitRadioactivity(){ }
void AFGResourceDeposit::UpdateRadioactivity(){ }

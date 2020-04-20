// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildGunDismantle.h"


UFGBuildGunStateDismantle::UFGBuildGunStateDismantle() : Super() {
	
}
void UFGBuildGunStateDismantle::GetLifetimeReplicatedProps(TArray<  FLifetimeProperty > & OutLifetimeProps) const{ }
void UFGBuildGunStateDismantle::BeginState_Implementation(){ }
void UFGBuildGunStateDismantle::EndState_Implementation(){ }
void UFGBuildGunStateDismantle::TickState_Implementation(float deltaTime){ }
void UFGBuildGunStateDismantle::PrimaryFire_Implementation(){ }
void UFGBuildGunStateDismantle::SecondaryFire_Implementation(){ }
void UFGBuildGunStateDismantle::OnRecipeSampled_Implementation(TSubclassOf<class UFGRecipe> recipe){ }
AActor* UFGBuildGunStateDismantle::GetSelectedActor() const{ return nullptr; }
TArray<FInventoryStack> UFGBuildGunStateDismantle::GetPeekDismantleRefund() const{ return TArray<FInventoryStack>(); }
bool UFGBuildGunStateDismantle::CanDismantle() const{ return bool(); }
TArray< FInventoryStack > UFGBuildGunStateDismantle::GetDismantleRefund() const{ return TArray<FInventoryStack>(); }
bool UFGBuildGunStateDismantle::CanBeginBuildGunDelay() const{ return bool(); }
void UFGBuildGunStateDismantle::BeginBuildGunDelay(){ }
void UFGBuildGunStateDismantle::ResetBuildGunDelay(){ }
void UFGBuildGunStateDismantle::Internal_OnMultiDismantleStateChanged(bool newValue){ }
void UFGBuildGunStateDismantle::Server_DismantleActors_Implementation(const TArray<class AActor*>& selectedActors){ }
bool UFGBuildGunStateDismantle::Server_DismantleActors_Validate(const TArray<class AActor*>& selectedActors){ return bool(); }
void UFGBuildGunStateDismantle::Server_PeekAtDismantleRefund_Implementation(const TArray<class AActor*>& selectedActors){ }
bool UFGBuildGunStateDismantle::Server_PeekAtDismantleRefund_Validate(const TArray<class AActor*>& selectedActors){ return bool(); }
void UFGBuildGunStateDismantle::OnRep_PeekDismantleRefund(){ }
void UFGBuildGunStateDismantle::Internal_DismantleActor( AActor* actorToDismantle){ }
void UFGBuildGunStateDismantle::SetAimedAtActor( AActor* selected){ }
void UFGBuildGunStateDismantle::AddPendingDismantleActor( AActor* selected){ }
void UFGBuildGunStateDismantle::ClearPendingSelectedActors(){ }
bool UFGBuildGunStateDismantle::DoesReplicatedPeekDataMatch() const{ return bool(); }
void UFGBuildGunStateDismantle::UpdatePeekDismantleRefunds(){ }
void UFGBuildGunStateDismantle::ClearStaleDismantleActors(){ }

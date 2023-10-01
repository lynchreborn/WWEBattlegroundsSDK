#include "WWEBagpiper.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AWWEBagpiper::WaitNextState(float TimeToWait, EWWEBagpiperStates NewState) {
}

void AWWEBagpiper::WaitAnimInstanceState(float WaitTime, bool bIsPlaying, bool bIsAwake) {
}

void AWWEBagpiper::OnEndGetNewBagpipeAnim(UAnimMontage* AnimMontage, bool bInterrupted, EWWEBagpiperStates NewState) {
}

void AWWEBagpiper::MulticastSetState_Implementation(EWWEBagpiperStates NewState) {
}

void AWWEBagpiper::MulticastSetBagpipesProperties_Implementation(AWWEInteractableWeapon* Bagpipes) {
}

void AWWEBagpiper::MulticastChangeAnimInstanceStates_Implementation(bool bIsPlaying, bool bIsAwake) {
}

void AWWEBagpiper::InitBagpiper() {
}

void AWWEBagpiper::GetNewBagpipes() {
}

void AWWEBagpiper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEBagpiper, CurrentBagpipes);
}

AWWEBagpiper::AWWEBagpiper() {
    this->bLimitSpawneableBagpipes = false;
    this->MaxSpawneableBagpipes = -1;
    this->MainSM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainSM"));
    this->BagpipesSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BagpipesSkeletalMesh"));
    this->WeaponSpawnerChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponSpawnerChildActor"));
    this->NewPipeAnim = NULL;
    this->BagpipeStolenAnim = NULL;
    this->WokeUpAnim = NULL;
    this->GoToSleepAnim = NULL;
    this->BagpipesNewPipeAnim = NULL;
    this->BagpipesBagpipeStolenAnim = NULL;
    this->BagpipesWokeUpAnim = NULL;
    this->BagpipesGoToSleepAnim = NULL;
    this->CurrentBagpipes = NULL;
}


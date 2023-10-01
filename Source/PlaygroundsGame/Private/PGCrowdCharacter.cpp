#include "PGCrowdCharacter.h"
#include "Components/SkeletalMeshComponent.h"

APGCrowdCharacter::APGCrowdCharacter() {
    this->HeadLookAtInterpolationSpeed = 16.00f;
    this->TeamIndex = EPGCrowdSupportType::LOCAL;
    this->MainSM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainSM"));
    this->IdleAnimations = NULL;
    this->HappyAnimations = NULL;
    this->VeryHappyAnimations = NULL;
    this->UnhappyAnimations = NULL;
    this->AngryAnimations = NULL;
    this->TauntAnimations = NULL;
    this->SupportAnimations = NULL;
    this->CustomState1Animations = NULL;
    this->InGameTickInterval = 60;
    this->AnimInstance = NULL;
    this->CrowdMinReactionTime = 0.00f;
    this->CrowdMaxReactionTime = 0.00f;
}


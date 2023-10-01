#include "WWEHelicopterEvent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWEHelicopterEvent::OnSequenceFinished() {
}

void AWWEHelicopterEvent::MulticastSetState_Implementation(EWWEHelicopterEventState NewState) {
}

AWWEHelicopterEvent::AWWEHelicopterEvent() {
    this->HelicopterEventTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerRootComponent"));
    this->MoveToTarget = CreateDefaultSubobject<USceneComponent>(TEXT("MoveToTarget"));
    this->RotateToTarget = CreateDefaultSubobject<USceneComponent>(TEXT("RotateToTarget"));
    this->SkateDynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("SkateDynamicMaterialComponent"));
    this->FenceDynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("FenceDynamicMaterialComponent"));
    this->EventCooldown = 0.00f;
    this->TimeWindowToJump = 5.00f;
    this->Helicopter = NULL;
    this->Fence = NULL;
    this->BackgroundLeftRightSequence = NULL;
    this->BackgroundRightLeftSequence = NULL;
    this->EntrySequence = NULL;
    this->IdleSequence = NULL;
    this->GoUpSequence = NULL;
    this->ExitSequence = NULL;
    this->HelicopterEntrySound = NULL;
    this->HelicopterExitSound = NULL;
    this->CameraDistanceMultiplier = 1.00f;
    this->CameraDistanceMultiplierOnCrosshair = 0.00f;
    this->CameraPitchOffset = 0.00f;
    this->CameraPitchOffsetOnCrosshair = 0.00f;
    this->CameraFOVMultiplier = 1.00f;
    this->CameraLookAtRingCenter = 0;
    this->CameraOverrideTargetAlpha = 0.00f;
    this->LevelSequencePlayer = NULL;
    this->SequenceActor = NULL;
    this->State = EWWEHelicopterEventState::IdleLeftRight;
    this->bWantsToDoTheEvent = false;
    this->bInLeftSide = false;
    this->ReservedCharacter = NULL;
    this->InteractingCharacter = NULL;
    this->EntrySoundAudioComponent = NULL;
}


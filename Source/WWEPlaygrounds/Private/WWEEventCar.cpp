#include "WWEEventCar.h"
#include "Components/SceneComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWEEventCar::RestartCraneSequence_Implementation() {
}

void AWWEEventCar::RestartCraneLever() {
}

void AWWEEventCar::PauseLeverSequence_Implementation() {
}

void AWWEEventCar::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWEEventCar::EndLeverSequence_Implementation() {
}

void AWWEEventCar::EndCraneSequence_Implementation() {
}

void AWWEEventCar::DisableColliderCar_Implementation() {
}

AWWEEventCar::AWWEEventCar() {
    this->CraneButtonComponent = NULL;
    this->CarHitComponent = NULL;
    this->LeverMesh = NULL;
    this->LeverBaseMesh = NULL;
    this->CraneDown = NULL;
    this->CraneUp = NULL;
    this->LeverDown = NULL;
    this->LeverUp = NULL;
    this->CraneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CarSequenceAsset = NULL;
    this->LeverSequenceAsset = NULL;
    this->DynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("DynamicMaterialComponent"));
    this->BaseMeshEffectComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("BaseMeshEffectComponent"));
    this->DamageToCharacter = 200.00f;
    this->TimeRestartCraneLever = 10.00f;
    this->TimeStartCraneDown = 1.00f;
    this->CarSequencePlayer = NULL;
    this->LeverSequencePlayer = NULL;
    this->CarSequenceActor = NULL;
    this->LeverSequenceActor = NULL;
}


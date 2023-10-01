#include "WWEPlayerControllerCombat.h"
#include "WWEAngryRamControlComponent.h"
#include "WWEContextualActionsComponent.h"
#include "WWEControlComponentCombat.h"
#include "WWELearningComponent.h"

void AWWEPlayerControllerCombat::ServerSetKOTRRecords_Implementation(const int32 RecordKickOuts, const int32 RecordTimeOnRing) {
}
bool AWWEPlayerControllerCombat::ServerSetKOTRRecords_Validate(const int32 RecordKickOuts, const int32 RecordTimeOnRing) {
    return true;
}

void AWWEPlayerControllerCombat::ServerRequestServerTime_Implementation(AWWEPlayerControllerCombat* requester, float requestWorldTime) {
}
bool AWWEPlayerControllerCombat::ServerRequestServerTime_Validate(AWWEPlayerControllerCombat* requester, float requestWorldTime) {
    return true;
}

void AWWEPlayerControllerCombat::ClientShowLoseResults_Implementation() {
}

void AWWEPlayerControllerCombat::ClientReportServerTime_Implementation(float requestWorldTime, float serverTime) {
}

AWWEPlayerControllerCombat::AWWEPlayerControllerCombat() {
    this->bOnGameplayLose = false;
    this->ControlComponent = CreateDefaultSubobject<UWWEControlComponentCombat>(TEXT("ControlComponent"));
    this->ControlRamComponent = CreateDefaultSubobject<UWWEAngryRamControlComponent>(TEXT("ControlRamComponent"));
    this->ContextualActionsComponent = CreateDefaultSubobject<UWWEContextualActionsComponent>(TEXT("ActionsComponentName"));
    this->LearningComponent = CreateDefaultSubobject<UWWELearningComponent>(TEXT("LearningComponent"));
}


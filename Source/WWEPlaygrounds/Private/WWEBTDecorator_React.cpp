#include "WWEBTDecorator_React.h"

void UWWEBTDecorator_React::OnActionBegin(UWWEActionNode* ActionNode) {
}

UWWEBTDecorator_React::UWWEBTDecorator_React() {
    this->SelfStatesToCheck.AddDefaulted(1);
    this->ProbabilityConfig = EWWEAIChance::NONE;
    this->bReactionAvailable = false;
    this->RelevantCharacter = NULL;
}


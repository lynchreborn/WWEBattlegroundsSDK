#include "WWEAIControllerGameplay.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "WWEControlComponentCombat.h"

AWWEAIControllerGameplay::AWWEAIControllerGameplay() {
    this->BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    this->BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->ControlComponent = CreateDefaultSubobject<UWWEControlComponentCombat>(TEXT("Control"));
    this->AIConfig = NULL;
}


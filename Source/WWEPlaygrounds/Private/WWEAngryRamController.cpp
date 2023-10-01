#include "WWEAngryRamController.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AWWEAngryRamController::AWWEAngryRamController() {
    this->BehaviorTree = NULL;
    this->BlackboardData = NULL;
    this->BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    this->BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->RadiusDetection = 0.00f;
    this->WaitTimeRandomDeviation = 0.00f;
    this->WaitTimeAfterCharge = 2.00f;
    this->RamCharacter = NULL;
    this->SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight_Config"));
    this->TargetCharacter = NULL;
}


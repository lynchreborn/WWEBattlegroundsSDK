#pragma once
#include "CoreMinimal.h"
#include "PGAIController.h"
#include "WWEAIControllerGameplay.generated.h"

class UBehaviorTreeComponent;
class UBlackboardComponent;
class UWWEAIConfig;
class UWWEControlComponentGameplay;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEAIControllerGameplay : public APGAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEControlComponentGameplay* ControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEAIConfig* AIConfig;
    
public:
    AWWEAIControllerGameplay();
};


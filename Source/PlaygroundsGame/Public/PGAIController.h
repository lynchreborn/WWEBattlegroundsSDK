#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "PGAIController.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAwayAiDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHomeAiDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllTeamsAiDisabled;
    
public:
    APGAIController();
};


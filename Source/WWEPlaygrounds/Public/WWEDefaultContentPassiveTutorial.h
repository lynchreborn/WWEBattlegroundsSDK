#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWETutorialButtonStructure.h"
#include "WWETutorialRulesButtonStructure.h"
#include "WWEDefaultContentPassiveTutorial.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentPassiveTutorial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialButtonStructure> CombatTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialButtonStructure> ProgressionTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialRulesButtonStructure> GameModeRulesTutorial;
    
    UWWEDefaultContentPassiveTutorial();
};


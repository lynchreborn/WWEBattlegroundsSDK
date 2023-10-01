#pragma once
#include "CoreMinimal.h"
#include "WWETutorialRulesButtonStructure.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWETutorialRulesButtonStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RuleIcon;
    
    WWEPLAYGROUNDS_API FWWETutorialRulesButtonStructure();
};


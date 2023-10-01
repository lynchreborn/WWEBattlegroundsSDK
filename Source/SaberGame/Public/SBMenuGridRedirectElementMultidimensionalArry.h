#pragma once
#include "CoreMinimal.h"
#include "SBMenuGridRedirectElement.h"
#include "SBMenuGridRedirectElementMultidimensionalArry.generated.h"

USTRUCT(BlueprintType)
struct FSBMenuGridRedirectElementMultidimensionalArry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBMenuGridRedirectElement> elements;
    
    SABERGAME_API FSBMenuGridRedirectElementMultidimensionalArry();
};


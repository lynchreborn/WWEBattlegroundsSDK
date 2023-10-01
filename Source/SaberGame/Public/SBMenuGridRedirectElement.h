#pragma once
#include "CoreMinimal.h"
#include "SBMenuGridRedirectElement.generated.h"

USTRUCT(BlueprintType)
struct FSBMenuGridRedirectElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 column;
    
    SABERGAME_API FSBMenuGridRedirectElement();
};


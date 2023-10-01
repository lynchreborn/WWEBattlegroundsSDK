#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "SBMatchModeTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSBMatchModeTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMatchMode Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SABERGAME_API FSBMatchModeTypeName();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxType.h"
#include "SBErrorMessageData.generated.h"

USTRUCT(BlueprintType)
struct FSBErrorMessageData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMessageBoxType ErrorType;
    
public:
    SABERGAME_API FSBErrorMessageData();
};


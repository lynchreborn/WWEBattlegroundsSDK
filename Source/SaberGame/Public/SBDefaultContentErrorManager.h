#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBOperationResult.h"
#include "SBErrorMessageData.h"
#include "SBDefaultContentErrorManager.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBDefaultContentErrorManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBErrorMessageData DefaultErrorMessage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBOperationResult, FSBErrorMessageData> OperationErrorMessages;
    
public:
    USBDefaultContentErrorManager();
};


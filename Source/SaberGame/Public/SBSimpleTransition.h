#pragma once
#include "CoreMinimal.h"
#include "SBBaseTransition.h"
#include "SBSimpleTransition.generated.h"

class USBBaseScene;

UCLASS(Blueprintable)
class SABERGAME_API USBSimpleTransition : public USBBaseTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBBaseScene* FromScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBBaseScene* ToScene;
    
    USBSimpleTransition();
protected:
    UFUNCTION(BlueprintCallable)
    void UnloadFrom();
    
    UFUNCTION(BlueprintCallable)
    void OpenTo();
    
};


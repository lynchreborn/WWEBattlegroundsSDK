#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_FenceStunned.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_FenceStunned : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEndAction;
    
public:
    UWWEAction_FenceStunned();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
};


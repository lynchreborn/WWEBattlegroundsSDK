#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_TurnbuckleStunned.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_TurnbuckleStunned : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasStrongIrishWhip;
    
public:
    UWWEAction_TurnbuckleStunned();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
};


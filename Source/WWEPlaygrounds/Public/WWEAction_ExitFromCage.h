#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ExitFromCage.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ExitFromCage : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEndIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMinigameWon;
    
public:
    UWWEAction_ExitFromCage();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCanPause(const bool bCanPause);
    
};


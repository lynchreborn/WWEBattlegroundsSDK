#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_IrishWhip.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_IrishWhip : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToPerformTurnbuckleMinigame;
    
public:
    UWWEAction_IrishWhip();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void WantToPerformTurnbuckleMinigame();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWEClashType.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_Clash.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Clash : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEClashType ClashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFromIrishWhip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleToAutoStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ElectrocutedParticleComp;
    
public:
    UWWEAction_Clash();
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
};


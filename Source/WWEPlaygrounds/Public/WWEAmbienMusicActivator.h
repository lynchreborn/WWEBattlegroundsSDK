#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWEAmbienMusicActivator.generated.h"

class AAmbientSound;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEAmbienMusicActivator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bPlayOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bShouldOverrideGlobalFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OverridenFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bShouldOverrideGlobalFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OverridenFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> StopAtCondA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> PlayAtCondB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbientSound*> ActorsForActivation;
    
public:
    AWWEAmbienMusicActivator();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
    UFUNCTION(BlueprintCallable)
    void OnPlay();
    
};


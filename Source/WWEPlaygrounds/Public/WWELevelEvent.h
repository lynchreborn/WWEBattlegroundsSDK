#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWELevelEvent.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWELevelEvent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelevantTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCameraRelevant;
    
public:
    AWWELevelEvent();
};


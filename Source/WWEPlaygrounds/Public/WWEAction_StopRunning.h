#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_StopRunning.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_StopRunning : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToFall;
    
public:
    UWWEAction_StopRunning();
};


#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_FallRing.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_FallRing : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCharacterOnRing;
    
public:
    UWWEAction_FallRing();
};


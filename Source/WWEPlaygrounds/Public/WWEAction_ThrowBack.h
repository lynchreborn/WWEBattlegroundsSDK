#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ThrowBack.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ThrowBack : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bMustReceiveDamage;
    
public:
    UWWEAction_ThrowBack();
};


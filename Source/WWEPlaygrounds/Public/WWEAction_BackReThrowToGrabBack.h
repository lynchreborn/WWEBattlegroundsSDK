#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_BackReThrowToGrabBack.generated.h"

class AWWECharacterCombat;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_BackReThrowToGrabBack : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ReceiveGrabBackCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bMustReceiveDamage;
    
public:
    UWWEAction_BackReThrowToGrabBack();
};


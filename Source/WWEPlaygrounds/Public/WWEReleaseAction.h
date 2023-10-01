#pragma once
#include "CoreMinimal.h"
#include "EWWETypeObjects.h"
#include "WWEAnimationVariation.h"
#include "WWEReleaseAction.generated.h"

UCLASS(Blueprintable)
class UWWEReleaseAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETypeObjects WeaponObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterNotInRingButClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterInRingAndClose;
    
    UWWEReleaseAction();
};


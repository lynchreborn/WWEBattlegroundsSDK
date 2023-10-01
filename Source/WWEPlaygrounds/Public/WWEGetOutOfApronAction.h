#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEGetOutOfApronAction.generated.h"

UCLASS(Blueprintable)
class UWWEGetOutOfApronAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoIntoRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceRing;
    
    UWWEGetOutOfApronAction();
};


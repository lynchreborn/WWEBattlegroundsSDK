#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEGoToApronAction.generated.h"

UCLASS(Blueprintable)
class UWWEGoToApronAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromIrishWhip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantToStun;
    
    UWWEGoToApronAction();
};


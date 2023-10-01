#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_UpDownRing.generated.h"

class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_UpDownRing : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> SpecialCommentSettings[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusCheck;
    
public:
    UWWEAction_UpDownRing();
};


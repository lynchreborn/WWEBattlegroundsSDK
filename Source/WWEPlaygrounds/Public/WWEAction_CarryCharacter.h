#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_CarryCharacter.generated.h"

class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_CarryCharacter : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> SpecialCommentSettings[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCarryFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CarryVariation;
    
public:
    UWWEAction_CarryCharacter();
};


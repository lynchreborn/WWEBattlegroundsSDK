#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_Counteract.generated.h"

class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Counteract : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> SpecialCommentSettings[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantParryForGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection RivalDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCantReceiveCounteract;
    
public:
    UWWEAction_Counteract();
};


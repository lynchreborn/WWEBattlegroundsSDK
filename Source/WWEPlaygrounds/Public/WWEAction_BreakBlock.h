#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_BreakBlock.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_BreakBlock : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection RivalDirection;
    
public:
    UWWEAction_BreakBlock();
};


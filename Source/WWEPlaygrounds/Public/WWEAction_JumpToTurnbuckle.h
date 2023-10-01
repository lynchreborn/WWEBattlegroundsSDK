#pragma once
#include "CoreMinimal.h"
#include "EWWETurnbuckleLocation.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_JumpToTurnbuckle.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_JumpToTurnbuckle : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPrepareFaceTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrepareDistace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWETurnbuckleLocation TargetTurnbuckle;
    
public:
    UWWEAction_JumpToTurnbuckle();
};


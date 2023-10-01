#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_SwitchCageWall.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_SwitchCageWall : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection CachedCageWallDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClimbInput;
    
public:
    UWWEAction_SwitchCageWall();
};


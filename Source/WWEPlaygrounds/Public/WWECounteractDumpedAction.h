#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAnimationVariation.h"
#include "WWECounteractDumpedAction.generated.h"

UCLASS(Blueprintable)
class UWWECounteractDumpedAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UWWECounteractDumpedAction();
};


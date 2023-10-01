#pragma once
#include "CoreMinimal.h"
#include "WWEExtraControlsMovesDisplay.h"
#include "WWEExtraControlsMovesDisplayContainer.generated.h"

USTRUCT(BlueprintType)
struct FWWEExtraControlsMovesDisplayContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEExtraControlsMovesDisplay> Moves;
    
    WWEPLAYGROUNDS_API FWWEExtraControlsMovesDisplayContainer();
};


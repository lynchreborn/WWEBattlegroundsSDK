#pragma once
#include "CoreMinimal.h"
#include "ECombinationType.h"
#include "WWEExtraControlsMovesDisplay.generated.h"

USTRUCT(BlueprintType)
struct FWWEExtraControlsMovesDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombinationType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MoveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MoveDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MoveInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExtraMoveText;
    
    WWEPLAYGROUNDS_API FWWEExtraControlsMovesDisplay();
};


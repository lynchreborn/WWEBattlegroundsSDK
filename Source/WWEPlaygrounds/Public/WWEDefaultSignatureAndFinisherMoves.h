#pragma once
#include "CoreMinimal.h"
#include "EWWEActionGroup.h"
#include "WWEDefaultSignatureAndFinisherMoves.generated.h"

class UWWEActionNode;

USTRUCT(BlueprintType)
struct FWWEDefaultSignatureAndFinisherMoves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEActionGroup ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEActionNode> DefaultSignatureMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEActionNode> DefaultFinisherMove;
    
    WWEPLAYGROUNDS_API FWWEDefaultSignatureAndFinisherMoves();
};


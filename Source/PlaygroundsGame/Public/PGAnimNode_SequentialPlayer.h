#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_RandomPlayer.h"
#include "Animation/AnimNodeBase.h"
#include "PGAnimNode_SequentialPlayer.generated.h"

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGAnimNode_SequentialPlayer : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntry> Entries;
    
    FPGAnimNode_SequentialPlayer();
};


#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_RandomPlayer.h"
#include "Animation/AnimNodeBase.h"
#include "EPGRandomPlayerBlendMode.h"
#include "PGAnimNode_RandomPlayer.generated.h"

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGAnimNode_RandomPlayer : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGRandomPlayerBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridePlayRate;
    
    FPGAnimNode_RandomPlayer();
};


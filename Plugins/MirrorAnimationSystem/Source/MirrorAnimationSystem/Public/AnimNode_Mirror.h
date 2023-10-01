#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Mirror.generated.h"

class UMirrorTable;

USTRUCT(BlueprintType)
struct MIRRORANIMATIONSYSTEM_API FAnimNode_Mirror : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorTable* MirrorTable;
    
    FAnimNode_Mirror();
};


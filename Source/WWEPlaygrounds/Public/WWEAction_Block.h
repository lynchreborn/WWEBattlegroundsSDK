#pragma once
#include "CoreMinimal.h"
#include "WWEActionNode.h"
#include "WWEAction_Block.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Block : public UWWEActionNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockingByTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBreakBlock;
    
public:
    UWWEAction_Block();
};


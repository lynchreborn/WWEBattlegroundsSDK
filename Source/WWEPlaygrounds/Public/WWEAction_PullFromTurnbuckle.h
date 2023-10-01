#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_PullFromTurnbuckle.generated.h"

class AWWECharacterCombat;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PullFromTurnbuckle : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* RivalToPull;
    
public:
    UWWEAction_PullFromTurnbuckle();
};


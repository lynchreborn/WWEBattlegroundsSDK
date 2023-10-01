#pragma once
#include "CoreMinimal.h"
#include "WWEAggroInfo.generated.h"

class AWWECharacterCombat;

USTRUCT(BlueprintType)
struct FWWEAggroInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* Opponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Aggro;
    
public:
    WWEPLAYGROUNDS_API FWWEAggroInfo();
};


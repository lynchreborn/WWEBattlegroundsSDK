#pragma once
#include "CoreMinimal.h"
#include "PendingToDestroyCharacters.generated.h"

class AWWECharacterCombat;

USTRUCT(BlueprintType)
struct FPendingToDestroyCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ReferencedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    WWEPLAYGROUNDS_API FPendingToDestroyCharacters();
};


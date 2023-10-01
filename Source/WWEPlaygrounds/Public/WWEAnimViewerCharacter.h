#pragma once
#include "CoreMinimal.h"
#include "WWEAnimViewerCharacter.generated.h"

class AWWEAIControllerGameplay;
class AWWECharacterCombat;

USTRUCT(BlueprintType)
struct FWWEAnimViewerCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEAIControllerGameplay* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoaded;
    
    WWEPLAYGROUNDS_API FWWEAnimViewerCharacter();
};


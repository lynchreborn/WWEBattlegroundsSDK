#pragma once
#include "CoreMinimal.h"
#include "PGCrowdCharacter.h"
#include "WWECrowdCharacter.generated.h"

class AWWECharacterCombat;
class AWWECrowdManager;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECrowdCharacter : public APGCrowdCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECrowdManager* CrowdManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWWECharacterCombat*> Fighters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* SupportedFighter;
    
public:
    AWWECrowdCharacter();
};


#pragma once
#include "CoreMinimal.h"
#include "WWELCharacterInsideLavaInfoClient.generated.h"

class AWWECharacterCombat;
class UAudioComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWELCharacterInsideLavaInfoClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CharacterInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> CharacterFireFXList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentFireCharacter;
    
    FWWELCharacterInsideLavaInfoClient();
};


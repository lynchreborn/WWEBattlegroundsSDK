#pragma once
#include "CoreMinimal.h"
#include "WWELCharacterInsideLavaInfo.generated.h"

class AWWECharacterCombat;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWELCharacterInsideLavaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CharacterInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLavaColliders;
    
    FWWELCharacterInsideLavaInfo();
};


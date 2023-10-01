#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGCharacterEntry.h"
#include "PGFeelingAnimations.h"
#include "Templates/SubclassOf.h"
#include "PGDefaultContentCharacters.generated.h"

class UPGCharacterCollection;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGDefaultContentCharacters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGFeelingAnimations> AnimationFeelings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FPGCharacterEntry> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGCharacterCollection> InitialCharacterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGCharacterCollection> CompleteCharacterCollection;
    
public:
    UPGDefaultContentCharacters();
};


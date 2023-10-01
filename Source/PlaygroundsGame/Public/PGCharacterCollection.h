#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGCharacterEntry.h"
#include "PGCharacterCollection.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGCharacterCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortCharactersBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGCharacterEntry> Characters;
    
    UPGCharacterCollection();
};


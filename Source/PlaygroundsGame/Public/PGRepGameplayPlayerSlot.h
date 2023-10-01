#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "SBRepGameplayPlayerSlot.h"
#include "Templates/SubclassOf.h"
#include "PGRepGameplayPlayerSlot.generated.h"

class UPGCharacterParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGRepGameplayPlayerSlot : public FSBRepGameplayPlayerSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGCharacterParameters> CharacterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterItems;
    
    FPGRepGameplayPlayerSlot();
};


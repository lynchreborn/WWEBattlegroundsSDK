#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGArenaItemEntry.h"
#include "PGCharacterEntry.h"
#include "PGHeadItemEntry.h"
#include "PGSkinItemEntry.h"
#include "PGVanityItemEntry.h"
#include "WWEAnimationItemEntry.h"
#include "WWEPowerUpItemEntry.h"
#include "WWEProgressionReward.h"
#include "WWEDefaultContentProgression.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentProgression : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEProgressionReward DebugReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGArenaItemEntry> InitialArenaItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGCharacterEntry> InitialCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGVanityItemEntry> InitialVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGHeadItemEntry> InitialHeadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSkinItemEntry> InitialSkinItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEPowerUpItemEntry> InitialPowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEAnimationItemEntry> InitialAnimationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementPowerUpID;
    
    UWWEDefaultContentProgression();
};


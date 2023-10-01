#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialInfoPopup.h"
#include "WWEInteractiveTutorialSavedData.h"
#include "WWEUnlockedArena.h"
#include "WWEUnlockedArenaItem.h"
#include "WWEUnlockedCharacter.h"
#include "WWEUnlockedPowerUpItem.h"
#include "WWEUnlockedVanityItem.h"
#include "WWEOfflineData.generated.h"

USTRUCT(BlueprintType)
struct FWWEOfflineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedCharacter> UnlockedOfflineCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> CharacterOutfitSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedVanityItem> UnlockedOfflineVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedArena> UnlockedArenas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedPowerUpItem> UnlockedPowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PowerUpSelectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> UnlockedSkillTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedArenaItem> UnlockedOfflineArenaItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCompletedTournaments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWETutorialInfoPopup, bool> FirstTimeInfoShowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEInteractiveTutorialSavedData InteractiveTutorialSaveData;
    
    WWEPLAYGROUNDS_API FWWEOfflineData();
};


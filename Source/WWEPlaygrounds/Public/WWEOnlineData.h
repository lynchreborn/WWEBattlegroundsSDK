#pragma once
#include "CoreMinimal.h"
#include "WWECustomCharacterSavedInfo.h"
#include "WWEUnlockedArenaItem.h"
#include "WWEUnlockedBoxItem.h"
#include "WWEUnlockedCharacter.h"
#include "WWEUnlockedHeadItem.h"
#include "WWEUnlockedSkinItem.h"
#include "WWEUnlockedVanityItem.h"
#include "WWEOnlineData.generated.h"

USTRUCT(BlueprintType)
struct FWWEOnlineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedCharacter> UnlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedVanityItem> UnlockedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedSkinItem> UnlockedSkinItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedHeadItem> UnlockedHeadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedBoxItem> UnlockedBoxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedArenaItem> UnlockedArenaItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserPrestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoftCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HardCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FWWECustomCharacterSavedInfo> CustomCharacterSavedInfo;
    
    WWEPLAYGROUNDS_API FWWEOnlineData();
};


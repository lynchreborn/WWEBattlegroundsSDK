#pragma once
#include "CoreMinimal.h"
#include "PGDefaultContent.h"
#include "EItemBloodline.h"
#include "Templates/SubclassOf.h"
#include "WWEGameStoreItem.h"
#include "WWEOnlineStoreItem.h"
#include "WWEDefaultContent.generated.h"

class UPGDefaultContentShop;
class UWWEDefaultContentAnimViewer;
class UWWEDefaultContentArenaItems;
class UWWEDefaultContentCampaign;
class UWWEDefaultContentCharacters;
class UWWEDefaultContentConfigurableItems;
class UWWEDefaultContentInteractiveTutorial;
class UWWEDefaultContentPassiveTutorial;
class UWWEDefaultContentPowerUps;
class UWWEDefaultContentProgression;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContent : public UPGDefaultContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentCharacters* CharactersData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGDefaultContentShop* Shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentProgression* Progression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentConfigurableItems* ConfigurableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentAnimViewer* AnimViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentPowerUps* PowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentCampaign* Campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentArenaItems* ArenaItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentPassiveTutorial* PassiveTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentInteractiveTutorial* InteractiveTutorial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentCharacters> CharactersContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentProgression> ProgressionContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentConfigurableItems> ConfigurableItemsContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGDefaultContentShop> ShopContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentAnimViewer> AnimViewerContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentPowerUps> PowerUpsContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentCampaign> CampaignContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentArenaItems> ArenaItemsContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentPassiveTutorial> PassiveTutorialContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEDefaultContentInteractiveTutorial> InteractiveTutorialContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> CoreFreeBloodlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEGameStoreItem> GameStoreItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEOnlineStoreItem> OnlineStoreItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCUnlockGameStoreItemID;
    
public:
    UWWEDefaultContent();
    UFUNCTION(BlueprintCallable)
    FString GetDLCUnlockGameStoreItemID();
    
    UFUNCTION(BlueprintCallable)
    TArray<EItemBloodline> GetCoreFreeBloodlines();
    
};


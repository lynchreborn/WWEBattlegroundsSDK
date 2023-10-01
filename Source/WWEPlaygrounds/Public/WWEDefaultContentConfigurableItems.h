#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGHeadItemEntry.h"
#include "PGSkinItemEntry.h"
#include "PGVanityItemEntry.h"
#include "Templates/SubclassOf.h"
#include "WWEAnimationItemEntry.h"
#include "WWEBoxItemEntry.h"
#include "WWEUnlockedBoxItem.h"
#include "WWEUnlockedHeadItem.h"
#include "WWEUnlockedSkinItem.h"
#include "WWEUnlockedVanityItem.h"
#include "WWEDefaultContentConfigurableItems.generated.h"

class UPGHeadItemCollection;
class UPGSkinItemCollection;
class UPGVanityItemCollection;
class UWWEAnimationItemCollection;
class UWWEAnimationItemParameters;
class UWWEBoxItemCollection;
class UWWEBoxItemParameters;
class UWWEHeadItemParameters;
class UWWESkinItemParameters;
class UWWEVanityItemParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentConfigurableItems : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGVanityItemCollection> InitialVanityItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGVanityItemCollection> CompleteVanityItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGVanityItemEntry> VanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEVanityItemParameters*> InitialVanityItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEVanityItemParameters*> VanityItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedVanityItem> InitialUnlockedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGSkinItemCollection> InitialSkinItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGSkinItemCollection> CompleteSkinItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGSkinItemEntry> SkinItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWESkinItemParameters*> InitialSkinItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWESkinItemParameters*> SkinItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedSkinItem> InitialUnlockedSkinItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGHeadItemCollection> InitialHeadItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGHeadItemCollection> CompleteHeadItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGHeadItemEntry> HeadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEHeadItemParameters*> InitialHeadItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEHeadItemParameters*> HeadItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedHeadItem> InitialUnlockedHeadItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEBoxItemCollection> InitialBoxItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEBoxItemCollection> CompleteBoxItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEBoxItemEntry> BoxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEBoxItemParameters*> InitialBoxItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEBoxItemParameters*> BoxItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedBoxItem> InitialUnlockedBoxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEAnimationItemCollection> InitialAnimationItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEAnimationItemCollection> CompleteAnimationItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEAnimationItemEntry> AnimationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEAnimationItemParameters*> InitialAnimationItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEAnimationItemParameters*> AnimationItemParameters;
    
public:
    UWWEDefaultContentConfigurableItems();
};


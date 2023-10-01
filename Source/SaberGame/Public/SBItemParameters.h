#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBItemRarity.h"
#include "SBItemParametersInterface.h"
#include "SBItemParameters.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SABERGAME_API USBItemParameters : public UPrimaryDataAsset, public ISBItemParametersInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconRenderCameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemUnlockedAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SortingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvailableInEnvelopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoftCurrencyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HardCurrencyCost;
    
public:
    USBItemParameters();
    UFUNCTION(BlueprintCallable)
    void SetCurrencyCost(int32 Value, bool bHardCurrencyFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPurchasable(bool bHardCurrencyFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableInEnvelopes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSortingTag() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetItemName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemID() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetItemIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencyCost(bool bHardCurrencyFlag) const;
    
    UFUNCTION(BlueprintCallable)
    void BoughtMe(bool bWithHardCurrency, int32 Amount);
    
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "EWWETierSlotType.h"
#include "WWEPowerUpsGrid.h"
#include "WWEMenuPowerUpsGrid.generated.h"

class UTextBlock;
class UWWEMenuPowerUpContent;
class UWWEMenuPowerUpsGridSlot;
class UWWEMenuPowerUpsSelected;
class UWWEPowerUpTooltip;
class UWWEPowerUpsMenu;
class UWWESaveGame;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMenuPowerUpsGrid : public UWWEPowerUpsGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TierValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TierValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPowerUpsMenu* PowerUpsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPowerUpTooltip* PowerUpToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWESaveGame* CachedSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpContent* GridChosenContentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsGridSlot* GridSelectedContentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsSelected* MenuPowerUpsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SimpleSlot_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SimpleSlot_Unselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWETierSlotType GridTierType;
    
public:
    UWWEMenuPowerUpsGrid();
};


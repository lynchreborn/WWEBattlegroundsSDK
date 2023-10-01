#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingPlayerStats.generated.h"

class UCanvasPanel;
class UCurveFloat;
class UImage;
class UTexture2D;
class UWWEKingOfTheRingPlayerSlot;
class UWWEKingOfTheRingSlotCountdown;
class UWWEKingOfTheRingStat;
class UWWEKingOfTheRingWrestlerInfo;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingPlayerStats : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SlotOnTheRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SlotWaiting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingStat* Stat_RecordTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingStat* Stat_RecordThrownOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingStat* Stat_CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingStat* Stat_CurrentThrownOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingWrestlerInfo* WrestlerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerSlot* PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingSlotCountdown* PlayerSlotCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WrestlerCharacterPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StatsCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayerOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayerInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayerToOnTheRingAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WidgetAnimationCurve;
    
public:
    UWWEKingOfTheRingPlayerStats();
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastOutPlayerAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastInPlayerAnimationFinished();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "EWWEWrestlerOnRingMessageState.h"
#include "WWEHUDKingOfTheRingWidget.generated.h"

class UCanvasPanel;
class UImage;
class USBStylizedText;
class UWWEKingOfTheRingCountdown;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDKingOfTheRingWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* WrestlerInfoCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScoreSmallBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScoreBigBarBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScoreGlowLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Crown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* KickOutText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NextPlayerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NextPlayerImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* NextPlayerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingCountdown* Countdown;
    
public:
    UWWEHUDKingOfTheRingWidget();
    UFUNCTION(BlueprintCallable)
    void SetWrestlerOnRingMessageState(EWWEWrestlerOnRingMessageState State);
    
};


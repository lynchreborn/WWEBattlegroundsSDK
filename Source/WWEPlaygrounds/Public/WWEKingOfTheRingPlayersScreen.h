#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingPositions.h"
#include "WWEKingOfTheRingPlayersScreen.generated.h"

class UCanvasPanel;
class UWWEKingOfTheRingPlayerStats;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingPlayersScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* OnRingPlayerStats1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* OnRingPlayerStats2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* OnRingPlayerStats3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* OnRingPlayerStats4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* WaitingPlayerStats1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* WaitingPlayerStats2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* WaitingPlayerStats3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* WaitingPlayerStats4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PlayersCanvas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PossibleWaitingPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEKingOfTheRingPositions> PossibleOnTheRingPositions;
    
public:
    UWWEKingOfTheRingPlayersScreen();
private:
    UFUNCTION(BlueprintCallable)
    void RelocateWaitingPlayerSlots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
};


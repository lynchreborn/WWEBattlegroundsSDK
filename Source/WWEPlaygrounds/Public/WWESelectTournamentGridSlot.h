#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBPoolGridSlot.h"
#include "SBPoolGridSlotInfo.h"
#include "WWEStickerMaterialGridElement.h"
#include "WWETournamentInfo.h"
#include "WWESelectTournamentGridSlot.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class UMaterialInstance;
class UPanelWidget;
class USBPoolGrid;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWESelectTournamentGridSlot : public UWWEStickerMaterialGridElement, public ISBPoolGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ComingSoonUnselectedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ComingSoonSelectedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TimeCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* LockCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SoftCurrencyBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* SoftCurrencyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* HardCurrencyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HardCurrencyBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TimeToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LoadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETournamentInfo TournamentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bActiveTournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBPoolGridSlotInfo MyActiveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPoolGrid* OwnerGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSlotActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTimeRemainingExpired;
    
public:
    UWWESelectTournamentGridSlot();
protected:
    UFUNCTION(BlueprintCallable)
    void SaveImageCompleted(bool bWasSuccessful, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishInscription(ESBPopupSceneClosingReason ClosingReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(bool bInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter(bool bInit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadImageCompleted(bool bWasSuccessful, TArray<uint8>& Result, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void DownloadImageCompleted(bool bWasSuccessful, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationPayCompletedTournament(ESBMessageBoxClosingReason Cause);
    
    
    // Fix for true pure virtual functions not being implemented
};


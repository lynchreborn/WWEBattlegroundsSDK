#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBAlbumScreen.h"
#include "PGMatchmakingSearchWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGMatchmakingSearchWidget : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MatchModeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCancellingMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bImMatchmakingInvitee;
    
public:
    UPGMatchmakingSearchWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSessionFailedMsgBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnReturnToMatchmakingMsgBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHostedMatchProcessinMsgBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformSessionProcessFailedMsgBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingErrorMessageBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingConnectingErrorMessageBoxClosed(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakeInEditor(const ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnExitMessageBoxClosed(const ESBMessageBoxClosingReason Reason);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EPGDestroySessionReason.h"
#include "EPGMatchmakingPlayerType.h"
#include "PGMatchmakingConfigWidget.h"
#include "PGMatchmakingPlayerTypeConfig.h"
#include "ESBMessageBoxClosingReason.h"
#include "Templates/SubclassOf.h"
#include "WWEMatchmakingConfigWidget.generated.h"

class UHorizontalBox;
class UPGMatchmakingPlayerSlot;
class UPGMatchmakingPlayerTypeGridElement;
class UPGVersusWidget;
class USBMenuGrid;
class USBPlatformBar;
class USBPlatformSlot;
class UWWEScreenTitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchmakingConfigWidget : public UPGMatchmakingConfigWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PlayersSlotsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftButtonTipsBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtonTipsBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* PlayerTypeGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEScreenTitleWidget* ScreenTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* InviteButtonTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* SelectButtonTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGMatchmakingPlayerSlot> MatchmakingPlayerSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGVersusWidget> VSWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGMatchmakingPlayerTypeGridElement> PlayerTypeGridElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGMatchmakingPlayerTypeConfig> PlayerTypeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InviteeWaitingSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGMatchmakingPlayerSlot*> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NotifiedDisconnectedGamepads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurrentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPGMatchmakingPlayerType> CurrentPlayerTypeOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGDestroySessionReason DestroySessionReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSessionCanceled;
    
public:
    UWWEMatchmakingConfigWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSessionFailedMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSessionFailedDestroySessionMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnShowConnectGamepad();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestEnableInputForAllLocalPlayersCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTypeGridSelectionChanged(int32 ColumnIdx, int32 RowIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerChangesMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnGDPRMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateSessionFailedMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmDestroySessionMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmDestroySessionClientMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckPrivilegeMessageBoxErrorClosed();
    
    UFUNCTION(BlueprintCallable)
    void CreateSessionData();
    
};


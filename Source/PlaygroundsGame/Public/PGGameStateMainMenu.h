#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBGameStateMainMenu.h"
#include "PGGameStateMainMenu.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGGameStateMainMenu : public ASBGameStateMainMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFromJoinSessionInvitationFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText JoinSessionInvitationErrorMessage;
    
public:
    APGGameStateMainMenu();
private:
    UFUNCTION(BlueprintCallable)
    void RestoreFocusToMainMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPartyPlaySessionSizePopupClosed(ESBPopupSceneClosingReason CloseReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConfirmJoinErrorMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
};


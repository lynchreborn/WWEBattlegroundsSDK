#pragma once
#include "CoreMinimal.h"
#include "ESBCompetitionMode.h"
#include "ESBMatchMode.h"
#include "SBRootUserWidget.h"
#include "EPGMatchmakingConfigState.h"
#include "PGMatchmakingConfigWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGMatchmakingConfigWidget : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBCompetitionMode CompetitionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBMatchMode MatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGMatchmakingConfigState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGMatchmakingConfigState PendingState;
    
public:
    UPGMatchmakingConfigWidget();
};


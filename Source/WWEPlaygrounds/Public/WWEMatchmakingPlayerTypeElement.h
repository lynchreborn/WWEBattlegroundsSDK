#pragma once
#include "CoreMinimal.h"
#include "PGMatchmakingPlayerTypeGridElement.h"
#include "WWEMatchmakingPlayerTypeElement.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchmakingPlayerTypeElement : public UPGMatchmakingPlayerTypeGridElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Matchmaking_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Matchmaking_Idle;
    
public:
    UWWEMatchmakingPlayerTypeElement();
};


#pragma once
#include "CoreMinimal.h"
#include "PGMatchmakingPlayerSlot.h"
#include "WWEMatchmakingPlayerSlot.generated.h"

class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchmakingPlayerSlot : public UPGMatchmakingPlayerSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SlotVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Matchmaking_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PressButtonIddle;
    
public:
    UWWEMatchmakingPlayerSlot();
};


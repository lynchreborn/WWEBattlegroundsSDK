#pragma once
#include "CoreMinimal.h"
#include "PGPlayerLobbyWidgetInfo.generated.h"

class UPGLobbySlot;
class UWidget;

USTRUCT(BlueprintType)
struct FPGPlayerLobbyWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* DefaultFocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGLobbySlot*> SlotsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* CurrentFocusedWidget;
    
    PLAYGROUNDSGAME_API FPGPlayerLobbyWidgetInfo();
};


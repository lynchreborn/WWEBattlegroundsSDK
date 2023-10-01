#pragma once
#include "CoreMinimal.h"
#include "PGPlayerLobbyWidgetInfo.h"
#include "PGRootLobbyUserWidget.h"
#include "PGLobbyScreen.generated.h"

class APGPlayerState;
class UPGLobbySlot;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGLobbyScreen : public UPGRootLobbyUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGLobbySlot*> LobbySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<APGPlayerState*, FPGPlayerLobbyWidgetInfo> PlayerLobbyWidgetInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> PlayerRPCResponseMap;
    
public:
    UPGLobbyScreen();
};


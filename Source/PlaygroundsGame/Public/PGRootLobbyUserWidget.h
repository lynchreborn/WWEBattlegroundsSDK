#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "PGLobbyElementInterface.h"
#include "PGRootLobbyUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGRootLobbyUserWidget : public USBRootUserWidget, public IPGLobbyElementInterface {
    GENERATED_BODY()
public:
    UPGRootLobbyUserWidget();
    
    // Fix for true pure virtual functions not being implemented
};


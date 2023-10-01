#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "PGLobbyElementInterface.h"
#include "PGLobbyUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGLobbyUserWidget : public USBUserWidget, public IPGLobbyElementInterface {
    GENERATED_BODY()
public:
    UPGLobbyUserWidget();
    
    // Fix for true pure virtual functions not being implemented
};


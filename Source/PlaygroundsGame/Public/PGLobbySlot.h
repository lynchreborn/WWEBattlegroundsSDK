#pragma once
#include "CoreMinimal.h"
#include "PGLobbyUserWidget.h"
#include "PGLobbySlot.generated.h"

class UPGLobbyScreen;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGLobbySlot : public UPGLobbyUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPGLobbyScreen* MyLobbyScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MySlotIndex;
    
public:
    UPGLobbySlot();
};


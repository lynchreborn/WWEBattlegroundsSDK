#pragma once
#include "CoreMinimal.h"
#include "SBLobbyConfiguration.h"
#include "PGLobbyConfiguration.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGLobbyConfiguration : public USBLobbyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseLobbyTimer;
    
    UPGLobbyConfiguration();
};


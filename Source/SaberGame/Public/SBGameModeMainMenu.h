#pragma once
#include "CoreMinimal.h"
#include "SBGameMode.h"
#include "SBGameModeMainMenu.generated.h"

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API ASBGameModeMainMenu : public ASBGameMode {
    GENERATED_BODY()
public:
    ASBGameModeMainMenu();
    UFUNCTION(BlueprintCallable)
    void TravelToLobby(const FName& GameModeId, int32 MaxPlayers, bool bOnline);
    
};


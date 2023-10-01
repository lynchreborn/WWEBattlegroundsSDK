#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "PGPlayerController.h"
#include "PGRepGameplayPlayerSlot.h"
#include "PGPlayerControllerGameplay.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerControllerGameplay : public APGPlayerController {
    GENERATED_BODY()
public:
    APGPlayerControllerGameplay();
protected:
    UFUNCTION(BlueprintCallable)
    void TryToPauseGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void SurrenderGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSurrenderGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToStartMatch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToSpawnActors();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyForHotJoin();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHotJoined();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendGameplayPlayerSlotsPG(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerForceRestartPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBTeam GetTeam() const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Debug_ServerToggleSlomo();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendGameplayPlayerSlotsPG(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots);
    
};


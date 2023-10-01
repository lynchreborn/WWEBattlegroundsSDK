#pragma once
#include "CoreMinimal.h"
#include "SBCheatManager.h"
#include "PGCheatManager.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGCheatManager : public USBCheatManager {
    GENERATED_BODY()
public:
    UPGCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UpdatePlatformShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateInternalShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateGameShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateFeaturedShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLobbyConfiguringMatchTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHomeAi();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAwayAi();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAi();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugDraws(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShopPurchaseItem(const FString& ID, const FString& CurrencyId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRemainingTime(int32 NewRemainingTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReadyToTravel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReadyToConfigure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameMode(const FName& ArenaGameModeId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArena(int32 ArenaMapId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RerollDailyQuest(int32 ID, int32 SLOT);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlatformUIShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PayTournament(const FString& TournamentId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LinkAccount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickPlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InviteToSession(const FName& SessionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetTournaments();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetFilename(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetDailyQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceTravelToArena(int32 ArenaMapId, const FName& ArenaGameModeId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCulture(FString& Culture);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishMatch(bool bFirstTeamWins);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindAndJoinSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindAndJoinFriendsSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinalizePurchase();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FillPlayerSlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpOnlineSubsystem() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySessions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUpdatePlayerSessionData(int32 GamepadIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUpdateOnlineSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateSession(const FName& SessionName, const FName& GameModeId, int32 MaxPlayers);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateFriendsSession(int32 PlayerSlots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateAccount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClaimDailyQuest(int32 ID, int32 SLOT);
    
};


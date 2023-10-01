#pragma once
#include "CoreMinimal.h"
#include "PGCheatManager.h"
#include "ESBCompetitionMode.h"
#include "ESBMatchMode.h"
#include "EWWECanReceiveAction.h"
#include "EWWECharacterState.h"
#include "EWWEInputAction.h"
#include "WWECheatManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECheatManager : public UPGCheatManager {
    GENERATED_BODY()
public:
    UWWECheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void WinCombatWithTeam(int32 WinnerTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdatePlayerMatchStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockVanityItemByID(const FString& ItemID, bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockRandomPrestige();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockPowerUpById(const FString& PowerUpId, int32 PowerUpLevel, bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockCharacterOutfitItemByID(const FString& CharacterID, const FString& OutfitID, bool Unlock, int32 SaveType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockCharacterByID(const FString& ItemID, bool Unlock, int32 SaveType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockCharacter(int32 CharacterIndex, bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockArenaItemByID(const FString& ItemID, bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllVanityItems(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllUnlockables(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllPowerUps(int32 PowerUpLevel, bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllNodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllItems(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllHeadItems(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllCharacters(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllCharacterItems(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllArenas(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllArenaItems(bool Unlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleXPProgressionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWidgetByClass(const FString& WidgetClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSweepDebugLines();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleStaminaConsumption();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowSkeleton();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowRoot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowFootsteps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowDebugHitInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowCharLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowCharacterStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRingPhysics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePhysicsSimulation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUDVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHealthConsumption();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisplayDamageText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterCollisions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterBaseVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCannotSprintByTime(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCameraSequences();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCameraModifiers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllActionsTooltip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestPhotomaton();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TagTeammate(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnWeapon(int32 WeaponIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateWeeklyLeaderboardReward();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateOnCharacterLoseKOTR(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateNetworkDisconnected();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateNetworkConnected();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowStoreUI(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowCharacterScales(bool bWithAllScales);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRingWallsCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOverallAndClearAllSkillsModifiers(int32 NewOverall, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInvalidationCaching(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnablePhysicsInteraction(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterSweepWhileNaxWalking(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterOverral(int32 CharacterIndex, int32 NewOverall);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMaxSimulationTimeStep(const float InMaxSimulationTimeStep);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCanGenerateOverlapEvents(const FString& ObjectClassName, bool bEnabled, const FString& ComponentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraAngle(const float Angle, bool Instantly);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAnimNotify_CanReceiveAction(EWWECanReceiveAction CanReceiveAction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActionComponentTickEnabled(const bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMatchBackfill();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SeeIgnoredCharacters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RingBlinkWithTimer(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RingBlink(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllFeaturedStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveFreeBloodline(int32 BloodlineIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Prueba();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLogBadAllCharactersUnlockConfiguration(bool bShowMale, bool bShowFemale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLogAllCharactersUnlockedOnCampaign(bool bShowMale, bool bShowFemale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLogAllCharactersUnlockedAtStart(bool bShowMale, bool bShowFemale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLogAllCharactersCore(bool bShowMale, bool bShowFemale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlaySoundFromDefaultContentUI(const FName VariableName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayEventCar();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformTurnbuckleStun(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformTurnbuckleMinigame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformThrowToGrabBack(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformStunnedAction(int32 CharacterIndex, float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformRivalHit(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformReceiveReceiveHitStunnedRopes(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformPushToTurnbuckle(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformPowerUpIceBreath(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformPowerUpGodOfThunder(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformPowerUpEarthquake(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformGrabTurnbuckle(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformGrabExitFromCage(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformGoToApron(int32 CharacterIndex, bool bFromIrishWhip);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformFenceStunned(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformEarthQuakeAnimation(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformDumpedAction(int32 CharacterIndex, bool bFaceUp, float DebugTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformCounteract(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerformAction(int32 CharacterIndex, EWWEInputAction Action);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ModifyFeaturedStat(const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchmakingWithFriendStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchmakingStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchmakingServerBackfillStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchmakingLocalStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchmakingCancel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvokeFrameHUD(const FText& Title, const FText& Description, bool bHardCurrency, int32 CurrencyAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IgnoreHiddenCharacters(bool NewIgnoreHiddenCharacters);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HitRing(int32 Damage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlayerStats(ESBMatchMode MatchMode, ESBCompetitionMode MatchType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlayerProgression();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlatformUniqueId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlatformItem(const FString& ItemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetOssUniqueId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetMyLeaderboard();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetLeaderboard(const int32 Rank, const int32 Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetGameGeneralConfiguration();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetGameConfiguration(const FString& ConfigurationId, ESBMatchMode MatchMode, ESBCompetitionMode MatchType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetAroundMeLeaderboard(const int32 Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceStartTutorial(int32 TutorialIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExplodeRingCorner(bool Front, bool Left);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSignature(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableOutOfRingCountdown(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableFinisher(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EmptyStoreCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DecreaseLifePoints(int32 CharacterIndex, int32 DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeactiveInfiniteHeatPoints(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CurrentWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteQuests(const int32 SlotId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteNode(const FString& NodeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSkillsModifiers(int32 CharacterIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllSkillsModifiers(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceUpDownTurnbuckleActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceUpDownRingActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceThrowedActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceRunningHitActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceRopesReboundActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceGroundHitActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceGrabActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckDistanceAfterIrishWhipActions(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeDamageModifier(int32 CharacterIndex, float InNewDamageModifier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCollisionChannel(const FString& ObjectClassName, const FString& CollisionProfileName, const FString& ComponentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCharacterState(int32 CharacterIndex, EWWECharacterState CharacterState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCharacterParamsByID(int32 Character, const FString& NewCharacterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeCharacterParams(int32 Character, int32 ParamsIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeginHelicopterEvent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllowToSkipTutorials(bool bActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllowToSkipComics(bool bActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddUserXP(int32 XP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddTotalLifePoints(int32 CharacterIndex, int32 DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMoney(int32 CharacterIndex, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMaximumPowerUpPoints(bool bActiveInfitePoints, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMaximumHeatPoints(int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFreeBloodline(int32 BloodlineIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCharisma(int32 CharacterIndex, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActiveSkillsCheat(int32 CharacterIndex, bool bActiveSkills, bool bActiveStunAfterParry);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivePowerUpTier(int32 Tier, bool bNoCoolDown, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActiveConcretePowerUp(const FString& PowerUpType, bool bNoCoolDown, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActionsTooltipTickEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActionsTooltipEnabled(bool bIsEnabled);
    
};


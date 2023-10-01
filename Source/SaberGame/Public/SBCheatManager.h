#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "SBCheatManager.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USBCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowDebugDraws();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSafeZoneLines();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetPlayerSlots() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PushScene(const FName& SceneUID, const FName& TransitionUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PopScene(const FName& TransitionUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogoutFromBackend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LocalDedicatedGameLiftOnly(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideMeshPaintedFromSBCharacterNumber(const int32 CharacterNumber, const int32 InitialToneIndex, const int32 FinalToneIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideMeshPaintedFromActorName(const FString& ActorName, const int32 InitialToneIndex, const int32 FinalToneIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EmptyPlayerSlots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerSlots() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAndRecoverFocus();
    
};


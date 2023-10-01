#pragma once
#include "CoreMinimal.h"
#include "PGGameModeMainMenu.h"
#include "WWEGameModeMainMenu.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeMainMenu : public APGGameModeMainMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterEditorLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrestlersMenuLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrestlersShowcaseMenuLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WrestlersDetailsMenuLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PowerUpsMenuLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KingOfTheRingLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillTreeLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlsLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* RequiredLevelToLoad;
    
    AWWEGameModeMainMenu();
    UFUNCTION(BlueprintCallable)
    void ReadyToStreamCharacterEditor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMMMusicFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void OnLogoMusicFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnLogoMusicFadeIn();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEULASaveCompleted(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    bool NeedsDailyQuestNotification();
    
    UFUNCTION(BlueprintCallable)
    void GoToWrestlersShowcaseMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToWrestlersMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToWrestlerDetailsMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToTripleThreat();
    
    UFUNCTION(BlueprintCallable)
    void GoToTornadoTag();
    
    UFUNCTION(BlueprintCallable)
    void GoToTagTeam();
    
    UFUNCTION(BlueprintCallable)
    void GoToSteelCage2vs2();
    
    UFUNCTION(BlueprintCallable)
    void GoToSteelCage1vs1();
    
    UFUNCTION(BlueprintCallable)
    void GoToSkillTreeMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToRoyalRumble();
    
    UFUNCTION(BlueprintCallable)
    void GoToPowerUpsEditor();
    
    UFUNCTION(BlueprintCallable)
    void GoToOnlineTestListenServer();
    
    UFUNCTION(BlueprintCallable)
    void GoToOnlineTestClient();
    
    UFUNCTION(BlueprintCallable)
    void GoToKingOfTheRing();
    
    UFUNCTION(BlueprintCallable)
    void GoToGauntlet();
    
    UFUNCTION(BlueprintCallable)
    void GoToFatal4Way();
    
    UFUNCTION(BlueprintCallable)
    void GoToCustomCollection();
    
    UFUNCTION(BlueprintCallable)
    void GoToCharacterEditor(bool bCreateNewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void GoToArenaEditor();
    
    UFUNCTION(BlueprintCallable)
    void GoToAnimsViewer();
    
    UFUNCTION(BlueprintCallable)
    void GoTo1vs1();
    
private:
    UFUNCTION(BlueprintCallable)
    void FadeInAudio();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWWEActionNodeResult.h"
#include "WWELearningCooldownState.h"
#include "WWETutorialParams.h"
#include "WWETutorialState.h"
#include "WWELearningComponent.generated.h"

class AWWECharacterCombat;
class USoundCue;
class UWWEActionNode;
class UWWEDefaultContentInteractiveTutorial;
class UWWEInteractiveTutorial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWELearningComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentInteractiveTutorial* DefaultContentInteractiveTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CachedOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FWWETutorialParams> AvailableTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWELearningCooldownState CooldownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETutorialState TutorialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnSuccessCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnFailedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEInteractiveTutorial* InteractiveTutorialWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> MessageBoxesQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAllTutorialsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentMessageBoxesQueueIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableInputTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float StartingAudioTime;
    
public:
    UWWELearningComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAvailableTutorials(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowTutorialMessageBoxes();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialMessageBoxTexts(TArray<FText> MessageBoxTexts);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestorePhysics(float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted();
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnd(UWWEActionNode* ActionNode, EWWEActionNodeResult Result, bool bIsLastAction);
    
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(UWWEActionNode* ActionNode);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStartTutorial(int32 TutorialIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableTutorialInput();
    
private:
    UFUNCTION(BlueprintCallable)
    void ConfigureAndShowMessageBoxes();
    
};


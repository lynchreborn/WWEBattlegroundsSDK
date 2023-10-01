#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWWEPointsPoolCategory.h"
#include "EWWEPointsPoolType.h"
#include "EWWESaveType.h"
#include "EWWEUserProgressionCondition.h"
#include "WWEPointsPoolCategory.h"
#include "WWEProgressionReward.h"
#include "WWEProgressionManager.generated.h"

class AWWECharacterCombat;
class UWWEDefaultContentProgression;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEProgressionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisualUserXP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEPointsPoolCategory PointsPoolCategories[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugPrint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentProgression* DefaultContentProgression;
    
public:
    UWWEProgressionManager();
    UFUNCTION(BlueprintCallable)
    void UnlockReward(FWWEProgressionReward RewardToUnlock, bool bUpdateFeaturedStat, bool bHasToSave, bool bCheckAchievements, EWWESaveType SaveType);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugPrint();
    
    UFUNCTION(BlueprintCallable)
    void SetParamsForScreenPopUp(FWWEProgressionReward RewardUnlocked, FText ContextText, bool bLongContextText);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllPointsPools();
    
    UFUNCTION(BlueprintCallable)
    void PushRewardScreenPopUp(FWWEProgressionReward RewardUnlocked, FText ContextText, bool bLongContextText, UObject* CallbackTarget, const FName& CallbackName);
    
    UFUNCTION(BlueprintCallable)
    void OnlyPushScreenPopUp(UObject* CallbackTarget, const FName& CallbackName);
    
    UFUNCTION(BlueprintCallable)
    bool IsRewardEmpty(FWWEProgressionReward RewardToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserNumberOfLevels();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserMaxExp();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserLevelExpFor(int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserExpUntilThisLevel(int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUserExpForNextLevel(int32 Exp);
    
    UFUNCTION()
    int32 GetTotalPointsPool(EWWEPointsPoolType PoolType, EWWEPointsPoolCategory PoolCategory);
    
    UFUNCTION(BlueprintCallable)
    void AddPointsFromResult(bool bWin, AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void AddPointsFromConditionFromCharacter(EWWEUserProgressionCondition Condition, AWWECharacterCombat* Character);
    
};


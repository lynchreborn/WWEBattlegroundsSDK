#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEAnimationSections.h"
#include "EWWEMinigame.h"
#include "WWEAction_SimpleBase.h"
#include "WWEAction_AnimBase.generated.h"

class AWWECharacterCombat;
class UAnimMontage;
class UWWEAnimInstanceCombat;
class UWWEAnimationVariation;
class UWWECommentSettings;

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_AnimBase : public UWWEAction_SimpleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEAnimInstanceCombat* CachedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEAnimationVariation*> CachedVariationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEAnimationVariation*> CachedSignatureVariationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEAnimationVariation*> SelectedSignatureVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEAnimationVariation* ForcedVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector ForceLocationToAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName NextSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float StaminaCostAnimBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoPlayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bGetRandomVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bRecoverHPPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPRecoverPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMinigame MinigameType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSignatureMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfVariationIsEnabledForCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompensatePlayRateLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionWithCharactersNoOverlapOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreCollisionWithCharactersNoOverlapOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreCollisionWithWallsNoOverlapOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreCollisionWithObjectsNoOverlapOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckDumpedOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSignatureMoveAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> NotOffensiveCommentSettings;
    
public:
    UWWEAction_AnimBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRivalChangeNextSection(EWWEAnimationSections SectionName, EWWEAnimationSections NextSectionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastJumpToSectionFromCurrentMontage(const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastInstigatorRivalJumpToSectionFromCurrentMontage(const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChangeNextSection(EWWEAnimationSections SectionName, EWWEAnimationSections NextSectionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAnyRivalJumpToSectionFromCurrentMontage(AWWECharacterCombat* Rival, const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName);
    
};


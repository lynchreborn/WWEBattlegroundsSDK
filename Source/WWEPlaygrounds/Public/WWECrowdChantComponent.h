#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWWEActionNodeResult.h"
#include "WWECrowdChantComponent.generated.h"

class AWWECharacterCombat;
class UAudioComponent;
class UWWEActionNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWECrowdChantComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsUntilCrowdCanReactNegatively;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* CrowdChantNameAudioComponent;
    
public:
    UWWECrowdChantComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMaximumMoney(const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnMaximumCharisma(const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchFinished(const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnInactivity();
    
    UFUNCTION(BlueprintCallable)
    void OnActionStart(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnActionCustomEvent(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat, EWWEActionNodeResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnActionCustomCountEvent(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat, int32 CountNumber, EWWEActionNodeResult Result);
    
    UFUNCTION(BlueprintCallable)
    void AllowNegativeCrowdReactions();
    
};


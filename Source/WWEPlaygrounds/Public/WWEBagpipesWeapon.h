#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "WWESkeletalWeapon.h"
#include "WWEBagpipesWeapon.generated.h"

class AActor;
class ATriggerSphere;
class AWWEBagpiper;
class AWWECharacterCombat;
class USBSoundLibrary;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEBagpipesWeapon : public AWWESkeletalWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsNotCloseWhenEnablingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEBagpiper* BagpiperOwner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerSphere* EffectCollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDestroyAfterRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInPlaySoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutPlaySoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBSoundLibrary> SoundLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnAffectedSoundNameFromLibrary;
    
public:
    AWWEBagpipesWeapon();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterExitsEffect(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnterEffect(AActor* OverlappedActor, AActor* OtherActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnteredRing(const AWWECharacterCombat* CharacterCombat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBagpipesLifetimeEnded(bool bReleaseBagpipes);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckAndAffectInsideActors();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndAffectCharacter(AWWECharacterCombat* CharacterCombat);
    
};


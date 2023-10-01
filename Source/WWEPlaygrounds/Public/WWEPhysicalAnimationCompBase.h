#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "WWEPhysicalAnimationCompBase.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEPhysicalAnimationCompBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrengthMultiplyer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UWWEPhysicalAnimationCompBase();
    UFUNCTION(BlueprintCallable)
    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBodyTargetTransform(FName BodyName) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EWWEPhysicalAnimationLimb.h"
#include "WWEPhysicalAnimationCompBase.h"
#include "WWEPhysicalAnimationComponent.generated.h"

class UWWECharacterPhysicsAssetData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEPhysicalAnimationComponent : public UWWEPhysicalAnimationCompBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysAnimConversionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECharacterPhysicsAssetData* PhysicsAssetConfiguration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEPhysicalAnimationLimb> CurrentLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEPhysicalAnimationLimb> RemovedLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActived;
    
public:
    UWWEPhysicalAnimationComponent();
};


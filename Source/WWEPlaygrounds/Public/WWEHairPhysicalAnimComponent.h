#pragma once
#include "CoreMinimal.h"
#include "WWEPhysicalAnimationCompBase.h"
#include "WWEHairPhysicalAnimComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEHairPhysicalAnimComponent : public UWWEPhysicalAnimationCompBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialPhysicsBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnOthers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActived;
    
public:
    UWWEHairPhysicalAnimComponent();
};


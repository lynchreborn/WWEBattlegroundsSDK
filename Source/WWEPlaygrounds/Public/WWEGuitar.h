#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEStaticWeapon.h"
#include "WWEGuitar.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGuitar : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsNotCloseWhenEnablingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GuitarNavigationMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CurrenNavigationMusic;
    
    AWWEGuitar();
};


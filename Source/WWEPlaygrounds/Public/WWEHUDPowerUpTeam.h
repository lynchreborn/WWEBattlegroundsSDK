#pragma once
#include "CoreMinimal.h"
#include "WWEHUDPowerUpTeam.generated.h"

class UWWEHUDPowerUpWidget;

USTRUCT(BlueprintType)
struct FWWEHUDPowerUpTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWEHUDPowerUpWidget*> PowerUpWidgets;
    
    WWEPLAYGROUNDS_API FWWEHUDPowerUpTeam();
};


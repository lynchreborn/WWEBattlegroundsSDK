#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEMenuPowerUpsSelected.generated.h"

class UWWEMenuPowerUpContent;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMenuPowerUpsSelected : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpContent* Tier1PowerUpContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpContent* Tier2PowerUpContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpContent* Tier3PowerUpContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LobbySlot_Pulse;
    
public:
    UWWEMenuPowerUpsSelected();
};


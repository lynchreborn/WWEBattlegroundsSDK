#pragma once
#include "CoreMinimal.h"
#include "WWEHUD.h"
#include "WWEHUDCombat.generated.h"

class UWWEHUDCombatScreen;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEHUDCombat : public AWWEHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDCombatScreen* HUDWidget;
    
    AWWEHUDCombat();
};


#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpsGrid.h"
#include "WWELobbyPowerUpsGrid.generated.h"

class UImage;
class UWWEPowerUpBase;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyPowerUpsGrid : public UWWEPowerUpsGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPowerUpBase* PowerUpInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* GridUpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* GridDownArrow;
    
public:
    UWWELobbyPowerUpsGrid();
};


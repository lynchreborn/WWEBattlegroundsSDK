#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWEPowerUpsGrid.generated.h"

class UImage;
class UWWELobbyGridSlot;
class UWWEPowerUpBase;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPowerUpsGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEPowerUpBase*> SelectedPowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWELobbyGridSlot* LastSelectedSlot;
    
public:
    UWWEPowerUpsGrid();
};


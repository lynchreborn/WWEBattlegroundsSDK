#pragma once
#include "CoreMinimal.h"
#include "WWEMatchSubConfigurationGridSlot.h"
#include "WWEBattleGroundSelectionScreen.generated.h"

class USizeBox;
class UWWEBattleGroundSelectionGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBattleGroundSelectionScreen : public UWWEMatchSubConfigurationGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEBattleGroundSelectionGrid* BattleGroundGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* LeftArrowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RightArrowSize;
    
public:
    UWWEBattleGroundSelectionScreen();
};


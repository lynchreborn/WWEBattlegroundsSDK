#pragma once
#include "CoreMinimal.h"
#include "WWECombatResultsLevelUp.h"
#include "WWEPlayerLevelUp.generated.h"

class UWWECustomImageNumber;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerLevelUp : public UWWECombatResultsLevelUp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECustomImageNumber* LevelNumber;
    
public:
    UWWEPlayerLevelUp();
};


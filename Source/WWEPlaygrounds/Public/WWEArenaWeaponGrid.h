#pragma once
#include "CoreMinimal.h"
#include "WWEArenaItemGrid.h"
#include "WWEArenaWeaponGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaWeaponGrid : public UWWEArenaItemGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumWeapons;
    
public:
    UWWEArenaWeaponGrid();
};


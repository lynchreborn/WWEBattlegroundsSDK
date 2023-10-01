#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEInfoFightStyle.h"
#include "WWEFightStyleGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFightStyleGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEInfoFightStyle> CachedFightStyleItems;
    
public:
    UWWEFightStyleGrid();
};


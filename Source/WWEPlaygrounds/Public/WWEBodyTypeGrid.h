#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEInfoBodyType.h"
#include "WWEBodyTypeGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBodyTypeGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEInfoBodyType> CachedBodyTypeItems;
    
public:
    UWWEBodyTypeGrid();
};


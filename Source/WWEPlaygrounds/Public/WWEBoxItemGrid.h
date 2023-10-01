#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEBoxItemGrid.generated.h"

class UWWEBoxItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBoxItemGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEBoxItemParameters* CachedBoxParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEBoxItemParameters*> CachedBoxItems;
    
public:
    UWWEBoxItemGrid();
};


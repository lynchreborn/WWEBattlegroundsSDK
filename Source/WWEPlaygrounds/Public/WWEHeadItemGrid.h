#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEHeadItemGrid.generated.h"

class UWWEHeadItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHeadItemGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEHeadItemParameters* CachedHeadParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEHeadItemParameters*> CachedHeadItems;
    
public:
    UWWEHeadItemGrid();
};


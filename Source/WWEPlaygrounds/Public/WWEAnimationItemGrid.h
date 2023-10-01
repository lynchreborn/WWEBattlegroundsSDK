#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationElementInfo.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEAnimationItemGrid.generated.h"

class UWWEInfoAnimationStep;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimationItemGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEInfoAnimationStep* LastInfoCached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEAnimationElementInfo CachedElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEInfoAnimationStep*> CachedBackListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ArenaItemsIdList;
    
public:
    UWWEAnimationItemGrid();
};


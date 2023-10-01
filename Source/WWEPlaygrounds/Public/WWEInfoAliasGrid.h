#pragma once
#include "CoreMinimal.h"
#include "WWEAliasInfo.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEInfoAliasGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEInfoAliasGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEAliasInfo> CachedAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEAliasInfo SelectedAliasInfo;
    
public:
    UWWEInfoAliasGrid();
};


#pragma once
#include "CoreMinimal.h"
#include "WWEAccesoriesElementInfo.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEAccesoriesItemGrid.generated.h"

class UWWEInfoAccesoriesStep;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAccesoriesItemGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEAccesoriesElementInfo CachedAccesoriesElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEInfoAccesoriesStep*> CachedBackListAccesoriesItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedSkinAccesoriesItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedVanityItems;
    
public:
    UWWEAccesoriesItemGrid();
};


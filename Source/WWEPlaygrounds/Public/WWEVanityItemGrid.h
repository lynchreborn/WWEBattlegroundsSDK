#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEVanityElementInfo.h"
#include "WWEVanityItemGrid.generated.h"

class UWWEInfoVanityStep;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEVanityItemGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEInfoVanityStep* LastInfoVanityCached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEVanityElementInfo CachedVanityElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEInfoVanityStep*> CachedBackListVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedSkinAccesoriesItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString SelectedVanityFullBodyItem;
    
public:
    UWWEVanityItemGrid();
};


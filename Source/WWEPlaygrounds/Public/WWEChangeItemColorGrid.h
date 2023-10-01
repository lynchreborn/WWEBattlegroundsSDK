#pragma once
#include "CoreMinimal.h"
#include "WWEChangeItemColorInfo.h"
#include "WWECharacterEditorCommonGrid.h"
#include "WWEChangeItemColorGrid.generated.h"

class UWWEGridArrow;
class UWWESkinItemParameters;
class UWWEVanityItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEChangeItemColorGrid : public UWWECharacterEditorCommonGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* ColorUpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* ColorDownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEChangeItemColorInfo> CachedChangeItemColorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEVanityItemParameters* VanityItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWESkinItemParameters* SkinItemParameters;
    
public:
    UWWEChangeItemColorGrid();
};


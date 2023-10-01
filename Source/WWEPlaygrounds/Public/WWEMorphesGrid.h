#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWEMorpherInfo.h"
#include "WWEMorphesGrid.generated.h"

class UWWECharacterEditorStep;
class UWWEGridArrow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMorphesGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStep* Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEMorpherInfo> CharacterMorphers;
    
public:
    UWWEMorphesGrid();
};


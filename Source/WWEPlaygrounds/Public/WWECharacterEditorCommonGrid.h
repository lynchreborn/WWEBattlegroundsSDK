#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWECharacterEditorCommonGrid.generated.h"

class UWWECharacterEditorCommonSlot;
class UWWECharacterEditorStep;
class UWWEGridArrow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorCommonGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStep* Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorCommonSlot* SlotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString SelectedItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
public:
    UWWECharacterEditorCommonGrid();
};


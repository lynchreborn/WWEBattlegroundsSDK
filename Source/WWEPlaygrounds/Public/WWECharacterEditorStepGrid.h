#pragma once
#include "CoreMinimal.h"
#include "SBHardCacheMenuGrid.h"
#include "WWECharacterEditorStepGrid.generated.h"

class UWWECharacterEditorStep;
class UWWEGenderElement;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepGrid : public USBHardCacheMenuGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStep* Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEGenderElement* GenderSelected;
    
public:
    UWWECharacterEditorStepGrid();
};


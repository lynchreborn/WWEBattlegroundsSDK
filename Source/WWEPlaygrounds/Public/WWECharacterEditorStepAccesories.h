#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorStep.h"
#include "WWECharacterEditorStepAccesories.generated.h"

class USBPlatformSlot;
class UWWEGridArrow;
class UWWEVanityItemGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepAccesories : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* HideClothesCustomButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabSubCategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEVanityItemGrid* VanityGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
public:
    UWWECharacterEditorStepAccesories();
};


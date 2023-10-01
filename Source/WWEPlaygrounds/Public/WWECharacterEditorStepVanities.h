#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorStep.h"
#include "WWECharacterEditorStepVanities.generated.h"

class UWWEChangeItemColorGrid;
class UWWEGridArrow;
class UWWEVanityItemGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepVanities : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabSubCategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEVanityItemGrid* VanityGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEChangeItemColorGrid* ChangeItemColorGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
public:
    UWWECharacterEditorStepVanities();
};


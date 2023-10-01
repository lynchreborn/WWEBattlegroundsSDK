#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorStep.h"
#include "WWECharacterEditorStepBox.generated.h"

class UWWEBoxItemGrid;
class UWWEBoxItemParameters;
class UWWEGridArrow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepBox : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEBoxItemGrid* BoxItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEBoxItemParameters*> CachedBoxItems;
    
public:
    UWWECharacterEditorStepBox();
};


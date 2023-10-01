#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorStep.h"
#include "WWECharacterEditorStepGender.generated.h"

class UWWECharacterEditorStepGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepGender : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStepGrid* GenderGrid;
    
public:
    UWWECharacterEditorStepGender();
};


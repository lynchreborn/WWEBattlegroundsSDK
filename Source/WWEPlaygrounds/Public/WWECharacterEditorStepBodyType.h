#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorStep.h"
#include "WWEInfoBodyType.h"
#include "WWECharacterEditorStepBodyType.generated.h"

class UTextBlock;
class UWWEBodyTypeGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepBodyType : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEBodyTypeGrid* BodyTypeGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEInfoBodyType> CachedBodyTypeItems;
    
public:
    UWWECharacterEditorStepBodyType();
};


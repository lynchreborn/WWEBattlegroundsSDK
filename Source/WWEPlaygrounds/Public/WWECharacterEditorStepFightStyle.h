#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.h"
#include "WWECharacterEditorStep.h"
#include "WWEInfoFightStyle.h"
#include "WWECharacterEditorStepFightStyle.generated.h"

class UTextBlock;
class UWWEFightStyleGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepFightStyle : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEFightStyleGrid* FightStyleGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEInfoFightStyle> CachedFightStyleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EPGCharacterBody CachedBodyType;
    
public:
    UWWECharacterEditorStepFightStyle();
};


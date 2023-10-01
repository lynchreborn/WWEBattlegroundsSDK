#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEInfoBodyType.h"
#include "WWEBodyTypeGridSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBodyTypeGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWEInfoBodyType CharacterBodyType;
    
public:
    UWWEBodyTypeGridSlot();
};


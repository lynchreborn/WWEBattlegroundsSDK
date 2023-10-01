#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEBoxItemGridSlot.generated.h"

class UWWEBoxItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBoxItemGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEBoxItemParameters* BoxItemParameters;
    
    UWWEBoxItemGridSlot();
};


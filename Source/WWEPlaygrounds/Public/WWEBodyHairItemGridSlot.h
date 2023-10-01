#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEBodyHairItemGridSlot.generated.h"

class UWWESkinItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBodyHairItemGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWESkinItemParameters* SkinItemParameters;
    
public:
    UWWEBodyHairItemGridSlot();
};


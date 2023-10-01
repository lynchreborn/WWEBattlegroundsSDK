#pragma once
#include "CoreMinimal.h"
#include "WWEChangeItemColorInfo.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEChangeItemColorGridSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEChangeItemColorGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEChangeItemColorInfo ChangeItemColorInfo;
    
public:
    UWWEChangeItemColorGridSlot();
};


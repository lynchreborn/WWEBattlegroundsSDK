#pragma once
#include "CoreMinimal.h"
#include "WWEAliasInfo.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEInfoAliasGridSlot.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEInfoAliasGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* AliasText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEAliasInfo AliasInfo;
    
public:
    UWWEInfoAliasGridSlot();
};


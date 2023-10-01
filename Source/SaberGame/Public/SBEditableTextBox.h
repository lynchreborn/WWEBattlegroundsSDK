#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "ESBTextRestrictionReason.h"
#include "SBTextRestrictions.h"
#include "SBEditableTextBox.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RestrictionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FSBTextRestrictions CurrentRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESBTextRestrictionReason RestrictionReasonMask;
    
public:
    USBEditableTextBox();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "SBRichTextStyleRow.generated.h"

class USBTextStyle;

USTRUCT(BlueprintType)
struct FSBRichTextStyleRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> Style;
    
    SABERGAME_API FSBRichTextStyleRow();
};


#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "NFLMultiOutlineStyle.generated.h"

class USBTextStyle;

USTRUCT(BlueprintType)
struct FNFLMultiOutlineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> OutlineStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    SABERGAME_API FNFLMultiOutlineStyle();
};


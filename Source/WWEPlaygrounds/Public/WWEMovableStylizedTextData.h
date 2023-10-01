#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "WWEMovableStylizedTextData.generated.h"

USTRUCT(BlueprintType)
struct FWWEMovableStylizedTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> JustificationSTL;
    
    WWEPLAYGROUNDS_API FWWEMovableStylizedTextData();
};


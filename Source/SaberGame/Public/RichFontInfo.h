#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RichFontInfo.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct SABERGAME_API FRichFontInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* RichFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor FontColor;
    
    FRichFontInfo();
};


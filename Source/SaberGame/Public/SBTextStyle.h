#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBTextStyleData.h"
#include "SBTextStyle.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBTextStyle : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBTextStyleData DefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBTextStyleData> CultureStylesOverride;
    
public:
    USBTextStyle();
};


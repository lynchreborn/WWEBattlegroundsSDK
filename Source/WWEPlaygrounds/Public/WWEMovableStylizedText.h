#pragma once
#include "CoreMinimal.h"
#include "ESBControllerType.h"
#include "SBStylizedText.h"
#include "WWEMovableStylizedTextsData.h"
#include "WWEMovableStylizedText.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEMovableStylizedText : public USBStylizedText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBControllerType, FWWEMovableStylizedTextsData> TextData;
    
    UWWEMovableStylizedText();
};


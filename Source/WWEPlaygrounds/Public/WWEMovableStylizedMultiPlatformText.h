#pragma once
#include "CoreMinimal.h"
#include "ESBControllerType.h"
#include "WWEMovableStylizedTextsData.h"
#include "WWEStylizedMultiPlatformText.h"
#include "WWEMovableStylizedMultiPlatformText.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEMovableStylizedMultiPlatformText : public UWWEStylizedMultiPlatformText {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBControllerType, FWWEMovableStylizedTextsData> TextData;
    
public:
    UWWEMovableStylizedMultiPlatformText();
};


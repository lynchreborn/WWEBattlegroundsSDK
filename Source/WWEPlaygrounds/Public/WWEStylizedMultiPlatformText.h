#pragma once
#include "CoreMinimal.h"
#include "SBStylizedText.h"
#include "EWWEPlatforms.h"
#include "MultiPlatformTextErrorAvoider.h"
#include "WWEStylizedMultiPlatformText.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEStylizedMultiPlatformText : public USBStylizedText {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEPlatforms, FMultiPlatformTextErrorAvoider> AllPlatformDependantText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MultiPlatformTextOpenMark;
    
public:
    UWWEStylizedMultiPlatformText();
};


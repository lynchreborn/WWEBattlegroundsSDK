#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "WWECarouselIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECarouselIcon : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageCarouselOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageCarouselOff;
    
public:
    UWWECarouselIcon();
};


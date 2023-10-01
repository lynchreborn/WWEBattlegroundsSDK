#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELogoVideo.generated.h"

class UImage;
class USBVideoDisplayWidget;
class USBVideoItemData;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELogoVideo : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBVideoItemData* VideoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBVideoDisplayWidget* Video;
    
public:
    UWWELogoVideo();
};


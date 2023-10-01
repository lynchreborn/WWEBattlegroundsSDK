#pragma once
#include "CoreMinimal.h"
#include "ESBPlatformType.h"
#include "SBUserWidget.h"
#include "EPGPlatformIconPlatform.h"
#include "EPGPlatformIconSize.h"
#include "PGCrossplayPlatformIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGCrossplayPlatformIcon : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBPlatformType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGPlatformIconSize IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceXboxIconInPc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGPlatformIconPlatform ForceIcon;
    
public:
    UPGCrossplayPlatformIcon();
};


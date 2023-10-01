#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "EWWEFightingStyle.h"
#include "WWEOptionsFightingStyle.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEOptionsFightingStyle : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FightingStyleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, UTexture2D*> FightingStylesIcons;
    
    UWWEOptionsFightingStyle();
};


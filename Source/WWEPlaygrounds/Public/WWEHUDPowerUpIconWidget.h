#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "EWWEPowerIconStates.h"
#include "WWEHUDPowerUpIconWidget.generated.h"

class UImage;
class UMaterialInstance;
class USBPlatformIcon;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDPowerUpIconWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Glow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformIcon* PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* RedGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformIconActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ConfiguredDeactiveIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ConfiguredOffIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ConfiguredOnIconTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerIconStates PreviewState;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEPowerIconStates CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float OriginEffectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InUseIdleAnim;
    
public:
    UWWEHUDPowerUpIconWidget();
};


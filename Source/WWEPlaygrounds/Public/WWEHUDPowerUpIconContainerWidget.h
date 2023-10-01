#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEHUDPowerUpIconContainerWidget.generated.h"

class UHorizontalBox;
class UWWEHUDPowerUpIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDPowerUpIconContainerWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* IconContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWEHUDPowerUpIconWidget*> Icons;
    
public:
    UWWEHUDPowerUpIconContainerWidget();
};


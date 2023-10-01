#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbyPowerUpContent.generated.h"

class UImage;
class UWWEPowerUpBase;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyPowerUpContent : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LevelIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* InUseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPowerUpBase* MyPowerUp;
    
    UWWELobbyPowerUpContent();
};


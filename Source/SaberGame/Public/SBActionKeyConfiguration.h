#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBControllerType.h"
#include "SBActionConfiguration.h"
#include "SBActionKeyConfiguration.generated.h"

class USBControllerIconProvider;
class UTexture2D;

UCLASS(Blueprintable)
class USBActionKeyConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBActionConfiguration> ActionKeyMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBControllerType, TSoftObjectPtr<USBControllerIconProvider>> ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PlaceholderControllerIcon;
    
public:
    USBActionKeyConfiguration();
};


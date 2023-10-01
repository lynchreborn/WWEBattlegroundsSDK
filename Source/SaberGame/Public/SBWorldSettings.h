#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "SBWorldSettings.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialCameraTag;
    
    ASBWorldSettings();
};


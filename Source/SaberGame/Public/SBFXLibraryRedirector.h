#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBFXLibraryRedirector.generated.h"

class USBFXLibrary;

UCLASS(Blueprintable)
class SABERGAME_API USBFXLibraryRedirector : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBFXLibrary* FXLibrary;
    
    USBFXLibraryRedirector();
};


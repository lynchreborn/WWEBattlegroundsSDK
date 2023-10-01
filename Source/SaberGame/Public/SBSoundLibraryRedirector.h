#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSoundLibraryRedirector.generated.h"

class USBSoundLibrary;

UCLASS(Blueprintable)
class SABERGAME_API USBSoundLibraryRedirector : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBSoundLibrary* SoundLibrary;
    
    USBSoundLibraryRedirector();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBSoundSurfaceLibrary.generated.h"

class USBSoundLibrary;

USTRUCT(BlueprintType)
struct FSBSoundSurfaceLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBSoundLibrary> SoundLibrary;
    
    SABERGAME_API FSBSoundSurfaceLibrary();
};


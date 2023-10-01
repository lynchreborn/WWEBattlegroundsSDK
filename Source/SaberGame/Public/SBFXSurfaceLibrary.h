#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBFXSurfaceLibrary.generated.h"

class USBFXLibrary;

USTRUCT(BlueprintType)
struct FSBFXSurfaceLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBFXLibrary* FXLibrary;
    
    SABERGAME_API FSBFXSurfaceLibrary();
};


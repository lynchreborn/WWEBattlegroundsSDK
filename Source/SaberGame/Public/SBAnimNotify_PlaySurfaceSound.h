#pragma once
#include "CoreMinimal.h"
#include "SBAnimNotify_PlaySurfaceEffect.h"
#include "Templates/SubclassOf.h"
#include "SBAnimNotify_PlaySurfaceSound.generated.h"

class USBSoundLibrary;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SABERGAME_API USBAnimNotify_PlaySurfaceSound : public USBAnimNotify_PlaySurfaceEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBSoundLibrary> SoundLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirroredSoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFollow: 1;
    
public:
    USBAnimNotify_PlaySurfaceSound();
};


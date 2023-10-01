#pragma once
#include "CoreMinimal.h"
#include "SBAnimNotify_PlaySurfaceEffect.h"
#include "Templates/SubclassOf.h"
#include "SBAnimNotify_PlaySurfaceFX.generated.h"

class USBFXLibrary;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SABERGAME_API USBAnimNotify_PlaySurfaceFX : public USBAnimNotify_PlaySurfaceEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBFXLibrary> FXLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FXName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirroredFXName;
    
public:
    USBAnimNotify_PlaySurfaceFX();
};


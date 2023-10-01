#pragma once
#include "CoreMinimal.h"
#include "SBItemAssetLoaderInterface.h"
#include "SBItemParameters.h"
#include "SBItemParametersAndLoader.generated.h"

class USBItemAssetLoader;

UCLASS(Blueprintable)
class SABERGAME_API USBItemParametersAndLoader : public USBItemParameters, public ISBItemAssetLoaderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBItemAssetLoader* Loader;
    
public:
    USBItemParametersAndLoader();
    
    // Fix for true pure virtual functions not being implemented
};


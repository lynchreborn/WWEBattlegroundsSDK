#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBItemAssetLoaderInterface.h"
#include "SBItemAssetLoader.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBItemAssetLoader : public UObject, public ISBItemAssetLoaderInterface {
    GENERATED_BODY()
public:
    USBItemAssetLoader();
    
    // Fix for true pure virtual functions not being implemented
};


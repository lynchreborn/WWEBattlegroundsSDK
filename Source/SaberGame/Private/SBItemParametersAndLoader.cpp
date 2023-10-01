#include "SBItemParametersAndLoader.h"
#include "SBItemAssetLoader.h"

USBItemParametersAndLoader::USBItemParametersAndLoader() {
    this->Loader = CreateDefaultSubobject<USBItemAssetLoader>(TEXT("Loader"));
}


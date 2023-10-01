#include "PGLoadRenderLevelRequest.h"

FPGLoadRenderLevelRequest::FPGLoadRenderLevelRequest() {
    this->RenderType = EPGMenuRenderElementType::Favourites;
    this->RandomCount = 0;
    this->bKeepLightsOn = false;
}


#include "SBRichTextBlockPlatformIconDecorator.h"

USBRichTextBlockPlatformIconDecorator::USBRichTextBlockPlatformIconDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->ControllerTypeSource = ESBControllerTypeSource::ActivePlayer;
    this->bUseTemplateBrushImageSize = false;
    this->CachedOwningPlayer = NULL;
}


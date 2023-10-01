#include "SBUtils.h"

TArray<UTexture2D*> USBUtils::RenderWidgetIntoTexture2DList(UUserWidget* _Widget, FVector2D _DrawSize, TArray<FVector2D> _TextureSizes, bool _bUseGammaSpace) {
    return TArray<UTexture2D*>();
}

UTexture2D* USBUtils::RenderWidgetIntoTexture2D(UUserWidget* _Widget, FVector2D _DrawSize, FVector2D _TextureSize, bool _bUseGammaSpace) {
    return NULL;
}

FText USBUtils::LocalizeTextFromText(const FText& OriginalText) {
    return FText::GetEmpty();
}

FText USBUtils::LocalizeText(const FString& TableId, const FString& KeyId, const FString& AltPath) {
    return FText::GetEmpty();
}

TArray<uint8> USBUtils::GetBytesFromFile(USBGameInstance* GameInstance, const FString& Filename) {
    return TArray<uint8>();
}

UTexture2DDynamic* USBUtils::CreateTextureFromFile(const FString& Filename, USBGameInstance* GameInstance) {
    return NULL;
}

UTexture2DDynamic* USBUtils::CreateTextureFromBytes(TArray<uint8>& FileContent) {
    return NULL;
}

TArray<UTexture2D*> USBUtils::ConvertRenderTargetIntoTexture2DList(UTextureRenderTarget2D* _RenderTarget, TArray<FVector2D> _TextureSizes) {
    return TArray<UTexture2D*>();
}

UTexture2D* USBUtils::ConvertRenderTargetIntoTexture2D(UTextureRenderTarget2D* _RenderTarget, FVector2D _TextureSize) {
    return NULL;
}

USBUtils::USBUtils() {
}


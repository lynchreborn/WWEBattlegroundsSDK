#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SBUtils.generated.h"

class USBGameInstance;
class UTexture2D;
class UTexture2DDynamic;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable)
class SABERGAME_API USBUtils : public UObject {
    GENERATED_BODY()
public:
    USBUtils();
    UFUNCTION(BlueprintCallable)
    static TArray<UTexture2D*> RenderWidgetIntoTexture2DList(UUserWidget* _Widget, FVector2D _DrawSize, TArray<FVector2D> _TextureSizes, bool _bUseGammaSpace);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RenderWidgetIntoTexture2D(UUserWidget* _Widget, FVector2D _DrawSize, FVector2D _TextureSize, bool _bUseGammaSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText LocalizeTextFromText(const FText& OriginalText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText LocalizeText(const FString& TableId, const FString& KeyId, const FString& AltPath);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> GetBytesFromFile(USBGameInstance* GameInstance, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* CreateTextureFromFile(const FString& Filename, USBGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* CreateTextureFromBytes(TArray<uint8>& FileContent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UTexture2D*> ConvertRenderTargetIntoTexture2DList(UTextureRenderTarget2D* _RenderTarget, TArray<FVector2D> _TextureSizes);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ConvertRenderTargetIntoTexture2D(UTextureRenderTarget2D* _RenderTarget, FVector2D _TextureSize);
    
};


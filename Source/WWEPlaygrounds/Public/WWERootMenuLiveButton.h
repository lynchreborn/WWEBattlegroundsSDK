#pragma once
#include "CoreMinimal.h"
#include "WWELiveNewItem.h"
#include "WWEStickerMaterialGridElement.h"
#include "WWERootMenuLiveButton.generated.h"

class UAsyncTaskDownloadImage;
class UImage;
class UTexture2D;
class UTexture2DDynamic;
class UWWERootMenuScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERootMenuLiveButton : public UWWEStickerMaterialGridElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* New1ImagePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* New2ImagePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DotOffTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DotOnTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StreamLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewChangeTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> NewsDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWELiveNewItem> NewsItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskDownloadImage* DownloadTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LoadingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWERootMenuScreen* RootMenuScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 DownloadImageRetries;
    
public:
    UWWERootMenuLiveButton();
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestConfigurationFile();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVideo(const FString& VideoPath);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewDownloaded(bool bSuccess, UTexture2DDynamic* bigimage, UTexture2DDynamic* smallimage, TArray<uint8> BigBytes, TArray<uint8> SmallBytes, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDownloadNewsConfigurationFile(bool bWasSuccessful, const FString& Filename);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadURL(int32 Index, const FString& NewURL);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadString(int32 Index, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void DownloadImageFailed(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void DownloadImageCompleted(UTexture2DDynamic* Texture);
    
};


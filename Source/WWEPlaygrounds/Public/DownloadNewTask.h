#pragma once
#include "CoreMinimal.h"
#include "WWEStickerMaterialGridElement.h"
#include "DownloadNewTask.generated.h"

class UDownloadNewTask;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UDownloadNewTask : public UWWEStickerMaterialGridElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* BigImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* SmallImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> BigImageBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> SmallImageBytes;
    
public:
    UDownloadNewTask();
    UFUNCTION(BlueprintCallable)
    static UDownloadNewTask* DownloadNews(const FString& InSmallImageName, const FString& InBigImageName);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESBVideoDiplayStates.h"
#include "SBUserWidget.h"
#include "SBVideoDisplayWidget.generated.h"

class UBasicOverlays;
class UImage;
class UMediaPlayer;
class UMediaSoundComponent;
class USBDefaultContentUI;
class USBRichTextBlock;
class USBVideoItemData;
class USoundClass;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBVideoDisplayWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBDefaultContentUI* DefaultContentUIHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBRichTextBlock* SubtitlesWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UBasicOverlays* SourceSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousMusicVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float OriginalPreviousMusicVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESBVideoDiplayStates CurrentDisplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBVideoItemData* CurrentVideoItem;
    
public:
    USBVideoDisplayWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVideoSupended();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoResumed();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoOpenedFailed(const FString& InFailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnVideoOpened(const FString& InOpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnVideoFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoClosed();
    
};


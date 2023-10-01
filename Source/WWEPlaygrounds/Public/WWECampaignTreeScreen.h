#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "EWWECampaignNodeStatus.h"
#include "WWECampaignTreeScreen.generated.h"

class USBPlatformBar;
class UScaleBox;
class UWWECampaignNodeParameters;
class UWWECampaignTreeWidget;
class UWWEMenuBackground;
class UWWEProgressCounter;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECampaignTreeScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuBackground* MenuBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECampaignTreeWidget* CampaignTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ZoomScaleBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* CenterPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEProgressCounter* ProgressCounter;
    
public:
    UWWECampaignTreeScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowRewardPopup(UWWECampaignNodeParameters* NodeParams);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWrestlerMessageBoxClosed(ESBMessageBoxClosingReason Cause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRewardMessageBoxClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyEventMessageBoxClosed(ESBMessageBoxClosingReason Cause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentSelectedNodeStateChanged(EWWECampaignNodeStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void CompleteCurrentNodeDelayed();
    
};


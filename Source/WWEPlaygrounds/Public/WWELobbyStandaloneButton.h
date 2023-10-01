#pragma once
#include "CoreMinimal.h"
#include "SBStandaloneButton.h"
#include "Templates/SubclassOf.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyStandaloneButton.generated.h"

class UImage;
class UOverlay;
class UUserWidget;
class UWWELobbySlotTextureSet;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyStandaloneButton : public USBStandaloneButton, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ContentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseContrastTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ContentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Unselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWELobbySlotTextureSet* MyTextureSet;
    
public:
    UWWELobbyStandaloneButton();
    
    // Fix for true pure virtual functions not being implemented
};


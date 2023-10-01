#pragma once
#include "CoreMinimal.h"
#include "WWEGridSlot.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyGridSlot.generated.h"

class UImage;
class USBGrayableImage;
class UWWELobbyScreen;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyGridSlot : public UWWEGridSlot, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* Unselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OutfitLeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OutfitRightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ArrowsGridSlot_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWELobbyScreen* LobbyScreen;
    
public:
    UWWELobbyGridSlot();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBUserWidget.h"
#include "EWWEDirections.h"
#include "EWWEPrestigeSlotType.h"
#include "Templates/SubclassOf.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWEPrestigeSlot.generated.h"

class UCanvasPanel;
class UImage;
class USBStylizedText;
class USBTextStyle;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPrestigeSlot : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirections CurrentTextPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TextOnCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeltScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPrestigeSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BackgroundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BeltDefaultSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PrestigeCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PrestigeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SlotBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SlotBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* PrestigeGridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* PrestigeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* PrestigeInfoCorner;
    
public:
    UWWEPrestigeSlot();
    UFUNCTION(BlueprintCallable)
    void SetTextPosition(EWWEDirections Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetPrestigeNumber(int32 PrestigeNumber);
    
    
    // Fix for true pure virtual functions not being implemented
};


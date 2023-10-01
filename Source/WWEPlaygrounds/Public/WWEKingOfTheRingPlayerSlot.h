#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingPlayerSlot.generated.h"

class UImage;
class USBStylizedText;
class UWWEPrestigeSlot;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingPlayerSlot : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Crown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPrestigeSlot* UserPrestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CrownOnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CrownOffAnim;
    
public:
    UWWEKingOfTheRingPlayerSlot();
};


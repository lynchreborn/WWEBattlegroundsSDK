#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWECombatResultsSlotBody.generated.h"

class UImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsSlotBody : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CharacterPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* EmptySlotDecorWidget;
    
public:
    UWWECombatResultsSlotBody();
    
    // Fix for true pure virtual functions not being implemented
};


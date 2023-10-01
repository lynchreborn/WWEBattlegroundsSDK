#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEWrestlersMainCharacterInfo.generated.h"

class UTextBlock;
class UWWELobbyOverallBox;
class UWWEPrestigeSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersMainCharacterInfo : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyOverallBox* OverallBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPrestigeSlot* CharacterPrestige;
    
public:
    UWWEWrestlersMainCharacterInfo();
};


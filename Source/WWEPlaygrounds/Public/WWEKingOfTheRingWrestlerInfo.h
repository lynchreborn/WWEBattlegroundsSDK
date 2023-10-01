#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingWrestlerInfo.generated.h"

class UImage;
class USBStylizedText;
class UWWELobbyOverallBox;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingWrestlerInfo : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* WrestlerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WrestlerFightingStyleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyOverallBox* WrestlerOverallScore;
    
public:
    UWWEKingOfTheRingWrestlerInfo();
};


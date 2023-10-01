#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingLoseScreen.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingLoseScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TimeSurvived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* KickOuts;
    
public:
    UWWEKingOfTheRingLoseScreen();
};


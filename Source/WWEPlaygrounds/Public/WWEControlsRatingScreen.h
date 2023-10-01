#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "EWWEFightingStyle.h"
#include "Templates/SubclassOf.h"
#include "WWEControlsRatingScreen.generated.h"

class USBStylizedText;
class UVerticalBox;
class UWWECharacterParameters;
class UWWEControlsRatingRow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEControlsRatingScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_RatingRows;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* WrestlerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEControlsRatingRow> RatingRowTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, TSubclassOf<UWWECharacterParameters>> DefaultCharacterParameterAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWECharacterParameters> TestCharacterParams;
    
public:
    UWWEControlsRatingScreen();
};


#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEControlsRatingRow.generated.h"

class UHorizontalBox;
class USBStylizedText;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEControlsRatingRow : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* RatingIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_RatingValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RatingIcon;
    
public:
    UWWEControlsRatingRow();
};


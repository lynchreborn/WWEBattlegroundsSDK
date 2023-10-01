#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WWEInfoTournamentSlotText.generated.h"

class UHorizontalBox;
class USBStylizedText;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEInfoTournamentSlotText : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TournamentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RoundHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RoundHorizontalBoxArabic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RoundArabic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ComingSoon;
    
public:
    UWWEInfoTournamentSlotText();
};


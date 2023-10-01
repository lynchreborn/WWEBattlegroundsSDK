#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "SBMaximunCharactersTextBlock.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBMaximunCharactersTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximunCharactersNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndingString;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CroppedText;
    
public:
    USBMaximunCharactersTextBlock();
};


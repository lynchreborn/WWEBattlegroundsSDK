#pragma once
#include "CoreMinimal.h"
#include "SBBlackboardStorable.h"
#include "SBSimplePopupConfigData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSBSimplePopupConfigData : public FSBBlackboardStorable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    SABERGAME_API FSBSimplePopupConfigData();
};


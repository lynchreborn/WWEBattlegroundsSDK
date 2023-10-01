#pragma once
#include "CoreMinimal.h"
#include "WWETutorialButtonStructure.generated.h"

USTRUCT(BlueprintType)
struct FWWETutorialButtonStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialScene;
    
    WWEPLAYGROUNDS_API FWWETutorialButtonStructure();
};


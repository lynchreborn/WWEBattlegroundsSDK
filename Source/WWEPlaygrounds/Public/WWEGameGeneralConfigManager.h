#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEGameGeneralConfiguration.h"
#include "WWEGameGeneralConfigManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEGameGeneralConfigManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEGameGeneralConfiguration GameGeneralConfiguration;
    
public:
    UWWEGameGeneralConfigManager();
};


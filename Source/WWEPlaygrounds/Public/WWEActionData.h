#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWWEPowerAction.h"
#include "WWEActionData.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEActionData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReceiveActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerAction PowerAction;
    
public:
    UWWEActionData();
};


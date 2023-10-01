#pragma once
#include "CoreMinimal.h"
#include "SBDefaultContent.h"
#include "PGDefaultContent.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGDefaultContent : public USBDefaultContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EulaVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GDPRVersion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalanceVersion;
    
public:
    UPGDefaultContent();
};


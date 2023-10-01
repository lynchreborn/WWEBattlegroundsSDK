#pragma once
#include "CoreMinimal.h"
#include "EWWEShoveMode.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_Shoved.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Shoved : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEShoveMode CurrentShoveMode;
    
public:
    UWWEAction_Shoved();
};


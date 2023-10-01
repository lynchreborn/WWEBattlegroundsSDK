#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEBodyPart.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_Dumped.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Dumped : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEBodyPart BodyPartHarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DebugTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DumpedByFinisherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DumpedBySpecialKickColor;
    
public:
    UWWEAction_Dumped();
};


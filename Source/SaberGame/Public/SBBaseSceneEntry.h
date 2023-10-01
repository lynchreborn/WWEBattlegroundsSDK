#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBBaseSceneEntry.generated.h"

class USBBaseScene;

USTRUCT(BlueprintType)
struct FSBBaseSceneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBBaseScene> SBBaseSceneClass;
    
    SABERGAME_API FSBBaseSceneEntry();
};


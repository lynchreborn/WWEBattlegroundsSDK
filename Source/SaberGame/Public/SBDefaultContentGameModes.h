#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SBDefaultContentGameModes.generated.h"

class USBGameModeParameters;

UCLASS(Blueprintable)
class SABERGAME_API USBDefaultContentGameModes : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<USBGameModeParameters>> GameModes;
    
    USBDefaultContentGameModes();
};


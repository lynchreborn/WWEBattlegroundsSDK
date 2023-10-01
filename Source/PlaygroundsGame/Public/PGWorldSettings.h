#pragma once
#include "CoreMinimal.h"
#include "SBWorldSettings.h"
#include "PGWorldSettings.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGWorldSettings : public ASBWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* StartupCinematicSequence;
    
    APGWorldSettings();
};


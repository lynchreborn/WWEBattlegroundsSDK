#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "PGLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    APGLevelSequenceActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
};


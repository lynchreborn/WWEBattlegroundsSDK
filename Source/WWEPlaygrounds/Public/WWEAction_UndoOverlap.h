#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AutoMove.h"
#include "WWEAction_UndoOverlap.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_UndoOverlap : public UWWEAction_AutoMove {
    GENERATED_BODY()
public:
    UWWEAction_UndoOverlap();
};


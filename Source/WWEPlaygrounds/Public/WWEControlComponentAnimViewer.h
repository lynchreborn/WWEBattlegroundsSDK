#pragma once
#include "CoreMinimal.h"
#include "WWEControlComponentCombat.h"
#include "WWEControlComponentAnimViewer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEControlComponentAnimViewer : public UWWEControlComponentCombat {
    GENERATED_BODY()
public:
    UWWEControlComponentAnimViewer();
};


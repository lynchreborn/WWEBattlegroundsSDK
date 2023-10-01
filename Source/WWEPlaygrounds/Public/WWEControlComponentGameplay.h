#pragma once
#include "CoreMinimal.h"
#include "PGControlComponent.h"
#include "WWEControlComponentGameplay.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEControlComponentGameplay : public UPGControlComponent {
    GENERATED_BODY()
public:
    UWWEControlComponentGameplay();
};


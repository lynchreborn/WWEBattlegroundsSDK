#pragma once
#include "CoreMinimal.h"
#include "SBProfanityFilter.h"
#include "PGProfanityFilter.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGProfanityFilter : public USBProfanityFilter {
    GENERATED_BODY()
public:
    UPGProfanityFilter();
};


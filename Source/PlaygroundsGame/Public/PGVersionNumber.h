#pragma once
#include "CoreMinimal.h"
#include "SBVersionNumber.h"
#include "PGVersionNumber.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGVersionNumber : public USBVersionNumber {
    GENERATED_BODY()
public:
    UPGVersionNumber();
};


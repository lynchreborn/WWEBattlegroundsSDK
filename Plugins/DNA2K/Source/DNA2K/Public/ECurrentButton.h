#pragma once
#include "CoreMinimal.h"
#include "ECurrentButton.generated.h"

UENUM(BlueprintType)
enum class ECurrentButton : uint8 {
    novalue,
    UpBtn,
    DownBtn,
    LeftBtn,
    RightBtn,
    XBtn,
    YBtn,
    ABtn,
    BBtn,
    CancelBtn,
};


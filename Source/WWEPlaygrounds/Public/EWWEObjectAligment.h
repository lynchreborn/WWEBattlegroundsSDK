#pragma once
#include "CoreMinimal.h"
#include "EWWEObjectAligment.generated.h"

UENUM(BlueprintType)
enum class EWWEObjectAligment : uint8 {
    None,
    UpVectorAligned,
    ForwardVectorAligned,
    RightVectorAligned,
    UnderRingAnyVectorAligned,
    DownVectorAligned,
    BackwardVectorAligned,
    LeftVectorAligned,
    COUNT,
};


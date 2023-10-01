#pragma once
#include "CoreMinimal.h"
#include "FSignatureSubtype.generated.h"

UENUM(BlueprintType)
enum FSignatureSubtype {
    Signature_GroundHit,
    Signature_Throw,
    Signature_ThrowGroundHit,
    Signature_TopRopes,
    Signature_TopRopesThrow,
    None,
};


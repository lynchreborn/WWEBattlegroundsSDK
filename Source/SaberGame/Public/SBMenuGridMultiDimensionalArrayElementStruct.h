#pragma once
#include "CoreMinimal.h"
#include "SBMenuGridMultiDimensionalArrayElementStruct.generated.h"

class USBMenuGridElement;

USTRUCT(BlueprintType)
struct FSBMenuGridMultiDimensionalArrayElementStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBMenuGridElement*> elements;
    
    SABERGAME_API FSBMenuGridMultiDimensionalArrayElementStruct();
};


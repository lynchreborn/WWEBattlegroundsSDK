#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEArenaItemSubSection.h"
#include "EWWEArenaSectionType.h"
#include "WWEArenaEditorSubsectionSequence.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEArenaEditorSubsectionSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaSectionType Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaItemSubSection SubSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransform;
    
    FWWEArenaEditorSubsectionSequence();
};


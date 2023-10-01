#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBUserWidget.h"
#include "WWEBoneAttachableWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBoneAttachableWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffsetInBorders;
    
public:
    UWWEBoneAttachableWidget();
};


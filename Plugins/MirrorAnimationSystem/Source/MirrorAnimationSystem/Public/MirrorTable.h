#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MirrorBone.h"
#include "MirrorCurve.h"
#include "MirrorTable.generated.h"

UCLASS(Blueprintable)
class MIRRORANIMATIONSYSTEM_API UMirrorTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMirrorBone> MirrorBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMirrorCurve> MirrorCurves;
    
    UMirrorTable();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PGSoundByAnim.h"
#include "PGSoundSurfaceData.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGSoundSurfaceData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSoundByAnim> SoundsData;
    
public:
    UPGSoundSurfaceData();
};


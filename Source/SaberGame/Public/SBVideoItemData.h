#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBVideoInfo.h"
#include "SBVideoItemData.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class SABERGAME_API USBVideoItemData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBVideoInfo VideoItemData;
    
public:
    USBVideoItemData();
};


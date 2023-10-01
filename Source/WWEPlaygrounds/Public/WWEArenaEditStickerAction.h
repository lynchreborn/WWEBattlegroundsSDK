#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "WWEArenaEditStickerAction.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditStickerAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StickerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* StickerTextureRef;
    
public:
    UWWEArenaEditStickerAction();
};


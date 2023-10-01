#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "EWWEArenaItemHeight.h"
#include "WWEArenaEditAssetsHeightBase.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditAssetsHeightBase : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEArenaItemHeight ArenaItemHeight;
    
public:
    UWWEArenaEditAssetsHeightBase();
};


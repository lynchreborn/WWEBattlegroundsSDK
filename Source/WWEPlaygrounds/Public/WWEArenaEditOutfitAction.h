#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "Templates/SubclassOf.h"
#include "WWEArenaEditOutfitAction.generated.h"

class UPGArenaEditActionBase;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditOutfitAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPGArenaEditActionBase>> ArenaEditActionList;
    
public:
    UWWEArenaEditOutfitAction();
};


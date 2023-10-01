#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "EWWEArenaItemSubSection.h"
#include "WWEArenaEditAssetsSubSectionBase.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditAssetsSubSectionBase : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEArenaItemSubSection ArenaItemSubsection;
    
public:
    UWWEArenaEditAssetsSubSectionBase();
};


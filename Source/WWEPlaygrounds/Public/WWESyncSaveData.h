#pragma once
#include "CoreMinimal.h"
#include "PGEditableArenaConfigWithOwner.h"
#include "PGSyncSaveData.h"
#include "WWESyncSaveData.generated.h"

USTRUCT(BlueprintType)
struct FWWESyncSaveData : public FPGSyncSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGEditableArenaConfigWithOwner EditableArenaConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ArenaChampionshipMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EditableArenaChampionshipMapId;
    
    WWEPLAYGROUNDS_API FWWESyncSaveData();
};


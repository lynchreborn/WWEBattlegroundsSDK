#pragma once
#include "CoreMinimal.h"
#include "SBSyncSaveData.h"
#include "PGSyncSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPGSyncSaveData : public FSBSyncSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> UnlockedArenas;
    
    PLAYGROUNDSGAME_API FPGSyncSaveData();
};


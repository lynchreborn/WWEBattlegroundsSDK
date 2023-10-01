#pragma once
#include "CoreMinimal.h"
#include "WWERopeSocket.h"
#include "WWERopeSocketList.generated.h"

USTRUCT(BlueprintType)
struct FWWERopeSocketList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWERopeSocket> SocketList;
    
    WWEPLAYGROUNDS_API FWWERopeSocketList();
};


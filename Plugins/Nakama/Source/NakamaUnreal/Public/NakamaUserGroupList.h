#pragma once
#include "CoreMinimal.h"
#include "NakamaUserGroup.h"
#include "NakamaUserGroupList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaUserGroupList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserGroup> UserGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaUserGroupList();
};


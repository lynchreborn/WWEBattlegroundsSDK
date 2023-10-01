#pragma once
#include "CoreMinimal.h"
#include "ContentUploadData.generated.h"

USTRUCT(BlueprintType)
struct FContentUploadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrigFilename;
    
    ONLINESUBSYSTEMSABER_API FContentUploadData();
};


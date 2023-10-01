#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEAnimViewerCategory.h"
#include "WWEDefaultContentAnimViewer.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentAnimViewer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FWWEAnimViewerCategory> Actions;
    
public:
    UWWEDefaultContentAnimViewer();
};


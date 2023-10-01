#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimViewerCharacterParams.h"
#include "WWEAnimViewerAction.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAnimViewerAction : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimViewerCharacterParams> CharacterParams;
    
public:
    UWWEAnimViewerAction();
};


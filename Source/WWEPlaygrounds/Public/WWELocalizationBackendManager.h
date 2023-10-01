#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWELocalizationBackendManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWELocalizationBackendManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> TextDictionary;
    
public:
    UWWELocalizationBackendManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDownloadLocalizationFile(bool bWasSuccessful, const FString& Filename);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NakamaChatMessage.h"
#include "NakamaLibrary.generated.h"

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNakamaLibrary();
    UFUNCTION(BlueprintCallable)
    static FString ChatMessageStructToJson(FNakamaChatMessage MessageStruct);
    
    UFUNCTION(BlueprintCallable)
    static FNakamaChatMessage ChatMessageJsonToStruct(const FString& JsonMessage);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEDefaultContentComics.generated.h"

class UWWEComicItem;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentComics : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEComicItem>> ComicCollection;
    
    UWWEDefaultContentComics();
};


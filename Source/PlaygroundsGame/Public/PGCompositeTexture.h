#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "PGCompositeTexture.generated.h"

class UCanvas;
class UTexture2D;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGCompositeTexture : public UCanvasRenderTarget2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> LayerTints;
    
    UPGCompositeTexture();
private:
    UFUNCTION(BlueprintCallable)
    void PerformMerge(UCanvas* Canvas, int32 Width, int32 Height);
    
};


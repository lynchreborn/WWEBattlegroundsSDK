#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWECharacterEditorTV.generated.h"

class UStaticMeshComponent;
class UWWECharacterEditorTVWidget;
class UWidgetComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECharacterEditorTV : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TVMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* VideoDisplayWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorTVWidget* VideoDisplayWidget;
    
public:
    AWWECharacterEditorTV();
};


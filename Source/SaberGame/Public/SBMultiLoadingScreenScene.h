#pragma once
#include "CoreMinimal.h"
#include "ESBMultiLoadingScreenSceneStyle.h"
#include "SBLoadingScreenScene.h"
#include "Templates/SubclassOf.h"
#include "SBMultiLoadingScreenScene.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class SABERGAME_API USBMultiLoadingScreenScene : public USBLoadingScreenScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UUserWidget>> MultiWidgetAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMultiLoadingScreenSceneStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentScreenIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> MultiWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> MultiWidget;
    
public:
    USBMultiLoadingScreenScene();
};


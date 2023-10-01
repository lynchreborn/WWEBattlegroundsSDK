#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWEBoxSpawnerEditor.generated.h"

class AWWEEntranceBox;
class UPanelWidget;
class UWWEBoxItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBoxSpawnerEditor : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LoadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWEEntranceBox> BoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEBoxItemParameters* BoxItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEEntranceBox* BoxActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLoadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EditorScaleBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeVisible;
    
public:
    UWWEBoxSpawnerEditor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadingAnimationBlueprintEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBoxItemParameters(const FString& BoxItemID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBoxLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWWEEntranceBox* GetBoxActor() const;
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};


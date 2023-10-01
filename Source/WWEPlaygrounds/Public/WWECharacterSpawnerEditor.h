#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWECharacterSpawnerEditor.generated.h"

class APGCharacter;
class AWWECharacterCharEditor;
class UPanelWidget;
class UWWECharacterParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterSpawnerEditor : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LoadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APGCharacter* CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCharEditor* CharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLoadingPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeVisible;
    
public:
    UWWECharacterSpawnerEditor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadingAnimationBlueprintEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterParameters(UWWECharacterParameters* Val, TArray<FString> CharacterItems, APGCharacter* CharClass, float AnimStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWWECharacterCharEditor* GetCharacterActor() const;
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};


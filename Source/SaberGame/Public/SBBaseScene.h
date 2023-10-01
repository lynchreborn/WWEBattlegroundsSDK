#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnCloseFinishDelegateDelegate.h"
#include "OnLoadFinishDelegateDelegate.h"
#include "OnOpenFinishDelegateDelegate.h"
#include "SBBaseScene.generated.h"

class USBBaseTransition;
class USBGameInstance;

UCLASS(Blueprintable)
class SABERGAME_API USBBaseScene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBGameInstance* MyGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPreloadable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFallbackScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFinishDelegate OnLoadFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenFinishDelegate OnOpenFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseFinishDelegate OnCloseFinishDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementAnimationFinshedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Opening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpened;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBBaseTransition* OpenPendingTransition;
    
public:
    USBBaseScene();
    UFUNCTION(BlueprintCallable)
    void Unload();
    
    UFUNCTION(BlueprintCallable)
    void RestoreFocus();
    
    UFUNCTION(BlueprintCallable)
    void ResetLoadReferences();
    
    UFUNCTION(BlueprintCallable)
    void Open(USBBaseTransition* Transition);
    
    UFUNCTION(BlueprintCallable)
    void OnRemovedFromScenesStack();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLost();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnAddedToScenesStack();
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable)
    void Init(USBGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void Close(USBBaseTransition* Transition);
    
};


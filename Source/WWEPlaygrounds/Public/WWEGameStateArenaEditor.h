#pragma once
#include "CoreMinimal.h"
#include "PGGameStateArenaEditor.h"
#include "WWEGameStateArenaEditor.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateArenaEditor : public APGGameStateArenaEditor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasBeenInvited;
    
public:
    AWWEGameStateArenaEditor();
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuWithDelay();
    
    UFUNCTION(BlueprintCallable)
    void ExitGameToMenu();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEAnimViewerCategory.h"
#include "WWEAnimViewerCharacter.h"
#include "WWEGameModeGameplay.h"
#include "WWEGameModeAnimViewer.generated.h"

class APawn;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeAnimViewer : public AWWEGameModeGameplay {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEAnimViewerCharacter> AnimViewerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FWWEAnimViewerCategory> AnimActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabledAllAnimations;
    
public:
    AWWEGameModeAnimViewer();
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterLoaded(int32 CharacterIndex);
    
};


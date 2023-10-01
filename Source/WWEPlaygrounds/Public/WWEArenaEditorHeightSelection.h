#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEArenaEditorHeightSelection.generated.h"

class UWWEArenaEditorHeightButton;
class UWWEArenaEditorScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaEditorHeightSelection : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorHeightButton* TopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorHeightButton* MidButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorHeightButton* LowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorHeightButton* FocusButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FocusIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxFocusIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAnalogMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentAnalogMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorScreen* ArenaEditor;
    
public:
    UWWEArenaEditorHeightSelection();
};


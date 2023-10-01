#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "WWELobbyUnassignedPlayersBox.generated.h"

class UHorizontalBox;
class UWWELobbyControllerIcon;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyUnassignedPlayersBox : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* IconsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWELobbyControllerIcon> ControllerIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin IconsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UWWELobbyControllerIcon*> PlayerControllerIconsMap;
    
public:
    UWWELobbyUnassignedPlayersBox();
};


#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbyPowerUpBox.generated.h"

class UHorizontalBox;
class UWWELobbyStandaloneButton;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyPowerUpBox : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyStandaloneButton* Tier1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyStandaloneButton* Tier2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyStandaloneButton* Tier3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PreviousIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NextIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* EditPowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWELobbyStandaloneButton*> TierButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedTierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EditPowerUps_Idle;
    
public:
    UWWELobbyPowerUpBox();
};


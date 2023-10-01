#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "SBRootUserWidget.h"
#include "WWEIngameMenuWidget.generated.h"

class UCanvasPanel;
class USBStylizedText;
class UWWEIngameMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEIngameMenuWidget : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonContinueOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonOptionsOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonDailyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonDailyChallengesOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonExitOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEIngameMenuButton* ButtonControlsOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MatchModePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* MatchModeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBMatchMode, FText> MatchModeDescriptions;
    
    UWWEIngameMenuWidget();
};


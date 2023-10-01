#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWECampaignTreeContentWidget.generated.h"

class UWWECampaignNodeWidget;
class UWWECampaignTreeWidget;
class UWWETreeNodesConnector;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECampaignTreeContentWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECampaignTreeWidget* CampaignTreeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWECampaignNodeWidget*> NodeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWETreeNodesConnector*> NodeConnectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECampaignNodeWidget* CurrentNodeWidget;
    
    UWWECampaignTreeContentWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "WWENextNodeWidget.generated.h"

class UWWECampaignNodeWidget;
class UWWETreeNodesConnector;

USTRUCT(BlueprintType)
struct FWWENextNodeWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECampaignNodeWidget* NextNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextNodeConnectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWETreeNodesConnector* NodeConnector;
    
    WWEPLAYGROUNDS_API FWWENextNodeWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SBLegalData.h"
#include "SBPlayerConfigData.h"
#include "SBSaveGame.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDirty;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBLegalData LegalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBPlayerConfigData PlayerConfigData;
    
public:
    USBSaveGame();
};


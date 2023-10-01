#pragma once
#include "CoreMinimal.h"
#include "PGArenaParameters.h"
#include "EItemBloodline.h"
#include "WWEArenaOutfitEntry.h"
#include "WWEArenaParameters.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaParameters : public UPGArenaParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AmbientSoundConfig[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIArenaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCustomArenaConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaOutfitEntry> CustomArenaItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> Bloodlines;
    
public:
    UWWEArenaParameters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EItemBloodline> GetBloodlines() const;
    
};


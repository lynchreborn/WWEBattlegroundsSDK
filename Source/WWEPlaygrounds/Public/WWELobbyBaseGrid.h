#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBPoolGrid.h"
#include "WWELobbyBaseGrid.generated.h"

class UWWEGridArrow;
class UWWELobbyGridSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyBaseGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWELobbyGridSlot* LastSelectedSlot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
    UWWELobbyBaseGrid();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateArrows(FIntPoint Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitArrowReferences(UWWEGridArrow* _UpArrow, UWWEGridArrow* _DownArrow);
    
};


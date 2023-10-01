#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEPlayerRewardsPointsRow.generated.h"

class UImage;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsPointsRow : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* FirstColumnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* SecondColumnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FirstColumnInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SecondColumnInvalid;
    
public:
    UWWEPlayerRewardsPointsRow();
    UFUNCTION(BlueprintCallable)
    void SetValidColumns(bool FirstValue, bool SecondValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRowCategory(FText CategoryText);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnValues(int32 FirstValue, int32 SecondValue);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnState(bool IsValid, USBStylizedText* ColumnPoints, UImage* ColumnInvalid);
    
};


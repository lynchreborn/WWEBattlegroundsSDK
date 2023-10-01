#pragma once
#include "CoreMinimal.h"
#include "ECurrentSubsystem.generated.h"

UENUM(BlueprintType)
enum class ECurrentSubsystem : uint8 {
    Discovery,
    SingleSignOn,
    SsoHeartBeat,
    SsoRefresh,
    SsoLegalDocuments,
    SsoAccountLinking,
    Telemetry,
    Entitlements,
    Codes,
    LoggedIn,
    AccountLinked,
    ErrorStatus,
    Licensing,
};


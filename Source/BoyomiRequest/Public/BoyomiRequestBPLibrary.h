// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "BoyomiRequestBPLibrary.generated.h"

UCLASS()
class UBoyomiRequestBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "BoyomiRequest", Keywords = "BoyomiRequest send http"), Category = "BoyomiRequest")
	static void BoyomiRequest(const FString& Text, int32 Voice, int32 Volume, int32 Speed, int32 Tone);
};


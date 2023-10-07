// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyomiRequestBPLibrary.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"

UBoyomiRequestBPLibrary::UBoyomiRequestBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}

void UBoyomiRequestBPLibrary::BoyomiRequest(const FString& Text, int32 Voice, int32 Volume, int32 Speed, int32 Tone)
{
    FHttpModule* Http = &FHttpModule::Get();

    if (!Http) return;

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    Request->SetVerb("GET");

    FString Url = FString::Printf(TEXT("http://localhost:50080/Talk?text=%s&voice=%d&volume=%d&speed=%d&tone=%d"), *FGenericPlatformHttp::UrlEncode(Text), Voice, Volume, Speed, Tone);
    Request->SetURL(Url);

    Request->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            
        });

    Request->ProcessRequest();
}


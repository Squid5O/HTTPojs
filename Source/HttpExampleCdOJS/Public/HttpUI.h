// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HttpUI.generated.h"

/**
 * 
 */
UCLASS()
class HTTPEXAMPLECDOJS_API UHttpUI : public UUserWidget
{
	GENERATED_BODY()

public:
	FString url = "https://apis.data.go.kr/5050000/cafeInfoService/getCafeInfo?serviceKey=5NKfcysr9t9B0YVtZlBnv8we3HmS6jA5JL3SwBD5%2BdJTbdXS1T56NaIqkdAFeLWn6ERWWYJCRJcm1BmpCOhW4w%3D%3D&pageNo=1&numOfRows=10";

	FString serviceKey = ""

	FString page = ""
};

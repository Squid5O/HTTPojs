// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HttpGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HTTPEXAMPLECDOJS_API AHttpGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

//private:
//	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess))
//	TSubclassOf<class HttpUI> 

public:
	//태어날때 WBP_HttpUI를 생성해서 화면에 보이게 하고 싶다.

	AHttpGameModeBase();
	virtual void BeginPlay() override;

};
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
	//�¾�� WBP_HttpUI�� �����ؼ� ȭ�鿡 ���̰� �ϰ� �ʹ�.

	AHttpGameModeBase();
	virtual void BeginPlay() override;

};
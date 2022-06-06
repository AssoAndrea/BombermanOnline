// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "DestructibleWall.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMANONLINE_API ADestructibleWall : public AStaticMeshActor
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void DestroyWall();
	
};

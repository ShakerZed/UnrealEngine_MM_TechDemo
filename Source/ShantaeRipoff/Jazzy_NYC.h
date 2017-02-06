// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Jazzy_NYC.generated.h"

UCLASS()
class SHANTAERIPOFF_API AJazzy_NYC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJazzy_NYC();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};

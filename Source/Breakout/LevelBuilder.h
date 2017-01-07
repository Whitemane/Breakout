// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LevelBuilder.generated.h"

USTRUCT()
struct FLevelRow
{
	GENERATED_BODY()

public:

	TArray<int32> RowBricks;
};

UCLASS()
class BREAKOUT_API ALevelBuilder : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	ALevelBuilder();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	void SpawnLevel(int32 LevelIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Levels")
	int32 StartLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Levels", meta = (MultiLine = "true"))
	TArray<FString> Levels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bricks")
	TArray<UClass*> BrickActors;

};

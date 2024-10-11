// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstScript.h"

// Sets default values
AFirstScript::AFirstScript()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstScript::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstScript::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFirstScript::SpawnActor()
{
	UE_LOG(LogTemp, Warning, TEXT("SpawnActor called"));
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	GetWorld()->SpawnActor<AActor>(ActorBPToSpawn, GetActorTransform(), SpawnParams);
}


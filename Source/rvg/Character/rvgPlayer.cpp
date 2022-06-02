// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/rvgPlayer.h"

// Sets default values
ArvgPlayer::ArvgPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ArvgPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ArvgPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ArvgPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("vmove", this, &ArvgPlayer::vmove);
	PlayerInputComponent->BindAxis("hmove", this, &ArvgPlayer::hmove);
}

void ArvgPlayer::vmove(float val)
{
	AddMovementInput(FVector(1.f,1.f,0.f), val);
}
void ArvgPlayer::hmove(float val)
{
	AddMovementInput(FVector(1.f,-1.f,0.f),val);
}




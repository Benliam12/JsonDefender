// Fill out your copyright notice in the Description page of Project Settings.

#include "Han.h"

// Sets default values
AHan::AHan() {
  // Set this character to call Tick() every frame.  You can turn this off to
  // improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHan::BeginPlay() {
  Super::BeginPlay();
  this->Life = 100;
  this->Money = 200;

}

// Called every frame
void AHan::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

// Called to bind functionality to input
void AHan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
  Super::SetupPlayerInputComponent(PlayerInputComponent);
}

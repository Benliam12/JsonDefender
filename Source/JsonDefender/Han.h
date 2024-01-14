// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Han.generated.h"

UCLASS()
class JSONDEFENDER_API AHan : public ACharacter {
  GENERATED_BODY()
 public:
  // Sets default values for this character's properties
  AHan();

 protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

 private:
  int32_t Life = 0;
  const uint32_t CharacterSpeed = 10;
  uint32_t Money = 0;
  uint32_t NbrPants = 0;

 public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Called to bind functionality to input
  virtual void SetupPlayerInputComponent(
      class UInputComponent* PlayerInputComponent) override;
};

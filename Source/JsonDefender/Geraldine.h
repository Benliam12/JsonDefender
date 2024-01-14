// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Geraldine.generated.h"

UCLASS()
class JSONDEFENDER_API AGeraldine : public AActor {
  GENERATED_BODY()
 public:
  // Sets default values for this actor's properties
  AGeraldine();

 protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;
  uint32_t PhysicalResistance = 0;
  uint32_t MagicalResistance = 0;

 private:
  int32_t Life = 0;
  uint32_t CharacterSpeed = 10;

 public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;
};

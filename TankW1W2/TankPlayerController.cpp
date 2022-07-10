// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATankPlayerController::ATankPlayerController()
{
	UE_LOG(LogTemp, Warning, TEXT("Tank Player Controller created")); 
}


ABaseTank* ATankPlayerController::GetTank() const
{
	return Cast<ABaseTank>(GetPawn());
}

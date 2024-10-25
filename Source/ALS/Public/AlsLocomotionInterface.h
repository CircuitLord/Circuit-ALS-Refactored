// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FALSVRPlayerData.h"
#include "GameplayTagContainer.h"
#include "State/AlsLocomotionState.h"
#include "UObject/Interface.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "State/AlsRagdollingState.h"
#include "State/AlsViewState.h"

#include "AlsLocomotionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAlsLocomotionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ALS_API IAlsLocomotionInterface
{
	GENERATED_BODY()

public:

	// some functions have _ALS post-fixes so their name doesn't conflict with base unreal functions

	virtual UCapsuleComponent* GetCapsuleComponent_ALS() const = 0;

	virtual AActor* GetActor() = 0;

	virtual const FGameplayTag& GetViewMode() const = 0;
	virtual const FGameplayTag& GetLocomotionMode() const = 0;
	virtual const FGameplayTag& GetRotationMode() const = 0;
	virtual const FGameplayTag& GetStance() const = 0;
	virtual const FGameplayTag& GetGait() const = 0;
	virtual const FGameplayTag& GetOverlayMode() const = 0;
	
	virtual const FAlsLocomotionState& GetLocomotionState() const = 0;
	

	virtual const FQuat GetBaseRotationOffset_ALS() const = 0;
	
	virtual const FGameplayTag& GetLocomotionAction() const = 0;
	virtual const FBasedMovementInfo& GetBasedMovement_ALS() const = 0;

	
	virtual const FAlsViewState& GetViewState() const = 0;

	/*LocomotionState.MaxAcceleration = Movement->GetMaxAcceleration();
	LocomotionState.MaxBrakingDeceleration = Movement->GetMaxBrakingDeceleration();
	LocomotionState.WalkableFloorZ = Movement->GetWalkableFloorZ();*/

	virtual const float GetMaxAcceleration() const = 0;
	virtual const float GetMaxBrakingDeceleration() const = 0;
	virtual const float GetWalkableFloorZ() const = 0;

	virtual const FAlsRagdollingState& GetRagdollingState() const = 0;

	virtual const FALSVRPlayerData& GetVRPlayerData() const = 0;
	
};

#pragma once

#include "FALSVRPlayerData.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FALSVRBoneTransformData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector Position;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator Rotation;
};

USTRUCT(BlueprintType)
struct ALS_API FALSVRPlayerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FALSVRBoneTransformData LeftHand = FALSVRBoneTransformData();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FALSVRBoneTransformData RightHand = FALSVRBoneTransformData();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FALSVRBoneTransformData Head = FALSVRBoneTransformData();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float PlayerHeadDist = 0.f;
	
};



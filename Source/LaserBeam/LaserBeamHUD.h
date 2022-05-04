// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LaserBeamHUD.generated.h"

UCLASS()
class ALaserBeamHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALaserBeamHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LifemancerGameMode.h"
#include "LifemancerCharacter.h"

ALifemancerGameMode::ALifemancerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ALifemancerCharacter::StaticClass();	
}

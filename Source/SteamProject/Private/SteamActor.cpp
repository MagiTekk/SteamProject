// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamProject.h"
#include "SteamActor.h"


// Sets default values
ASteamActor::ASteamActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASteamActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASteamActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


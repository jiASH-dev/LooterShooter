// Fill out your copyright notice in the Description page of Project Settings.


#include "Gunner.h"
#include "Components/ArrowComponent.h"

// Sets default values
AGunner::AGunner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//USceneComponent* NewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("NewRootComponent"));
	//SetRootComponent(NewRootComponent);

	//USkeletalMeshComponent* SkeletalMeshComponent = GetMesh();
	//UArrowComponent* ArrowComponentt = GetArrowComponent();

	//SkeletalMeshComponent->DetachFromComponent(FDetachmentTransformRules(EDetachmentRule::KeepRelative, false));
	//SkeletalMeshComponent->AttachToComponent(NewRootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));

	//ArrowComponentt->DetachFromComponent(FDetachmentTransformRules(EDetachmentRule::KeepRelative, false));
	//ArrowComponentt->AttachToComponent(NewRootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
}

// Called when the game starts or when spawned
void AGunner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGunner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGunner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



#include "MyCharacter.h"
#include "StateMachine/StateProcessor.h"


AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	My_StateProcessor = NewObject<UStateProcessor>(this);
}

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	My_StateProcessor->Update();
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	//Bind Actions
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this,&AMyCharacter::Jump);

	//Bind Axis
	//Y
	/*
	PlayerInputComponent->BindAxis("Foreward", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));
	PlayerInputComponent->BindAxis("Foreward", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));

	PlayerInputComponent->BindAxis("BackWard", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));
	PlayerInputComponent->BindAxis("BackWard", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));

	//X
	PlayerInputComponent->BindAxis("Right", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));
	PlayerInputComponent->BindAxis("Right", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));

	PlayerInputComponent->BindAxis("Left", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));
	PlayerInputComponent->BindAxis("Left", IE_Pressed, this, &AMyCharacter::Move(PlayerInputComponent));
	*/
}




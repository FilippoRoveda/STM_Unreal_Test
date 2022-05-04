#include "StateProcessor.h"


#include "UCrouchState.h"
#include "UDoubleJumpState.h"
#include "UIdleState.h"
#include "UMovingState.h"
#include "UJumpState.h"


UStateProcessor::UStateProcessor()
{
}

UStateProcessor::UStateProcessor(AMyCharacter* NewPg)
{
	MyPG=NewPg;
}

void UStateProcessor::BeginPlay()
{
	Super::BeginPlay();
	Idle = NewObject<UIdleState>();
	Run = NewObject<UMovingState>();
	Jump = NewObject<UJumpState>();
	Crouch = NewObject<UCrouchState>();
	DoubleJump = NewObject<UDoubleJumpState>();
	
	CurrentState = Idle;
	PrimaryComponentTick.bCanEverTick = true;
	CurrentState->Start(this);
}


void UStateProcessor::Update()
{
	NewState = CurrentState->Update(this);
	ChangeState(NewState);
}


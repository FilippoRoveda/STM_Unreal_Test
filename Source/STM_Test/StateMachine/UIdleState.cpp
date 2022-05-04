#include "UIdleState.h"

#include "StateProcessor.h"
#include "STM_Test/MyCharacter.h"


UIdleState::UIdleState()
{
}

void UIdleState::Start(UStateProcessor*)
{
}

UState* UIdleState::Update(UStateProcessor* thisProcessor)
{
	//Test Event
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("In Idle"));
	return thisProcessor->Run;
}

void UIdleState::End(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Idle);
}


void UIdleState::Move(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Run);
}

void UIdleState::Jump(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Jump);
}

void UIdleState::Crouch(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Crouch);
}


#include "UCrouchState.h"
#include "StateProcessor.h"

UCrouchState::UCrouchState()
{
}

void UCrouchState::Start(UStateProcessor* StateProcessor)
{
}

UState* UCrouchState::Update(UStateProcessor* StateProcessor)
{
	return Super::Update(StateProcessor);
}

void UCrouchState::End(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Idle);
}

void UCrouchState::Move(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Run);
}

void UCrouchState::Jump(UStateProcessor* StateProcessor)
{
	StateProcessor->ChangeState(StateProcessor->Jump);
}

void UCrouchState::Crouch(UStateProcessor* StateProcessor)
{
	
}

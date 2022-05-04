#include "UDoubleJumpState.h"
#include "StateProcessor.h"

UDoubleJumpState::UDoubleJumpState()
{
}

void UDoubleJumpState::Start(UStateProcessor* StateProcessor)
{
	
}

UState* UDoubleJumpState::Update(UStateProcessor* StateProcessor)
{
	return Super::Update(StateProcessor);
}

void UDoubleJumpState::End(UStateProcessor* StateProcessor)
{
}

void UDoubleJumpState::Move(UStateProcessor* StateProcessor)
{
	//If is WASD Pressed and Player is Landed
	StateProcessor->ChangeState(StateProcessor->Run);
	//Otherwise still moving a bit in air
}

void UDoubleJumpState::Jump(UStateProcessor* StateProcessor)
{
	//Cannot jump again
}

void UDoubleJumpState::Crouch(UStateProcessor* StateProcessor)
{
	//If is SHIFT Pressed and Player is Landed
	StateProcessor->ChangeState(StateProcessor->Crouch);
	//Otherwise do nothing
}

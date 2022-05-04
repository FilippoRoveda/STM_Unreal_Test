#include "UJumpState.h"

#include "StateProcessor.h"


UJumpState::UJumpState()
{
}

 void UJumpState::Start(UStateProcessor* StateProcessor)
{
	
}

 UState* UJumpState::Update(UStateProcessor* StateProcessor)
{
 GEngine->bEnableOnScreenDebugMessages = true;
 GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("In Jump"));
 return StateProcessor->Idle;
}

 void UJumpState::End(UStateProcessor* StateProcessor)
{
 
}




void UJumpState::Move(UStateProcessor* StateProcessor)
{
 //If is WASD Pressed and Player is Landed
 StateProcessor->ChangeState(StateProcessor->Run);
 //Otherwise still moving a bit in air
}

void UJumpState::Jump(UStateProcessor* StateProcessor)
{
 StateProcessor->ChangeState(StateProcessor->DoubleJump);
}

void UJumpState::Crouch(UStateProcessor* StateProcessor)
{
 //If is SHIFT Pressed and Player is Landed
 StateProcessor->ChangeState(StateProcessor->Crouch);
 //Otherwise do nothing
}

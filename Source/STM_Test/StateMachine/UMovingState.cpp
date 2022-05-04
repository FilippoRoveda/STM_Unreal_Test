#include "UMovingState.h"

#include "StateProcessor.h"


UMovingState::UMovingState()
{
}

void UMovingState::Start(UStateProcessor*)
{
}

 UState* UMovingState::Update(UStateProcessor* thisProcessor)
{
 GEngine->bEnableOnScreenDebugMessages = true;
 GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("In Move"));
 return thisProcessor->Jump;
}

 void UMovingState::End(UStateProcessor* StateProcessor)
{
 StateProcessor->ChangeState(StateProcessor->Idle);
}




void UMovingState::Move(UStateProcessor* StateProcessor)
{

}

void UMovingState::Jump(UStateProcessor* StateProcessor)
{
 StateProcessor->ChangeState(StateProcessor->Jump);
}

void UMovingState::Crouch(UStateProcessor* StateProcessor)
{
 StateProcessor->ChangeState(StateProcessor->Crouch);
}

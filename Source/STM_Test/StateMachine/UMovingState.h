#pragma once
#include "UState.h"
#include "UMovingState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UMovingState : public UState
{
	GENERATED_BODY()
	friend class UStateProcessor;
public:
	UMovingState();
	
	virtual void Start(UStateProcessor*) override;
	
	virtual UState* Update(UStateProcessor*) override;
	
	virtual void End(UStateProcessor*) override;


	//All base Character funtcions
	virtual void Move(UStateProcessor*) override;
	virtual void Jump(UStateProcessor*) override;
	virtual void Crouch(UStateProcessor*) override;
};



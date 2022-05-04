#pragma once
#include "UState.h"
#include "UIdleState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIdleState : public UState
{
	GENERATED_BODY()
	friend class UStateProcessor;
public:
	UIdleState();
	
	virtual void Start(UStateProcessor*) override;
	
	virtual UState* Update(UStateProcessor*) override;
	
	virtual void End(UStateProcessor*) override;

	//All base Character funtcions
	
	virtual void Move(UStateProcessor*) override;
	virtual void Jump(UStateProcessor*) override;
	virtual void Crouch(UStateProcessor*) override;
	
};
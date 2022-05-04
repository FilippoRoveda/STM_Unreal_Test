#pragma once
#include "UState.h"
#include "UJumpState.generated.h"


UCLASS(meta=(BlueprintSpawnableComponent))

class UJumpState : public UState
{
	GENERATED_BODY()
    	friend class UStateProcessor;
    public:
    	UJumpState();
    	
    	virtual void Start(UStateProcessor*) override;
    	
    	virtual UState* Update(UStateProcessor*) override;
    	
    	virtual void End(UStateProcessor*) override;

	//All base Character funtcions
	
	virtual void Move(UStateProcessor*) override;
	virtual void Jump(UStateProcessor*) override;
	virtual void Crouch(UStateProcessor*) override;
};



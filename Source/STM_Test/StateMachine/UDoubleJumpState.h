#pragma once

#include "CoreMinimal.h"
#include "UState.h"
#include "UObject/Object.h"
#include "UDoubleJumpState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDoubleJumpState : public UState
{
	GENERATED_BODY()
	friend class UStateProcessor;
	
public:
	UDoubleJumpState();

	virtual void Start(UStateProcessor*) override;
	
	virtual UState* Update(UStateProcessor*) override;
	
	virtual void End(UStateProcessor*) override;

	//All base Character funtcions
	
	virtual void Move(UStateProcessor*) override;
	virtual void Jump(UStateProcessor*) override;
	virtual void Crouch(UStateProcessor*) override;
};

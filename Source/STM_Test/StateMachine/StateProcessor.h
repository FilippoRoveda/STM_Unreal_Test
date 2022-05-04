#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"


#include "UState.h"


#include "StateProcessor.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STM_TEST_API UStateProcessor : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	UState* NewState = nullptr;

	UPROPERTY(EditAnywhere)
	AMyCharacter* MyPG;


public:
	explicit UStateProcessor();
	explicit UStateProcessor(AMyCharacter* NewPG);

	FORCEINLINE void ChangeState(UState* LocalNewState)
	{
		CurrentState->End(this);
		CurrentState = NewState;
		NewState->Start(this);
	}

protected:
	virtual void BeginPlay() override;

public:
	virtual void Update();

public:
	UPROPERTY(VisibleAnywhere)
	UState* CurrentState;
	
	UPROPERTY(EditAnywhere)
	UState* Idle;
	
	UPROPERTY(EditAnywhere)
	UState* Run;
	
	UPROPERTY(EditAnywhere)
	UState* Jump;

	UPROPERTY(EditAnywhere)
	UState* Crouch;

	UPROPERTY(EditAnywhere)
	UState* DoubleJump;
};

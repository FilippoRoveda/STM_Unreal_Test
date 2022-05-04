#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "StateMachine/StateProcessor.h"

#include "MyCharacter.generated.h"

UCLASS()
class STM_TEST_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY()
	UStateProcessor* My_StateProcessor;
public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*
	void Move(UInputComponent* Input);
	void Jump(UInputComponent* Input);
	void Crouch(UInputComponent* Input);
	*/
};

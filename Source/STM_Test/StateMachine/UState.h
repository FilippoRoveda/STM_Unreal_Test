#pragma once


#include "UState.generated.h"
class UStateProcessor;
class AMyCharacter;

UCLASS(Blueprintable,BlueprintType)
class UState : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY()
	AMyCharacter* MyPgRef;
	
	public:
	friend class UStateProcessor;

	
	 FORCEINLINE virtual void Start(UStateProcessor*) {};
	
	 FORCEINLINE virtual UState* Update(UStateProcessor*)
	 {
		 return nullptr;
	 };
	
	 FORCEINLINE virtual void End(UStateProcessor*) {};


	//All base Character funtcions
	FORCEINLINE virtual void Move( UStateProcessor* ) {};
	FORCEINLINE virtual void Jump( UStateProcessor* ) {};
	FORCEINLINE virtual void Crouch( UStateProcessor* ) {};
};



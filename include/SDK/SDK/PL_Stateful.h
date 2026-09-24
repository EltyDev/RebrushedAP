
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/PL_Stateful.PL_FsmTransition
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPL_FsmTransition
{ 
	char                                               EventID;                                                    // 0x0000   (0x0001)  
	char                                               StateFrom;                                                  // 0x0001   (0x0001)  
	char                                               StateTo;                                                    // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	SDK_UNDEFINED(16,628) /* FDelegateProperty */      __um(Condition);                                            // 0x0004   (0x0010)  
};

/// Class /Script/PL_Stateful.PL_FsmState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UPL_FsmState : public UObject
{ 
public:
	TArray<FPL_FsmTransition>                          Transitions;                                                // 0x0028   (0x0010)  
	TWeakObjectPtr<class UPL_FiniteStateMachine*>      FiniteStateMachine;                                         // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_Stateful.PL_FsmState.Update
	// void Update(class UObject* Context, float DeltaTime);                                                                    // [0xc66f70] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Stateful.PL_FsmState.RemoveTransition
	// class UPL_FsmState* RemoveTransition(char EventID, char ToState);                                                        // [0xc66e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Stateful.PL_FsmState.GetStateID
	// char GetStateID();                                                                                                       // [0xc66dd0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Stateful.PL_FsmState.Exit
	// void Exit(class UObject* Context);                                                                                       // [0xbfe090] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Stateful.PL_FsmState.Enter
	// void Enter(class UObject* Context);                                                                                      // [0xc66d10] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Stateful.PL_FsmState.AddTransition
	// class UPL_FsmState* AddTransition(char EventID, char ToState, FDelegateProperty& ConditionFunctor);                      // [0xc66bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Stateful.PL_FiniteStateMachine
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPL_FiniteStateMachine : public UObject
{ 
public:
	SDK_UNDEFINED(16,629) /* FMulticastInlineDelegate */ __um(OnStateChanged);                                     // 0x0028   (0x0010)  
	TMap<char, class UPL_FsmState*>                    ValidStates;                                                // 0x0038   (0x0050)  
	class UPL_FsmState*                                ActiveState;                                                // 0x0088   (0x0008)  
	TWeakObjectPtr<class UObject*>                     FsmContext;                                                 // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0098   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_Stateful.PL_FiniteStateMachine.SetFsmContext
	// void SetFsmContext(class UObject* NewContext);                                                                           // [0xc66ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Stateful.PL_FiniteStateMachine.OnStateChanged__DelegateSignature
	// void OnStateChanged__DelegateSignature(char NewStateID);                                                                 // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Stateful.PL_FiniteStateMachine.GetFsmContext
	// class UObject* GetFsmContext();                                                                                          // [0xc66da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(FPL_FsmTransition) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UPL_FsmState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UPL_FiniteStateMachine) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(offsetof(UPL_FsmState, Transitions) == 0x0028);
static_assert(offsetof(UPL_FsmState, FiniteStateMachine) == 0x0038);
static_assert(offsetof(UPL_FiniteStateMachine, ValidStates) == 0x0038);
static_assert(offsetof(UPL_FiniteStateMachine, ActiveState) == 0x0088);
static_assert(offsetof(UPL_FiniteStateMachine, FsmContext) == 0x0090);

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"

class Class_0_16E4307DCC419505_379_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB;
class Class_0_16E4307DCC419505_97;
class Class_0_16E4307DCC419505_98;
class Class_1_38A5D85D4AE9F24D;
class Class_1_FD7BA687A1A99180;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_0B9A60470D650902_CLEAR_OFFSET UNITYSDK_OFFSET(0xE47B710)
#define CLASS_1_0B9A60470D650902_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0xE47BBF0)
#define CLASS_1_0B9A60470D650902_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0xE47BC80)
#define CLASS_1_0B9A60470D650902_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xE47BCC0)
#define CLASS_1_0B9A60470D650902_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xE47BB60)
#define CLASS_1_0B9A60470D650902_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xE47BBC0)
#define CLASS_1_0B9A60470D650902_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE47BCD0)
#define CLASS_1_0B9A60470D650902_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xE47BB80)
#define CLASS_1_0B9A60470D650902_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xE47BBA0)
#define CLASS_1_0B9A60470D650902_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0xE47BBE0)
#define CLASS_1_0B9A60470D650902_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xE47BB40)
#define CLASS_1_0B9A60470D650902_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xE47BAB0)
#define CLASS_1_0B9A60470D650902_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0xE47BA80)
#define CLASS_1_0B9A60470D650902_METHOD_1_1D148E040584EEBC_OFFSET UNITYSDK_OFFSET(0xE47B5F0)
#define CLASS_1_0B9A60470D650902_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE47B9E0)
#define CLASS_1_0B9A60470D650902_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xE47BAD0)
#define CLASS_1_0B9A60470D650902_METHOD_1_892D0C7F01734DAA_OFFSET UNITYSDK_OFFSET(0xE47B510)
#define CLASS_1_0B9A60470D650902_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xE47BAA0)
#define CLASS_1_0B9A60470D650902_METHOD_1_F7A1793118115C9E_OFFSET UNITYSDK_OFFSET(0xE47B350)
#define CLASS_1_0B9A60470D650902_METHOD_1_FAC3436B3B22B430_OFFSET UNITYSDK_OFFSET(0xE47B910)
#define CLASS_1_0B9A60470D650902_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xE47BCE0)
#define CLASS_1_0B9A60470D650902_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xE47BC30)
#define CLASS_1_0B9A60470D650902_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xE47BB70)
#define CLASS_1_0B9A60470D650902_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xE47BBD0)
#define CLASS_1_0B9A60470D650902_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xE47BB90)
#define CLASS_1_0B9A60470D650902_SET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xE47BBB0)
#define CLASS_1_0B9A60470D650902_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xE47BB50)
#define CLASS_1_0B9A60470D650902_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xE47BAC0)
#define CLASS_1_0B9A60470D650902_SET_WORLDREF_OFFSET UNITYSDK_OFFSET(0xE47BA90)
#define CLASS_1_0B9A60470D650902__CCTOR_OFFSET UNITYSDK_OFFSET(0xE47C0A0)
#define CLASS_1_0B9A60470D650902__CTOR_OFFSET UNITYSDK_OFFSET(0xE47BFA0)

inline static constexpr unsigned int Class_1_0B9A60470D650902_TypeDefinitionIndex = 62949;

class Class_1_0B9A60470D650902 : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarkerWithObject* StaticGet_Field_1_17()
	{
		return (::Unity::Profiling::ProfilerMarkerWithObject*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B9A60470D650902_TypeDefinitionIndex)->GetStaticField(0x10F50);
	}
	::RPG::GameCore::GameWorld* _WorldRef_k__BackingField; // 0x10
	::Entitas::IEntity* Field_1_8; // 0x18
	::Il2CppArray<::System::String*>* Field_1_10; // 0x20
	::Struct_2_2B16FFFF87B43037 Field_1_13; // 0x28
	::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x38
	::Il2CppArray<::System::String*>* Field_1_11; // 0x40
	::UnityEngine::Animator* Field_1_12; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>* _OnAnimatorMoveCallbackMap_k__BackingField; // 0x50
	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* _OnAnimationStateChange_k__BackingField; // 0x58
	::Class_1_FD7BA687A1A99180* Field_1_14; // 0x60
	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* _DynamicAnimEventDataList_k__BackingField; // 0x68
	::RPG::GameCore::GameEntity* Field_1_9; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_97*>* Field_1_15; // 0x78
	::System::Int32 _ReEntryCounter_k__BackingField; // 0x80
	::System::Boolean _AnimatorNotInit_k__BackingField; // 0x84
	::System::Boolean _NeedResetEvent_k__BackingField; // 0x85
	::System::UInt32 Field_1_16; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F7A1793118115C9E(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_98* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_98*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_F7A1793118115C9E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_892D0C7F01734DAA(::Class_0_16E4307DCC419505_97* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_97*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_892D0C7F01734DAA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_97* Method_1_1D148E040584EEBC(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_97*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_1D148E040584EEBC_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FAC3436B3B22B430(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_FAC3436B3B22B430_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_WORLDREF_OFFSET))(this);
	}

	::System::Void set_WorldRef(::RPG::GameCore::GameWorld* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_WORLDREF_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::Void set_TaskContext(::RPG::GameCore::TaskContext* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_TASKCONTEXT_OFFSET))(this, value);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_REENTRYCOUNTER_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_ANIMATORNOTINIT_OFFSET))(this, value);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_NEEDRESETEVENT_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void set_OnAnimationStateChange(::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_ONANIMATIONSTATECHANGE_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_379_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GETUNITYANIMATOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_0B9A60470D650902_ONANIMATORMOVE_OFFSET))(this, a1);
	}
};

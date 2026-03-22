#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A2B5EC56C7F63653;
class Class_1_BDA8DEEF59BE3031;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10F15030)
#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F15BF0)
#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F15C50)
#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10F15C00)
#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F15010)
#define CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0F260)

inline static constexpr unsigned int Class_1_A2B5EC56C7F63653__RollDice_CollectDiceForSelect_d__24_TypeDefinitionIndex = 47780;

class Class_1_A2B5EC56C7F63653__RollDice_CollectDiceForSelect_d__24 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _originRotations_5__4; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _originPositions_5__3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _targetRotations_5__6; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _targetPositions_5__5; // 0x30
	::Class_1_A2B5EC56C7F63653* __4__this; // 0x38
	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* _diceToCollect_5__2; // 0x40
	::System::Single _ratio_5__7; // 0x48
	::System::Int32 __1__state; // 0x4C
	::System::Boolean forceRefresh; // 0x50

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__ROLLDICE_COLLECTDICEFORSELECT_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};

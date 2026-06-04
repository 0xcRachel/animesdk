#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED.h"
#include "unitysdk/System/Object.h"

class Class_1_3E154AB13413DD88;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_3E154AB13413DD88__FILL_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x133FB460)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x133FB840)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x133FB770)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x133FB8D0)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x133FB7E0)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x133FB790)
#define CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133FB450)
#define CLASS_1_3E154AB13413DD88__FILL_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x133F8F50)

inline static constexpr unsigned int Class_1_3E154AB13413DD88__Fill_d__6_TypeDefinitionIndex = 64803;

class Class_1_3E154AB13413DD88__Fill_d__6 : public ::System::Object
{
public:
	::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED __2__current; // 0x10
	::Class_1_3E154AB13413DD88* __4__this; // 0x38
	::System::Int32 _i_5__3; // 0x40
	::System::Int32 __1__state; // 0x44
	::System::Single _timePass_5__2; // 0x48
	::System::Single startTimePass; // 0x4C
	::System::Single __3__startTimePass; // 0x50
	::System::Int32 __l__initialThreadId; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_MOVENEXT_OFFSET))(this);
	}

	::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED System_Collections_Generic_IEnumerator_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__get_Current()
	{
		return ((::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED>* System_Collections_Generic_IEnumerable_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_3E154AB13413DD88_Struct_2_E821FD00D05A2DED>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E154AB13413DD88__FILL_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};

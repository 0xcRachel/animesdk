#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E2141ECA8AAD7D3;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD87AAB0)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD87AD80)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD87AD10)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD87AE10)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD87AD70)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD87AD20)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD87AAA0)
#define CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0xD87A2A0)

inline static constexpr unsigned int Class_1_0E2141ECA8AAD7D3__SelectTarget_d__2_TypeDefinitionIndex = 61091;

class Class_1_0E2141ECA8AAD7D3__SelectTarget_d__2 : public ::System::Object
{
public:
	::Class_1_0E2141ECA8AAD7D3* __4__this; // 0x10
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* config; // 0x18
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* __3__config; // 0x20
	::Class_1_C4FD36003027AC99* __3__context; // 0x28
	::Class_2_49CAB3DE74280C58* __2__current; // 0x30
	::Class_1_C4FD36003027AC99* context; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_MOVENEXT_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2141ECA8AAD7D3__SELECTTARGET_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};

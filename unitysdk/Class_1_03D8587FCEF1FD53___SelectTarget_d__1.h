#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelAbusolutePositionSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13582AA0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13583050)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13582FE0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x135830D0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13583040)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13582FF0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13582920)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x135828F0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x135829F0)

inline static constexpr unsigned int Class_1_03D8587FCEF1FD53___SelectTarget_d__1_TypeDefinitionIndex = 71100;

class Class_1_03D8587FCEF1FD53___SelectTarget_d__1 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* config; // 0x10
	::Class_2_49CAB3DE74280C58* __2__current; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* __7__wrap1; // 0x20
	::Class_1_C4FD36003027AC99* __3__context; // 0x28
	::Class_1_C4FD36003027AC99* context; // 0x30
	::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* __3__config; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};

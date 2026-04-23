#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4293D57FC8C09DBA;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD52FC50)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD52FD90)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD52FD20)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD52FE10)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD52FD80)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD52FD30)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD52FC40)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xD52ECB0)

inline static constexpr unsigned int Class_1_4293D57FC8C09DBA___GetAbilitySaveSelectionConfigs_d__21_TypeDefinitionIndex = 71181;

class Class_1_4293D57FC8C09DBA___GetAbilitySaveSelectionConfigs_d__21 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* __7__wrap1; // 0x10
	::Class_2_49CAB3DE74280C58* abilityEntity; // 0x18
	::Class_1_4293D57FC8C09DBA* __4__this; // 0x20
	::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* __2__current; // 0x28
	::Class_2_49CAB3DE74280C58* __3__abilityEntity; // 0x30
	::System::Int32 __7__wrap2; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_MOVENEXT_OFFSET))(this);
	}

	::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* System_Collections_Generic_IEnumerator_RPG_GameCore_BaseChimeraDuelSaveEntitySelectionConfig__get_Current()
	{
		return ((::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* System_Collections_Generic_IEnumerable_RPG_GameCore_BaseChimeraDuelSaveEntitySelectionConfig__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};

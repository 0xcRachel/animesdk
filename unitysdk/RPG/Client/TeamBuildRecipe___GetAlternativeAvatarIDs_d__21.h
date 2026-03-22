#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA04E520)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA04E900)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA04E870)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA04E980)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA04E8D0)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA04E880)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA04E3A0)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xA04E220)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA04E470)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe___GetAlternativeAvatarIDs_d__21_TypeDefinitionIndex = 54029;

	class TeamBuildRecipe___GetAlternativeAvatarIDs_d__21 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs; // 0x10
		::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* exclusiveIDGroups; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* __3__avatarIDs; // 0x20
		::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* __3__exclusiveIDGroups; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x30
		::System::UInt32 __2__current; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21___M__FINALLY1_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}

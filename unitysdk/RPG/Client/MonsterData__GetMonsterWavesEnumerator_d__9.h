#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D92750)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D929C0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D92A20)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9D929D0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D92740)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x9D910A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData__GetMonsterWavesEnumerator_d__9_TypeDefinitionIndex = 51232;

	class MonsterData__GetMonsterWavesEnumerator_d__9 : public ::System::Object
	{
	public:
		::RPG::GameCore::StageRow* stageRow; // 0x10
		::Il2CppArray<::System::UInt32>* _waveIDs_5__2; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __2__current; // 0x20
		::System::Int32 _i_5__3; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerator_System_Collections_Generic_IEnumerator_System_UInt32___get_Current()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelDataComponent_WaveMonsterSequence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2A9DC0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_MAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xF2AB0F0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xF2AB140)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALPASSCOUNT_OFFSET UNITYSDK_OFFSET(0xF2AB6B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALSUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF2AB380)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET__OWNERREF_OFFSET UNITYSDK_OFFSET(0xF2AB090)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xF2AA880)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONMONSTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xF2AA430)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xF2A63F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_MonsterSequence_TypeDefinitionIndex = 53094;

	class LevelDataComponent_MonsterSequence : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelDataComponent* _Cmpt; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelDataComponent_WaveMonsterSequence*>* WaveList; // 0x18

		::System::Void _ctor(::RPG::GameCore::LevelDataComponent* pOwnerCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE__CTOR_OFFSET))(this, pOwnerCmpt);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCharacterCreate(::RPG::GameCore::GameEntity* pCreatedEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONCHARACTERCREATE_OFFSET))(this, pCreatedEntity);
		}

		::System::Void OnMonsterDieOrEscape(::RPG::GameCore::GameEntity* pDeadTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONMONSTERDIEORESCAPE_OFFSET))(this, pDeadTarget);
		}

		::System::Int32 get_MaxWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_MAXWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalSummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALSUMMONEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalPassCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALPASSCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get__OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET__OWNERREF_OFFSET))(this);
		}
	};
}

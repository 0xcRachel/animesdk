#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class StageRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMEVENTID_OFFSET UNITYSDK_OFFSET(0x98AEAB0)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDARRAY_OFFSET UNITYSDK_OFFSET(0x98AF850)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x98AF900)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEID_OFFSET UNITYSDK_OFFSET(0x98AF7B0)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEROW_OFFSET UNITYSDK_OFFSET(0x98AEB70)
#define RPG_CLIENT_MONSTERDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x98AE9B0)
#define RPG_CLIENT_MONSTERDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98AE970)
#define RPG_CLIENT_MONSTERDATA_GETMONSTERWAVESENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98AEA40)
#define RPG_CLIENT_MONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98AE8F0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERIDENUMERATORBYINFINITEWAVEID_OFFSET UNITYSDK_OFFSET(0x98B0000)
#define RPG_CLIENT_MONSTERDATA__ISMONSTERWEAKNESSSAME_OFFSET UNITYSDK_OFFSET(0x98AFE80)
#define RPG_CLIENT_MONSTERDATA__ISSUMMONSAME_OFFSET UNITYSDK_OFFSET(0x98AFC00)
#define RPG_CLIENT_MONSTERDATA__TRYADDMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x98AF280)
#define RPG_CLIENT_MONSTERDATA__TRYADDSUMMONMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x98AF3E0)
#define RPG_CLIENT_MONSTERDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x98B0070)
#define RPG_CLIENT_MONSTERDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98B0060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData_TypeDefinitionIndex = 50097;

	class MonsterData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _Add_Summon_Depth = 0x2; // 0x0
		::RPG::GameCore::MonsterTemplateRow* TemplateRow; // 0x10
		::RPG::GameCore::MonsterRow* Row; // 0x18
		::System::UInt32 SummonDepth; // 0x20
		::System::UInt32 WaveIndex; // 0x24
		::System::UInt32 Level; // 0x28
		::System::UInt32 MonsterID; // 0x2C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level, ::System::UInt32 waveIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__CTOR_OFFSET))(this, id, level, waveIndex);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::IEnumerator_1<::System::UInt32>*>* GetMonsterWavesEnumerator(::RPG::GameCore::StageRow* stageRow)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::IEnumerator_1<::System::UInt32>*>*(*)(::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETMONSTERWAVESENUMERATOR_OFFSET))(stageRow);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromEventID(::System::UInt32 eventID, ::System::UInt32 level, ::System::Boolean distinct, ::System::Boolean ignoreWave, ::System::Boolean addSummon)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMEVENTID_OFFSET))(eventID, level, distinct, ignoreWave, addSummon);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromStageRow(::RPG::GameCore::StageRow* stageRow, ::System::UInt32 level, ::System::Boolean distinct, ::System::Boolean ignoreWave, ::System::Boolean addSummon)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::RPG::GameCore::StageRow*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEROW_OFFSET))(stageRow, level, distinct, ignoreWave, addSummon);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromStageID(::System::UInt32 stageID, ::System::UInt32 level, ::System::Boolean distinct, ::System::Boolean ignoreWave, ::System::Boolean addSummon)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEID_OFFSET))(stageID, level, distinct, ignoreWave, addSummon);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromIDArray(::Il2CppArray<::System::UInt32>* monsterIDList, ::System::UInt32 level, ::System::Boolean distinct, ::System::Boolean ignoreWave, ::System::Boolean addSummon)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDARRAY_OFFSET))(monsterIDList, level, distinct, ignoreWave, addSummon);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* monsterIDList, ::System::UInt32 level, ::System::Boolean distinct, ::System::Boolean ignoreWave, ::System::Boolean addSummon)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDLIST_OFFSET))(monsterIDList, level, distinct, ignoreWave, addSummon);
		}

		static ::System::Void _TryAddMonsterData(::System::UInt32 monsterID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* targetList, ::System::UInt32 level, ::System::Boolean distinct, ::System::UInt32 waveIndex)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__TRYADDMONSTERDATA_OFFSET))(monsterID, targetList, level, distinct, waveIndex);
		}

		static ::System::Void _TryAddSummonMonsterData(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* sourceMonsterList, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* targetList, ::System::UInt32 level, ::System::Boolean distinct, ::System::UInt32 waveIndex, ::System::UInt32 addDepth)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__TRYADDSUMMONMONSTERDATA_OFFSET))(sourceMonsterList, targetList, level, distinct, waveIndex, addDepth);
		}

		static ::System::Boolean _IsSummonSame(::RPG::Client::MonsterData* summon, ::RPG::Client::MonsterData* otherMonster)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__ISSUMMONSAME_OFFSET))(summon, otherMonster);
		}

		static ::System::Boolean _IsMonsterWeaknessSame(::Il2CppArray<::RPG::GameCore::AttackDamageType>* weaknessLeft, ::Il2CppArray<::RPG::GameCore::AttackDamageType>* weaknessRight)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__ISMONSTERWEAKNESSSAME_OFFSET))(weaknessLeft, weaknessRight);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::UInt32>* _GetMonsterIDEnumeratorByInfiniteWaveID(::System::UInt32 waveID)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERIDENUMERATORBYINFINITEWAVEID_OFFSET))(waveID);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}

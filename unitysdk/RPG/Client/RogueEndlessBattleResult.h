#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_15;

#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x17732340)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x17732210)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177323B0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET UNITYSDK_OFFSET(0x17732470)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x17732410)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x177324C0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x17732430)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x17732450)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x177323F0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x17732420)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x177324D0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x17732440)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x17732460)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x17732400)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET UNITYSDK_OFFSET(0x177322B0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x177322A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessBattleResult_TypeDefinitionIndex = 62146;

	class RogueEndlessBattleResult : public ::System::Object
	{
	public:
		::System::UInt32 _LeftRoundCnt_k__BackingField; // 0x10
		::System::UInt32 _ExtraScore_k__BackingField; // 0x14
		::System::UInt32 _Layer_k__BackingField; // 0x18
		::System::Boolean _IsNewScoreRecord_k__BackingField; // 0x1C
		::System::UInt32 _Score_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessBattleResult* Create(::System::UInt32 score, ::System::UInt32 layer)
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET))(score, layer);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_15* layerInfo, ::RPG::Client::RogueEndlessBattleResult* bestResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET))(this, layerInfo, bestResult);
		}

		::System::Void Clone(::RPG::Client::RogueEndlessBattleResult* res)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET))(this, res);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET))(this);
		}

		::System::Void set_ExtraScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET))(this);
		}

		::System::Void set_LeftRoundCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET))(this);
		}

		::System::Boolean get_IsNewScoreRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET))(this);
		}

		::System::Void set_IsNewScoreRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET))(this, value);
		}
	};
}

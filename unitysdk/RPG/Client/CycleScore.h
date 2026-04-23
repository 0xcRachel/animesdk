#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6738612E875A41F;
namespace RPG::GameCore { class CycleScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CYCLESCORE_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x141DD5B0)
#define RPG_CLIENT_CYCLESCORE_GETCANTAKEREWARDSCORERANKS_OFFSET UNITYSDK_OFFSET(0x141DD250)
#define RPG_CLIENT_CYCLESCORE_GETREWARDIDBYRANK_OFFSET UNITYSDK_OFFSET(0x141DD4B0)
#define RPG_CLIENT_CYCLESCORE_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x141DDE30)
#define RPG_CLIENT_CYCLESCORE_GET_CONFIGLIST_OFFSET UNITYSDK_OFFSET(0x141DD240)
#define RPG_CLIENT_CYCLESCORE_GET_CURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0x141DD630)
#define RPG_CLIENT_CYCLESCORE_GET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x141DDDF0)
#define RPG_CLIENT_CYCLESCORE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x141DDE50)
#define RPG_CLIENT_CYCLESCORE_GET_HASGOTSCORERANK_OFFSET UNITYSDK_OFFSET(0x141DDE20)
#define RPG_CLIENT_CYCLESCORE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x141DDE70)
#define RPG_CLIENT_CYCLESCORE_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x141DDDE0)
#define RPG_CLIENT_CYCLESCORE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x141DDE10)
#define RPG_CLIENT_CYCLESCORE_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x141DD1C0)
#define RPG_CLIENT_CYCLESCORE_ISALLREWARDGOT_OFFSET UNITYSDK_OFFSET(0x141DD640)
#define RPG_CLIENT_CYCLESCORE_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x141DDE40)
#define RPG_CLIENT_CYCLESCORE_SET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x141DDE00)
#define RPG_CLIENT_CYCLESCORE_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x141DDE60)
#define RPG_CLIENT_CYCLESCORE_SYNC_OFFSET UNITYSDK_OFFSET(0x141DCE80)
#define RPG_CLIENT_CYCLESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x141DDF40)
#define RPG_CLIENT_CYCLESCORE__GETCANTAKEREWARDSCORERANKS_B__2_0_OFFSET UNITYSDK_OFFSET(0x141DDFF0)
#define RPG_CLIENT_CYCLESCORE__GETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x141DD790)
#define RPG_CLIENT_CYCLESCORE__GETCURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0x141DD8F0)
#define RPG_CLIENT_CYCLESCORE__GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x141DDA30)
#define RPG_CLIENT_CYCLESCORE__HASANYREWARDCANTAKE_B__1_0_OFFSET UNITYSDK_OFFSET(0x141DDF90)
#define RPG_CLIENT_CYCLESCORE__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x141DDB90)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScore_TypeDefinitionIndex = 58537;

	class CycleScore : public ::System::Object
	{
	public:
		// static const ::System::Int32 _StriperRemainTimeOffset = 0xFFFFFED4; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasGotScoreRank_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::CycleScoreRewardRow*>* _ConfigList; // 0x18
		::System::UInt32 _CurrentScore_k__BackingField; // 0x20
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x28
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_B6738612E875A41F* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6738612E875A41F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_SYNC_OFFSET))(this, info);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardScoreRanks()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GETCANTAKEREWARDSCORERANKS_OFFSET))(this);
		}

		::System::UInt32 GetRewardIDByRank(::System::UInt32 scoreRank)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GETREWARDIDBYRANK_OFFSET))(this, scoreRank);
		}

		::System::Boolean CanTakeReward(::System::UInt32 scoreRank)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_CANTAKEREWARD_OFFSET))(this, scoreRank);
		}

		::System::Boolean IsAllRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_ISALLREWARDGOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CycleScoreRewardRow*>* _GetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CycleScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__GETCONFIGLIST_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__GETCURRENTSCORERANK_OFFSET))(this);
		}

		::System::UInt32 _GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__GETMAXSCORE_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_CURRENTSCORE_OFFSET))(this);
		}

		::System::Void set_CurrentScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_SET_CURRENTSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_MAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_CURRENTSCORERANK_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_HasGotScoreRank()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_HASGOTSCORERANK_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CycleScoreRewardRow*>* get_ConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CycleScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE_GET_CONFIGLIST_OFFSET))(this);
		}

		::System::Boolean _HasAnyRewardCanTake_b__1_0(::RPG::GameCore::CycleScoreRewardRow* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__HASANYREWARDCANTAKE_B__1_0_OFFSET))(this, config);
		}

		::System::Boolean _GetCanTakeRewardScoreRanks_b__2_0(::RPG::GameCore::CycleScoreRewardRow* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORE__GETCANTAKEREWARDSCORERANKS_B__2_0_OFFSET))(this, config);
		}
	};
}

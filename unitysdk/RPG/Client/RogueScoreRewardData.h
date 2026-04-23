#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_569A1536AD9335E7;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16365040)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET UNITYSDK_OFFSET(0x16365310)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0x163657A0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16365860)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16365C40)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16365C60)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0x16365C10)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x16365B80)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x16365B90)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0x16365BF0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET UNITYSDK_OFFSET(0x16365BD0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x16365BB0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0x16365C30)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x16365710)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET UNITYSDK_OFFSET(0x16365600)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET UNITYSDK_OFFSET(0x163656B0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET UNITYSDK_OFFSET(0x163658B0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x16365200)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x163650E0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16365C50)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16365C70)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET UNITYSDK_OFFSET(0x16365C20)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x16365BA0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET UNITYSDK_OFFSET(0x16365C00)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET UNITYSDK_OFFSET(0x16365BE0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x16365BC0)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16365030)
#define RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0x16365930)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData_TypeDefinitionIndex = 62171;

	class RogueScoreRewardData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _StriperRemainTimeOffset = 0xFFFFFED4; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* _CacheScoreRewardRows; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenScoreRewardRowIDs; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20
		::System::UInt32 _PoolID_k__BackingField; // 0x24
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x28
		::System::Boolean _HasTakenInitialScore_k__BackingField; // 0x30
		::System::Boolean _PoolRefreshed_k__BackingField; // 0x31
		::System::Nullable_1<::System::Boolean> _HasRewaradCanTake; // 0x32
		::System::UInt32 _PreScore_k__BackingField; // 0x34
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_569A1536AD9335E7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void RefreshHasRewardCanTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_REFRESHHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>* GetCurScoreRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueScoreRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETCURSCOREREWARDROWS_OFFSET))(this);
		}

		::System::Boolean IsRewardRowTaken(::System::UInt32 scoreRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWTAKEN_OFFSET))(this, scoreRow);
		}

		::System::Boolean IsRewardRowCanTake(::RPG::GameCore::RogueScoreRewardRow* rogueScoreRewardRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_ISREWARDROWCANTAKE_OFFSET))(this, rogueScoreRewardRow);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt64 GetStriperTipTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GETSTRIPERTIPTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean NeedShowStriperTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_NEEDSHOWSTRIPERTIP_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_PoolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLID_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_PreScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_PRESCORE_OFFSET))(this);
		}

		::System::Void set_PreScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_PRESCORE_OFFSET))(this, value);
		}

		::System::Boolean get_PoolRefreshed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_POOLREFRESHED_OFFSET))(this);
		}

		::System::Void set_PoolRefreshed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_POOLREFRESHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasTakenInitialScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_HASTAKENINITIALSCORE_OFFSET))(this);
		}

		::System::Void set_HasTakenInitialScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_HASTAKENINITIALSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}
	};
}

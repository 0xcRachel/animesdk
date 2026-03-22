#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_89;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class StarFightLevelData; }
namespace RPG::GameCore { class ActivityStarFightGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTGROUPDATA_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0x9FBC820)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x9FBC900)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ELEMENTLIST_OFFSET UNITYSDK_OFFSET(0x9FBCDE0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_EVALUATEWAVE_OFFSET UNITYSDK_OFFSET(0x9FBCE00)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x9FBCC00)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0x9FBCC30)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9FBCC70)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0x9FBCBD0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0x9FBCDC0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0x9FBCDA0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXWAVE_OFFSET UNITYSDK_OFFSET(0x9FBCD80)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FBCD60)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISPERFECTPASS_OFFSET UNITYSDK_OFFSET(0x9FBD040)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FBCE40)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9FBD020)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_PERFECTWAVE_OFFSET UNITYSDK_OFFSET(0x9FBCC50)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x9FBD100)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9FBCC80)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x9FBCE20)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x9FBCBB0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0x9FBCDD0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0x9FBCDB0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXWAVE_OFFSET UNITYSDK_OFFSET(0x9FBCD90)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FBCD70)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SYNCGROUPINFO_OFFSET UNITYSDK_OFFSET(0x9FBC650)
#define RPG_CLIENT_STARFIGHTGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FBBF00)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightGroupData_TypeDefinitionIndex = 53924;

	class StarFightGroupData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* _RankTextIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::StarFightLevelData*>* _LevelData; // 0x18
		::RPG::GameCore::ActivityStarFightGroupRow* _GroupRow; // 0x20
		::System::UInt32 _GroupID; // 0x28
		::System::UInt32 _HardMaxWave_k__BackingField; // 0x2C
		::System::Boolean WaveNewRecord; // 0x30
		::System::Boolean _HardChallenged_k__BackingField; // 0x31
		::System::Boolean PerfectNewRecord; // 0x32
		::System::UInt32 _HardMaxLeftTurn_k__BackingField; // 0x34
		::System::Int32 _HistoryMaxPassDifficulty_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Void SyncGroupInfo(::Class_1_4CF8088A158DCE25_89* starFightGroupInfo, ::System::Boolean synByInit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_89*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SYNCGROUPINFO_OFFSET))(this, starFightGroupInfo, synByInit);
		}

		::RPG::Client::StarFightLevelData* GetLevelData(::System::UInt32 difficulty)
		{
			return ((::RPG::Client::StarFightLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GETLEVELDATA_OFFSET))(this, difficulty);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPDESC_OFFSET))(this);
		}

		::System::String* get_GroupIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPICON_OFFSET))(this);
		}

		::System::UInt32 get_PerfectWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_PERFECTWAVE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Int32 get_HistoryMaxPassDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this);
		}

		::System::Void set_HistoryMaxPassDifficulty(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this, value);
		}

		::System::UInt32 get_HardMaxWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXWAVE_OFFSET))(this);
		}

		::System::Void set_HardMaxWave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXWAVE_OFFSET))(this, value);
		}

		::System::UInt32 get_HardMaxLeftTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXLEFTTURN_OFFSET))(this);
		}

		::System::Void set_HardMaxLeftTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXLEFTTURN_OFFSET))(this, value);
		}

		::System::Boolean get_HardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDCHALLENGED_OFFSET))(this);
		}

		::System::Void set_HardChallenged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDCHALLENGED_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatar()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_TRIALAVATAR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_ElementList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ELEMENTLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EvaluateWave()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_EVALUATEWAVE_OFFSET))(this);
		}

		::RPG::GameCore::StarFightSeason get_Season()
		{
			return ((::RPG::GameCore::StarFightSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISPERFECTPASS_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_RANKLEVEL_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

class Class_1_910AC58BB2D45F21;
class Class_1_B9C9FEF982623D49;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class ChallengeBossMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET UNITYSDK_OFFSET(0x8E63370)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x8E627D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x8E62680)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET UNITYSDK_OFFSET(0x8E63400)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x8E623C0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x8E62520)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x8E62E80)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x8E634D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET UNITYSDK_OFFSET(0x8E63330)
#define RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8E63490)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E62E20)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x8E634E0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x8E62BB0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x8E63050)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x8E63140)
#define RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8E61F10)
#define RPG_CLIENT_CHALLENGEBOSSDATA__GETMONSTERID_OFFSET UNITYSDK_OFFSET(0x8E621D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x8E634F0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8E63850)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8E637B0)
#define RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x8E63710)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData_TypeDefinitionIndex = 50054;

	class ChallengeBossData : public ::RPG::Client::ChallengeData
	{
	public:
		// static const ::System::Int32 NodeNum = 0x2; // 0x0
		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x68
		::Il2CppArray<::RPG::Client::ChallengeBossSingleNodeInfo*>* _NodeInfos; // 0x70
		::System::Boolean EverReachEnd; // 0x78

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA__CTOR_OFFSET))(this, id, groupType);
		}

		::RPG::Client::MonsterData* GetMonsterData(::System::Int32 stageNum)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET))(this, stageNum);
		}

		::RPG::Client::MonsterGuideData* GetMonsterGuideData(::System::Int32 stageNum)
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET))(this, stageNum);
		}

		::RPG::Client::ChallengeBossSingleNodeInfo* GetChallengeBossSingleNodeInfo(::System::Int32 stageNum)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET))(this, stageNum);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 stageIndex, ::System::Int32 eventIndex)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, stageIndex, eventIndex);
		}

		::System::Void SyncArchiveExtInfo(::Class_1_910AC58BB2D45F21* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_910AC58BB2D45F21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, extInfo);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::Class_1_B9C9FEF982623D49* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, rsp);
		}

		::RPG::Client::AvatarData* GetUpgradeAvailableAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void UpdateScore(::System::UInt32 score1, ::System::UInt32 score2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET))(this, score1, score2);
		}

		::System::Void UpdateSingleNodeInfo(::System::Int32 stageIndex, ::System::Boolean isWin, ::System::UInt32 score, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET))(this, stageIndex, isWin, score, buffID);
		}

		::System::Boolean HasEverReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET))(this);
		}

		::System::Boolean EverEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET))(this);
		}

		::System::UInt32 GetCurrentTeamMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET))(this);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterID(::System::Int32 stageNum)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA__GETMONSTERID_OFFSET))(this, stageNum);
		}

		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossMazeExtraConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* __iFixBaseProxy_GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SyncArchiveExtInfo(::Class_1_910AC58BB2D45F21* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_910AC58BB2D45F21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SYNCARCHIVEEXTINFO_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SaveExtInfoWhenEnterChallenge(::Class_1_B9C9FEF982623D49* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA___IFIXBASEPROXY_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}
	};
}

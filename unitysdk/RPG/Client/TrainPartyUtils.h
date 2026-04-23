#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainPartyModule; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartySimpleTalkBgData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrainPartyStepConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTYUTILS_CALCULATESLIDERFILLTIME_OFFSET UNITYSDK_OFFSET(0x16828180)
#define RPG_CLIENT_TRAINPARTYUTILS_CHECKANDTRANSFERTOHEROROOM_OFFSET UNITYSDK_OFFSET(0x16829DE0)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEBUILDUI3DPAMUENTITY_OFFSET UNITYSDK_OFFSET(0x16829470)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEEVENTBGLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x16828590)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEMAINENTRANCEUI3DPAMUENTITY_OFFSET UNITYSDK_OFFSET(0x168293A0)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEPAMUENTITY_OFFSET UNITYSDK_OFFSET(0x168290B0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETBUILDFADEINWAITTIME_OFFSET UNITYSDK_OFFSET(0x16828480)
#define RPG_CLIENT_TRAINPARTYUTILS_GETBUILDSTEPCONFIG_OFFSET UNITYSDK_OFFSET(0x168296A0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETDIYITEMSUBTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1682A3D0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETEVENTPERFORMANCECLICKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x16829A40)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x16827F00)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x16827FC0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x16827E40)
#define RPG_CLIENT_TRAINPARTYUTILS_GETMAXPASSENGERSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x168286C0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETMEETINGRANKINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0x168287C0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETPASSENGERMAXSLIDERFILLNUMS_OFFSET UNITYSDK_OFFSET(0x16828080)
#define RPG_CLIENT_TRAINPARTYUTILS_GETPLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0x16827D30)
#define RPG_CLIENT_TRAINPARTYUTILS_GETSTATUSRANKBYEXP_OFFSET UNITYSDK_OFFSET(0x16828850)
#define RPG_CLIENT_TRAINPARTYUTILS_GETTEXTMOTIONSPEED_OFFSET UNITYSDK_OFFSET(0x16829900)
#define RPG_CLIENT_TRAINPARTYUTILS_GETTRAINPARTYSTATTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x16827CF0)
#define RPG_CLIENT_TRAINPARTYUTILS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x16827DE0)
#define RPG_CLIENT_TRAINPARTYUTILS_GET__PLAYER_ROOM_ENTRANCE_ID_OFFSET UNITYSDK_OFFSET(0x1682AB30)
#define RPG_CLIENT_TRAINPARTYUTILS_ISACTIVITYDIYITEM_OFFSET UNITYSDK_OFFSET(0x1682A430)
#define RPG_CLIENT_TRAINPARTYUTILS_ISGAMEPLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0x16829DA0)
#define RPG_CLIENT_TRAINPARTYUTILS_PAUSEBACKGROUNDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x168297D0)
#define RPG_CLIENT_TRAINPARTYUTILS_PLAYBACKGROUNDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16829700)
#define RPG_CLIENT_TRAINPARTYUTILS_SHOWSTREAMINGTRANSFER_OFFSET UNITYSDK_OFFSET(0x16829B60)
#define RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOHEROROOM_OFFSET UNITYSDK_OFFSET(0x16828990)
#define RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOPLAYERROOM_OFFSET UNITYSDK_OFFSET(0x1682A4B0)
#define RPG_CLIENT_TRAINPARTYUTILS__ONENTITYLOADFINISH_OFFSET UNITYSDK_OFFSET(0x1682A9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils_TypeDefinitionIndex = 62851;

	class TrainPartyUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetTrainPartyStatTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETTRAINPARTYSTATTYPECOUNT_OFFSET))();
		}

		static ::System::UInt32 GetPlayerPassengerID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETPLAYERPASSENGERID_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerRoundIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERROUNDICONPATH_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerItemIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERITEMICONPATH_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerMiniIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERMINIICONPATH_OFFSET))();
		}

		static ::System::UInt32 GetPassengerMaxSliderFillNums()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETPASSENGERMAXSLIDERFILLNUMS_OFFSET))();
		}

		static ::System::Single CalculateSliderFillTime(::System::UInt32 fillNums)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CALCULATESLIDERFILLTIME_OFFSET))(fillNums);
		}

		static ::System::Single GetBuildFadeInWaitTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETBUILDFADEINWAITTIME_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreateEventBgLevelGraph(::RPG::Client::TrainParty::TrainPartySimpleTalkBgData* bgData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::TrainParty::TrainPartySimpleTalkBgData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEEVENTBGLEVELGRAPH_OFFSET))(bgData);
		}

		static ::System::UInt32 GetMaxPassengerSkillCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETMAXPASSENGERSKILLCOUNT_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* GetMeetingRankInfoByScore(::System::UInt32 score)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETMEETINGRANKINFOBYSCORE_OFFSET))(score);
		}

		static ::System::UInt32 GetStatusRankByExp(::System::UInt32 exp)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETSTATUSRANKBYEXP_OFFSET))(exp);
		}

		static ::System::Boolean TransferToHeroRoom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOHEROROOM_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePamuEntity(::UnityEngine::Transform* root, ::System::String* levelGraphPath)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEPAMUENTITY_OFFSET))(root, levelGraphPath);
		}

		static ::RPG::GameCore::GameEntity* CreateMainEntranceUI3DPamuEntity(::UnityEngine::Transform* root)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEMAINENTRANCEUI3DPAMUENTITY_OFFSET))(root);
		}

		static ::RPG::GameCore::GameEntity* CreateBuildUI3DPamuEntity(::UnityEngine::Transform* root, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* stepInfo)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEBUILDUI3DPAMUENTITY_OFFSET))(root, stepInfo);
		}

		static ::RPG::GameCore::TrainPartyStepConfigRow* GetBuildStepConfig(::System::UInt32 stepID)
		{
			return ((::RPG::GameCore::TrainPartyStepConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETBUILDSTEPCONFIG_OFFSET))(stepID);
		}

		static ::System::Void PlayBackGroundPerformance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_PLAYBACKGROUNDPERFORMANCE_OFFSET))();
		}

		static ::System::Void PauseBackGroundPerformance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_PAUSEBACKGROUNDPERFORMANCE_OFFSET))();
		}

		static ::System::Single GetTextMotionSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETTEXTMOTIONSPEED_OFFSET))();
		}

		static ::System::Single GetEventPerformanceClickProtectTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETEVENTPERFORMANCECLICKPROTECTTIME_OFFSET))();
		}

		static ::System::Void ShowStreamingTransfer(::RPG::Client::UIController* buildUI)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_SHOWSTREAMINGTRANSFER_OFFSET))(buildUI);
		}

		static ::System::Boolean IsGameplayUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_ISGAMEPLAYUNLOCK_OFFSET))();
		}

		static ::System::Void CheckAndTransferToHeroRoom()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CHECKANDTRANSFERTOHEROROOM_OFFSET))();
		}

		static ::System::String* GetDiyItemSubTypeIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETDIYITEMSUBTYPEICONPATH_OFFSET))();
		}

		static ::System::Boolean IsActivityDiyItem(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_ISACTIVITYDIYITEM_OFFSET))(itemID);
		}

		static ::System::Void TransferToPlayerRoom(::System::UInt32 subAreaID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOPLAYERROOM_OFFSET))(subAreaID);
		}

		static ::System::Void _OnEntityLoadFinish(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS__ONENTITYLOADFINISH_OFFSET))(entity);
		}

		static ::RPG::Client::TrainPartyModule* get__Module()
		{
			return ((::RPG::Client::TrainPartyModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GET__MODULE_OFFSET))();
		}

		static ::System::UInt32 get__PLAYER_ROOM_ENTRANCE_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GET__PLAYER_ROOM_ENTRANCE_ID_OFFSET))();
		}
	};
}

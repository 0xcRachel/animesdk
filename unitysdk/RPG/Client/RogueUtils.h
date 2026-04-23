#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class RogueAreaData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEUTILS_CHECKROGUEAREABANWITHHINT_OFFSET UNITYSDK_OFFSET(0x15BA38E0)
#define RPG_CLIENT_ROGUEUTILS_GETCOSMICFRAGMENTCOUNTINENDLESSSPECIFICLEVEL_OFFSET UNITYSDK_OFFSET(0x15BA3CB0)
#define RPG_CLIENT_ROGUEUTILS_GETDEFAULTAREADATATOSHOW_OFFSET UNITYSDK_OFFSET(0x15BA3290)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEAREAMAXSCORE_OFFSET UNITYSDK_OFFSET(0x15BA3AE0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEBATTLEMANUALEXITCONFIRMHINT_OFFSET UNITYSDK_OFFSET(0x15BA3DB0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0x15BA18B0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0x15BA1960)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x15BA1B00)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEHALLENTRANCEID_OFFSET UNITYSDK_OFFSET(0x15BA16D0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUELEAVEMAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x15BA1CA0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEMAPDEPTH_OFFSET UNITYSDK_OFFSET(0x15BA39F0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTKEY_OFFSET UNITYSDK_OFFSET(0x15BA2220)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTSTAMINA_OFFSET UNITYSDK_OFFSET(0x15BA2170)
#define RPG_CLIENT_ROGUEUTILS_GETROGUETRANSFERMAINPAGEFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x15BA1D50)
#define RPG_CLIENT_ROGUEUTILS_GETROLLBUFFCOST_OFFSET UNITYSDK_OFFSET(0x15BA1E90)
#define RPG_CLIENT_ROGUEUTILS_GETSCHEDULEROGUEAREAIDINDOING_OFFSET UNITYSDK_OFFSET(0x15BA3620)
#define RPG_CLIENT_ROGUEUTILS_GETSTARTROGUEAVATARMAXNUMBER_OFFSET UNITYSDK_OFFSET(0x15BA1DE0)
#define RPG_CLIENT_ROGUEUTILS_HASREWARDRESETTIP_OFFSET UNITYSDK_OFFSET(0x15BA2A70)
#define RPG_CLIENT_ROGUEUTILS_HASSCHEDULEROGUEAREAINDOING_OFFSET UNITYSDK_OFFSET(0x15BA3440)
#define RPG_CLIENT_ROGUEUTILS_HASUNLOCKAREATIP_OFFSET UNITYSDK_OFFSET(0x15BA2490)
#define RPG_CLIENT_ROGUEUTILS_ISINENDLESSCOSMICFRAGMENTAREA_OFFSET UNITYSDK_OFFSET(0x15BA3BE0)
#define RPG_CLIENT_ROGUEUTILS_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0x15BA4130)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREABANNED_OFFSET UNITYSDK_OFFSET(0x15BA3810)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREACHESTLOCK_OFFSET UNITYSDK_OFFSET(0x15BA22D0)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAPROGRESSUNLOCK_OFFSET UNITYSDK_OFFSET(0x15BA30A0)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_1_OFFSET UNITYSDK_OFFSET(0x15BA2D20)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0x15BA2F40)
#define RPG_CLIENT_ROGUEUTILS_SAVEROGUEREWARDTIPSEEN_OFFSET UNITYSDK_OFFSET(0x15BA2B10)
#define RPG_CLIENT_ROGUEUTILS_TELEPORTTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BA3FD0)
#define RPG_CLIENT_ROGUEUTILS_TRYGETFIRSTUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0x15BA24D0)
#define RPG_CLIENT_ROGUEUTILS_TRYGETLASTENTEREDROGUEAREADATA_OFFSET UNITYSDK_OFFSET(0x15BA2BB0)
#define RPG_CLIENT_ROGUEUTILS_TRYGETMAXUNLOCKEDROGUEAREA_OFFSET UNITYSDK_OFFSET(0x15BA2D80)
#define RPG_CLIENT_ROGUEUTILS__GETENTRANCETRANSFERPARAMS_OFFSET UNITYSDK_OFFSET(0x15BA3EC0)
#define RPG_CLIENT_ROGUEUTILS__GETITEMCONFIGFROMSTR_OFFSET UNITYSDK_OFFSET(0x15BA1F40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueUtils_TypeDefinitionIndex = 62178;

	class RogueUtils : public ::System::Object
	{
	public:
		static ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetRogueHallEntranceID()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEHALLENTRANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceFloorID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEFLOORID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEGROUPID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceInstanceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEINSTANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueLeaveMapEntranceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUELEAVEMAPENTRANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueTransferMainPageFinishSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUETRANSFERMAINPAGEFINISHSUBMISSIONID_OFFSET))();
		}

		static ::System::UInt32 GetStartRogueAvatarMaxNumber()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETSTARTROGUEAVATARMAXNUMBER_OFFSET))();
		}

		static ::RPG::GameCore::ItemConfig* GetRollBuffCost(::System::UInt32 curTimes)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROLLBUFFCOST_OFFSET))(curTimes);
		}

		static ::RPG::GameCore::ItemConfig* _GetItemConfigFromStr(::System::String* itemConfigArrayStr, ::System::Int32 index)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS__GETITEMCONFIGFROMSTR_OFFSET))(itemConfigArrayStr, index);
		}

		static ::System::UInt32 GetRogueOpenChestCostStamina()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTSTAMINA_OFFSET))();
		}

		static ::System::UInt32 GetRogueOpenChestCostKey()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTKEY_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaChestLock(::System::UInt32 rogueAreaProgress)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREACHESTLOCK_OFFSET))(rogueAreaProgress);
		}

		static ::System::Boolean HasUnlockAreaTip()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASUNLOCKAREATIP_OFFSET))();
		}

		static ::System::Boolean HasRewardResetTip()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASREWARDRESETTIP_OFFSET))();
		}

		static ::System::Void SaveRogueRewardTipSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_SAVEROGUEREWARDTIPSEEN_OFFSET))();
		}

		static ::RPG::Client::RogueAreaData* TryGetFirstUnlockAreaData(::System::Boolean savePref)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETFIRSTUNLOCKAREADATA_OFFSET))(savePref);
		}

		static ::RPG::Client::RogueAreaData* TryGetLastEnteredRogueAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETLASTENTEREDROGUEAREADATA_OFFSET))();
		}

		static ::RPG::Client::RogueAreaData* TryGetMaxUnlockedRogueArea()
		{
			return ((::RPG::Client::RogueAreaData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETMAXUNLOCKEDROGUEAREA_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaUnlock(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_OFFSET))(areaID);
		}

		static ::System::Boolean IsRogueAreaUnlock_1(::RPG::Client::RogueAreaData* areaData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_1_OFFSET))(areaData);
		}

		static ::System::Boolean IsRogueAreaProgressUnlock(::System::UInt32 areaProgressID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAPROGRESSUNLOCK_OFFSET))(areaProgressID);
		}

		static ::RPG::Client::RogueAreaData* GetDefaultAreaDataToShow(::System::Boolean clearCustomizedAreaID)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETDEFAULTAREADATATOSHOW_OFFSET))(clearCustomizedAreaID);
		}

		static ::System::Boolean HasScheduleRogueAreaInDoing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASSCHEDULEROGUEAREAINDOING_OFFSET))();
		}

		static ::System::UInt32 GetScheduleRogueAreaIDInDoing()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETSCHEDULEROGUEAREAIDINDOING_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaBanned(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREABANNED_OFFSET))(areaID);
		}

		static ::System::Boolean CheckRogueAreaBanWithHint(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_CHECKROGUEAREABANWITHHINT_OFFSET))(areaID);
		}

		static ::System::UInt32 GetRogueMapDepth(::System::UInt32 mapID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEMAPDEPTH_OFFSET))(mapID);
		}

		static ::System::UInt32 GetRogueAreaMaxScore(::System::UInt32 areaID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEAREAMAXSCORE_OFFSET))(areaID);
		}

		static ::System::Boolean IsInEndlessCosmicFragmentArea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISINENDLESSCOSMICFRAGMENTAREA_OFFSET))();
		}

		static ::System::UInt32 GetCosmicFragmentCountInEndlessSpecificLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETCOSMICFRAGMENTCOUNTINENDLESSSPECIFICLEVEL_OFFSET))();
		}

		static ::RPG::Client::TextID GetRogueBattleManualExitConfirmHint()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEBATTLEMANUALEXITCONFIRMHINT_OFFSET))();
		}

		static ::System::Void _GetEntranceTransferParams(::System::UInt32& entranceID, ::System::UInt32& mappingInfoID)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS__GETENTRANCETRANSFERPARAMS_OFFSET))(entranceID, mappingInfoID);
		}

		static ::System::Boolean TeleportToEntrance(::System::Action* preTeleportCallback)
		{
			return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TELEPORTTOENTRANCE_OFFSET))(preTeleportCallback);
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISINENTRANCEFLOOR_OFFSET))();
		}
	};
}

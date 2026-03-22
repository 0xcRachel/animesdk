#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/RogueLogTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/RPG/GameCore/RogueSubPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_21DCD4640D389503_16;
class Class_1_2250AFBBC876BF24_1;
class Class_1_3AD2528CD53B1639_8;
class Class_1_4D5D53619B020DDD;
class Class_1_533CCF93B9B1AD29;
class Class_1_E9FAC3539FD8861A_23;
class Class_1_E9FAC3539FD8861A_24;
class Class_1_FA4F4A67B1C04320_814;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class RogueAeonDisplayRow; }
namespace RPG::GameCore { class RogueAeonRow; }
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace RPG::GameCore { class RogueMagicRoomMarkRow; }
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace RPG::GameCore { class RogueTournRoomMarkRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x9E49ED0)
#define RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0x9E49E20)
#define RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET UNITYSDK_OFFSET(0x9E4A5B0)
#define RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x9E46F90)
#define RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET UNITYSDK_OFFSET(0x9E48B40)
#define RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET UNITYSDK_OFFSET(0x9E2E500)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x9E49740)
#define RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0x9E49020)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET UNITYSDK_OFFSET(0x9E49920)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEISAVATARUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x9E47CD0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E47510)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9E47E20)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E47630)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E47870)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x9E47990)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E47750)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E47420)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E472D0)
#define RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9E47A60)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET UNITYSDK_OFFSET(0x9E49FA0)
#define RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x9E49960)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9E48E80)
#define RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0x9E4B930)
#define RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0x9E4BAA0)
#define RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET UNITYSDK_OFFSET(0x9E49A90)
#define RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E4BED0)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET UNITYSDK_OFFSET(0x9E4BB20)
#define RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET UNITYSDK_OFFSET(0x9E4B7B0)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET UNITYSDK_OFFSET(0x9E48610)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0x9E48380)
#define RPG_CLIENT_ROGUESTATIC_GETNEXTROGUETOURNROOMROW_OFFSET UNITYSDK_OFFSET(0x9E485A0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET UNITYSDK_OFFSET(0x9E47F60)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET UNITYSDK_OFFSET(0x9E48000)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET UNITYSDK_OFFSET(0x9E47F00)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9E47E60)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET UNITYSDK_OFFSET(0x9E480A0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9E48190)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E4AAC0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E4AEE0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E4ACB0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E4AF60)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET UNITYSDK_OFFSET(0x9E4ABD0)
#define RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET UNITYSDK_OFFSET(0x9E4B9E0)
#define RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9E49F90)
#define RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x9E48680)
#define RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0x9E4A780)
#define RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x9E48A70)
#define RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A900)
#define RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E48DE0)
#define RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E248A0)
#define RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET UNITYSDK_OFFSET(0x9E4A3F0)
#define RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A9E0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x9E30C50)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET UNITYSDK_OFFSET(0x9E4A1B0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0x9E4A230)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET UNITYSDK_OFFSET(0x9E48C40)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0x9E4A270)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET UNITYSDK_OFFSET(0x9E4A3B0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0x9E4A2B0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET UNITYSDK_OFFSET(0x9E4A1F0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET UNITYSDK_OFFSET(0x9E4A370)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET UNITYSDK_OFFSET(0x9E4A2F0)
#define RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET UNITYSDK_OFFSET(0x9E4A330)
#define RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E30770)
#define RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E24800)
#define RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x9E487E0)
#define RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x9E48920)
#define RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET UNITYSDK_OFFSET(0x9E4A470)
#define RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET UNITYSDK_OFFSET(0x9E49A30)
#define RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x9E2F0F0)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x9E49D30)
#define RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0x9E2D000)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x9E49C40)
#define RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x9E49BF0)
#define RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0x9E49BA0)
#define RPG_CLIENT_ROGUESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0x9E49B50)
#define RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x9E2F250)
#define RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET UNITYSDK_OFFSET(0x9E2C840)
#define RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET UNITYSDK_OFFSET(0x9E2E430)
#define RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E2EC60)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E4B130)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET UNITYSDK_OFFSET(0x9E4B3C0)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9E4B360)
#define RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET UNITYSDK_OFFSET(0x9E4B600)
#define RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET UNITYSDK_OFFSET(0x9E49C90)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET UNITYSDK_OFFSET(0x9E4A6E0)
#define RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET UNITYSDK_OFFSET(0x9E4A600)
#define RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET UNITYSDK_OFFSET(0x9E4A520)
#define RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET UNITYSDK_OFFSET(0x9E49850)
#define RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E47B80)
#define RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET UNITYSDK_OFFSET(0x9E4B680)
#define RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A840)
#define RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A9A0)
#define RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET UNITYSDK_OFFSET(0x9E48C80)
#define RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A8C0)
#define RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET UNITYSDK_OFFSET(0x9E48BF0)
#define RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4AA80)
#define RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A7E0)
#define RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET UNITYSDK_OFFSET(0x9E4A880)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueStatic_TypeDefinitionIndex = 53647;

	class RogueStatic : public ::System::Object
	{
	public:
		static ::System::Void EnterMap(::Class_1_14E02E1F6D70E487_1* sceneInfo, ::Class_1_21DCD4640D389503_16* lineup)
		{
			return ((::System::Void(*)(::Class_1_14E02E1F6D70E487_1*, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ENTERMAP_OFFSET))(sceneInfo, lineup);
		}

		static ::System::Void RefreshMap(::Class_1_14E02E1F6D70E487_1* sceneInfo, ::Class_1_21DCD4640D389503_16* lineup)
		{
			return ((::System::Void(*)(::Class_1_14E02E1F6D70E487_1*, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHMAP_OFFSET))(sceneInfo, lineup);
		}

		static ::System::Boolean IsSameFloorWithCurrentMap(::Class_1_14E02E1F6D70E487_1* protoSceneInfo)
		{
			return ((::System::Boolean(*)(::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISSAMEFLOORWITHCURRENTMAP_OFFSET))(protoSceneInfo);
		}

		static ::System::Void SetMapRotationData(::Class_1_3AD2528CD53B1639_8* mapRotationData)
		{
			return ((::System::Void(*)(::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_SETMAPROTATIONDATA_OFFSET))(mapRotationData);
		}

		static ::System::Void RefreshRogueCoin(::System::UInt32 rogueCoinNum, ::System::Boolean isUIShowDelta)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_REFRESHROGUECOIN_OFFSET))(rogueCoinNum, isUIShowDelta);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* CreateCostItemConfigs(::Class_1_4D5D53619B020DDD* proto)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATECOSTITEMCONFIGS_OFFSET))(proto);
		}

		static ::RPG::Client::RogueReviveAvatarInfo* GetCurModeRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEREVIVEAVATARINFO_OFFSET))();
		}

		static ::RPG::Client::RoguePickAvatarInfo* GetCurModeRoguePickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEPICKAVATARINFO_OFFSET))();
		}

		static ::RPG::Client::RogueBuffInfo* GetCurModeRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEBUFFINFO_OFFSET))();
		}

		static ::RPG::Client::RogueFormulaInfo* GetCurModeRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEFORMULAINFO_OFFSET))();
		}

		static ::RPG::Client::RogueMiracleInfo* GetCurModeRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMIRACLEINFO_OFFSET))();
		}

		static ::RPG::Client::RogueKeywordInfo* GetCurModeRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEKEYWORDINFO_OFFSET))();
		}

		static ::RPG::Client::RogueMagicScepterInfo* GetCurModeRogueMagicScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEMAGICSCEPTERINFO_OFFSET))();
		}

		static ::RPG::Client::RogueTournTitanBlessInfo* GetCurModeRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUETOURNTITANBLESSINFO_OFFSET))();
		}

		static ::System::UInt32 _GetCurModeMonsterEliteDropID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__GETCURMODEMONSTERELITEDROPID_OFFSET))();
		}

		static ::System::Boolean GetCurModeIsAvatarUpgradable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEISAVATARUPGRADABLE_OFFSET))();
		}

		static ::System::String* GetCurModeRogueDebugInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEROGUEDEBUGINFO_OFFSET))();
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow(::RPG::GameCore::RogueAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_1(::RPG::GameCore::RogueNousAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_1_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_2(::RPG::GameCore::RogueDLCAeonRow* aeonRow)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_2_OFFSET))(aeonRow);
		}

		static ::RPG::GameCore::RogueAeonDisplayRow* GetRogueAeonDisplayRow_3(::System::UInt32 rogueAeonDisplayID)
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEAEONDISPLAYROW_3_OFFSET))(rogueAeonDisplayID);
		}

		static ::System::String* GetRogueDataProviderName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDATAPROVIDERNAME_OFFSET))();
		}

		static ::RPG::Client::TextID GetRogueDoorTriggerButtonText(::Class_1_533CCF93B9B1AD29* propExtraInfo)
		{
			return ((::RPG::Client::TextID(*)(::Class_1_533CCF93B9B1AD29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEDOORTRIGGERBUTTONTEXT_OFFSET))(propExtraInfo);
		}

		static ::RPG::GameCore::RogueRoomTypeRow* GetNextRogueRoomTypeRow(::Class_1_FA4F4A67B1C04320_814* propRogueInfo)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::Class_1_FA4F4A67B1C04320_814*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEROOMTYPEROW_OFFSET))(propRogueInfo);
		}

		static ::RPG::GameCore::RogueTournRoomMarkRow* GetNextRogueTournRoomRow(::Class_1_E9FAC3539FD8861A_23* doorInfo)
		{
			return ((::RPG::GameCore::RogueTournRoomMarkRow*(*)(::Class_1_E9FAC3539FD8861A_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUETOURNROOMROW_OFFSET))(doorInfo);
		}

		static ::RPG::GameCore::RogueMagicRoomMarkRow* GetNextRogueMagicRoomRow(::Class_1_E9FAC3539FD8861A_24* doorInfo)
		{
			return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::Class_1_E9FAC3539FD8861A_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETNEXTROGUEMAGICROOMROW_OFFSET))(doorInfo);
		}

		static ::System::Boolean IsBuffHandbookLocked(::System::UInt32 mazeBuffID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISBUFFHANDBOOKLOCKED_OFFSET))(mazeBuffID);
		}

		static ::System::Boolean IsMiracleHandbookLocked(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISMIRACLEHANDBOOKLOCKED_OFFSET))(miracleID);
		}

		static ::System::Boolean IsRandomEventHandbookLocked(::System::UInt32 npcID, ::System::UInt32 progress)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISRANDOMEVENTHANDBOOKLOCKED_OFFSET))(npcID, progress);
		}

		static ::System::Boolean IsFormulaHandbookLocked(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISFORMULAHANDBOOKLOCKED_OFFSET))(formulaID);
		}

		static ::Class_1_2250AFBBC876BF24_1* CreateRogueDisplayAction(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::Class_1_2250AFBBC876BF24_1*(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CREATEROGUEDISPLAYACTION_OFFSET))(type, arg);
		}

		static ::System::Void TriggerRogueAdvNotify(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRIGGERROGUEADVNOTIFY_OFFSET))(type, arg);
		}

		static ::System::Boolean IsInRogueForResultDisplay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORRESULTDISPLAY_OFFSET))();
		}

		static ::System::Boolean _IsOldRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISOLDROGUE_OFFSET))();
		}

		static ::RPG::Client::AvatarData* GetDisplayAvatarDataByPlayerData(::System::UInt32 realID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYAVATARDATABYPLAYERDATA_OFFSET))(realID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAllPickedAvatars(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARS_OFFSET))(subMode);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAllPickedAvatarsByLineupType(::Enum_3_63C076C405BE0674_2 lineupType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETALLPICKEDAVATARSBYLINEUPTYPE_OFFSET))(lineupType);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetCurModeAllPickedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURMODEALLPICKEDAVATARS_OFFSET))();
		}

		static ::System::Boolean IsRogueTeamLineupType(::Enum_3_63C076C405BE0674_2 lineupType)
		{
			return ((::System::Boolean(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUETEAMLINEUPTYPE_OFFSET))(lineupType);
		}

		static ::RPG::GameCore::RogueSubMode _ConvertLineupType2SubMode(::Enum_3_63C076C405BE0674_2 lineupType)
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CONVERTLINEUPTYPE2SUBMODE_OFFSET))(lineupType);
		}

		static ::RPG::Client::RogueLogTag GetLogTagBySubMode(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::RPG::Client::RogueLogTag(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETLOGTAGBYSUBMODE_OFFSET))(subMode);
		}

		static ::System::Void Log(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_OFFSET))(tag, msg);
		}

		static ::System::Void Log_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOG_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogWarning(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_OFFSET))(tag, msg);
		}

		static ::System::Void LogWarning_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGWARNING_1_OFFSET))(tag, format, args);
		}

		static ::System::Void LogError(::RPG::Client::RogueLogTag tag, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_OFFSET))(tag, msg);
		}

		static ::System::Void LogError_1(::RPG::Client::RogueLogTag tag, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_LOGERROR_1_OFFSET))(tag, format, args);
		}

		static ::System::Void Assert(::RPG::Client::RogueLogTag tag, ::System::Boolean condition, ::System::String* msg)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_OFFSET))(tag, condition, msg);
		}

		static ::System::Void Assert_1(::RPG::Client::RogueLogTag tag, ::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::RPG::Client::RogueLogTag, ::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ASSERT_1_OFFSET))(tag, condition, format, args);
		}

		static ::System::String* _AppendRogueLogTag(::RPG::Client::RogueLogTag tag, ::System::String* str)
		{
			return ((::System::String*(*)(::RPG::Client::RogueLogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__APPENDROGUELOGTAG_OFFSET))(tag, str);
		}

		static ::System::Boolean get_IsShowUIDebugInfo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GET_ISSHOWUIDEBUGINFO_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetCurRogueRoomSections()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURROGUEROOMSECTIONS_OFFSET))();
		}

		static ::System::Boolean IsInRogueForMapRotation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORMAPROTATION_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMapNPCNotFade()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMAPNPCNOTFADE_OFFSET))();
		}

		static ::System::Boolean IsInRogueForPlayerReturn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEFORPLAYERRETURN_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForAudioNotLockNewTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORAUDIONOTLOCKNEWTARGET_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForDialogueEvent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORDIALOGUEEVENT_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSION_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForUseFood()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORUSEFOOD_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForMissionPanelPrompt()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORMISSIONPANELPROMPT_OFFSET))();
		}

		static ::System::Boolean IsInRogueModeForBattleCollegeTab()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEMODEFORBATTLECOLLEGETAB_OFFSET))();
		}

		static ::System::Boolean IsInMissionReplay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINMISSIONREPLAY_OFFSET))();
		}

		static ::System::Boolean IsRoguePlane(::System::UInt32 mazePlaneID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISROGUEPLANE_OFFSET))(mazePlaneID);
		}

		static ::System::Boolean _CheckRoguePlaneType(::System::UInt32 mazePlaneID, ::RPG::GameCore::RogueSubPlaneType planeSubType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::RogueSubPlaneType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CHECKROGUEPLANETYPE_OFFSET))(mazePlaneID, planeSubType);
		}

		static ::System::Boolean CanUseFoodInRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_CANUSEFOODINROGUE_OFFSET))();
		}

		static ::System::Boolean _CanUseFoodInSimulatedRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CANUSEFOODINSIMULATEDROGUE_OFFSET))();
		}

		static ::System::Boolean _CanUseFoodInRogueTourn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__CANUSEFOODINROGUETOURN_OFFSET))();
		}

		static ::RPG::GameCore::RogueSubMode GetCurRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETCURROGUESUBMODE_OFFSET))();
		}

		static ::System::Boolean IsDLCSubMode(::RPG::GameCore::RogueSubMode subMode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISDLCSUBMODE_OFFSET))(subMode);
		}

		static ::System::Boolean _IsInRogue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISINROGUE_OFFSET))();
		}

		static ::System::Boolean IsInSimulatedRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINSIMULATEDROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInRogueEndlessMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINROGUEENDLESSMODE_OFFSET))();
		}

		static ::System::Boolean IsInChessRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINCHESSROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInArcadeRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINARCADEROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInTournRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINTOURNROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInRelicRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINRELICROGUEMODE_OFFSET))();
		}

		static ::System::Boolean IsInMagicRogueMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_ISINMAGICROGUEMODE_OFFSET))();
		}

		static ::System::Boolean _IsSimulatedRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISSIMULATEDROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsChessRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISCHESSROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsInArcadeRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISINARCADEROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsTournRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISTOURNROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsRelicRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISRELICROGUEMODE_OFFSET))(mode);
		}

		static ::System::Boolean _IsMagicRogueMode(::RPG::GameCore::GameModeType mode)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__ISMAGICROGUEMODE_OFFSET))(mode);
		}

		static ::RPG::Client::IRogueMiracleLegacyDisplayRow* GetRogueMiracleDisplayByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMIRACLEDISPLAYBYMIRACLEID_OFFSET))(miracleID);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDrop(::RPG::GameCore::NPCComponent* npcComponent)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROP_OFFSET))(npcComponent);
		}

		static ::Il2CppArray<::System::UInt32>* GetRogueMonsterExtraDropByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPBYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetRogueMonsterExtraDropItemConfigByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMCONFIGBYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRogueMonsterExtraDropItemDisplayDataByEliteDropID(::System::UInt32 eliteDropID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTEREXTRADROPITEMDISPLAYDATABYELITEDROPID_OFFSET))(eliteDropID);
		}

		static ::System::Boolean TryOverrideBattleLoseRecommendLevel(::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDEBATTLELOSERECOMMENDLEVEL_OFFSET))(level);
		}

		static ::System::Boolean TryOverrideNPCMonsterLevel(::RPG::GameCore::NPCComponent* npcComp, ::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERLEVEL_OFFSET))(npcComp, level);
		}

		static ::System::Boolean TryOverrideNPCMonsterHardConfig(::RPG::GameCore::NPCComponent* npcComp, ::System::UInt32& hardLevelGroup, ::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERHARDCONFIG_OFFSET))(npcComp, hardLevelGroup, level);
		}

		static ::System::Boolean TryOverrideNPCMonsterWarningRatio(::System::Single& monsterWarningRatio)
		{
			return ((::System::Boolean(*)(::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_TRYOVERRIDENPCMONSTERWARNINGRATIO_OFFSET))(monsterWarningRatio);
		}

		static ::RPG::GameCore::RogueMapRow* _GetCurSimulatedRogueMapConfigRow()
		{
			return ((::RPG::GameCore::RogueMapRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC__GETCURSIMULATEDROGUEMAPCONFIGROW_OFFSET))();
		}

		static ::System::UInt32 GetMonsterLevelByChessRogueCell(::RPG::Client::ChessRogueBoardCellDataItem* cellDataItem)
		{
			return ((::System::UInt32(*)(::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERLEVELBYCHESSROGUECELL_OFFSET))(cellDataItem);
		}

		static ::RPG::Client::MonsterData* GetDisplayMonsterDataByRogueMonsterGroupID(::System::UInt32 rogueMonsterGroupID)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETDISPLAYMONSTERDATABYROGUEMONSTERGROUPID_OFFSET))(rogueMonsterGroupID);
		}

		static ::System::UInt32 GetRogueMonsterIDByRogueMonsterGroupID(::System::UInt32 rogueMonsterGroupID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETROGUEMONSTERIDBYROGUEMONSTERGROUPID_OFFSET))(rogueMonsterGroupID);
		}

		static ::System::UInt32 GetEventIDByRogueMonsterID(::System::UInt32 rogueMonsterID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETEVENTIDBYROGUEMONSTERID_OFFSET))(rogueMonsterID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDListByEventID(::System::UInt32 eventID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMONSTERIDLISTBYEVENTID_OFFSET))(eventID);
		}

		static ::RPG::Client::MonsterData* GetMaxRankMonsterData(::System::Collections::Generic::List_1<::System::UInt32>* monsterIDList)
		{
			return ((::RPG::Client::MonsterData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESTATIC_GETMAXRANKMONSTERDATA_OFFSET))(monsterIDList);
		}
	};
}

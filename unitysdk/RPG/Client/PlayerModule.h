#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
#include "unitysdk/RPG/Client/PlayerLevelUpgradeData.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_02050905F189B085.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_21DCD4640D389503_32;
class Class_1_21DCD4640D389503_37;
class Class_1_46AE1E47FF3C5595;
class Class_1_535F870B1E025E7A;
class Class_1_A854D54E8183102C;
class Class_1_D17272E82AE804C2_714;
class Class_1_F138DBFC3396EA15_2;
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerData; }
namespace RPG::Client { class PlayerSettingData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERMODULE_ADDMEMBERTOTEAM_OFFSET UNITYSDK_OFFSET(0x12737AE0)
#define RPG_CLIENT_PLAYERMODULE_ADDSTATETOWAITINGQUEUE_OFFSET UNITYSDK_OFFSET(0x12736850)
#define RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFOWITHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x12737DB0)
#define RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFO_OFFSET UNITYSDK_OFFSET(0x12737D10)
#define RPG_CLIENT_PLAYERMODULE_GETGENDER_OFFSET UNITYSDK_OFFSET(0x12737CA0)
#define RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYNICKNAME_OFFSET UNITYSDK_OFFSET(0x12737160)
#define RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x12737240)
#define RPG_CLIENT_PLAYERMODULE_GET_ASSISTAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x12738610)
#define RPG_CLIENT_PLAYERMODULE_GET_DISPLAYAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1273D6C0)
#define RPG_CLIENT_PLAYERMODULE_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x12737080)
#define RPG_CLIENT_PLAYERMODULE_GET_LOGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x127370C0)
#define RPG_CLIENT_PLAYERMODULE_GET_MAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x12737120)
#define RPG_CLIENT_PLAYERMODULE_GET_MAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x12737100)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x127370A0)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERSECRETCHECKER_OFFSET UNITYSDK_OFFSET(0x12737140)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x127370E0)
#define RPG_CLIENT_PLAYERMODULE_GET_RENAMECD_OFFSET UNITYSDK_OFFSET(0x12737320)
#define RPG_CLIENT_PLAYERMODULE_INITLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x12736440)
#define RPG_CLIENT_PLAYERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x127375F0)
#define RPG_CLIENT_PLAYERMODULE_ISWORLDLEVELUNLOCKEDLOCAL_OFFSET UNITYSDK_OFFSET(0x12738030)
#define RPG_CLIENT_PLAYERMODULE_MODIFYASSISTAVATARS_OFFSET UNITYSDK_OFFSET(0x12738480)
#define RPG_CLIENT_PLAYERMODULE_ONENTERWORLD_OFFSET UNITYSDK_OFFSET(0x12736C30)
#define RPG_CLIENT_PLAYERMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x12737A10)
#define RPG_CLIENT_PLAYERMODULE_POPLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x127369F0)
#define RPG_CLIENT_PLAYERMODULE_PRINTLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x12736D10)
#define RPG_CLIENT_PLAYERMODULE_SETGENDER_OFFSET UNITYSDK_OFFSET(0x12737BF0)
#define RPG_CLIENT_PLAYERMODULE_SETNICKNAME_OFFSET UNITYSDK_OFFSET(0x12737B30)
#define RPG_CLIENT_PLAYERMODULE_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x12737090)
#define RPG_CLIENT_PLAYERMODULE_SET_LOGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x127370D0)
#define RPG_CLIENT_PLAYERMODULE_SET_MAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x12737130)
#define RPG_CLIENT_PLAYERMODULE_SET_MAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x12737110)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x127370B0)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERSECRETCHECKER_OFFSET UNITYSDK_OFFSET(0x12737150)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x127370F0)
#define RPG_CLIENT_PLAYERMODULE_TRYPUSHLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x127365D0)
#define RPG_CLIENT_PLAYERMODULE_UPLOADPLAYEROBJDATA_OFFSET UNITYSDK_OFFSET(0x12738440)
#define RPG_CLIENT_PLAYERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12738D00)
#define RPG_CLIENT_PLAYERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x127386F0)
#define RPG_CLIENT_PLAYERMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1273DD60)
#define RPG_CLIENT_PLAYERMODULE__CLEARLEVELUPDATACACHE_OFFSET UNITYSDK_OFFSET(0x1273AB00)
#define RPG_CLIENT_PLAYERMODULE__CMDGETBASICINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x12738DB0)
#define RPG_CLIENT_PLAYERMODULE__CMDPLAYERGETTOKENSCRSP_OFFSET UNITYSDK_OFFSET(0x12739000)
#define RPG_CLIENT_PLAYERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1273DBF0)
#define RPG_CLIENT_PLAYERMODULE__GETAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1273D810)
#define RPG_CLIENT_PLAYERMODULE__GETINITGENDER_OFFSET UNITYSDK_OFFSET(0x1273B430)
#define RPG_CLIENT_PLAYERMODULE__HANDLELEVELUPANDADDEXP_OFFSET UNITYSDK_OFFSET(0x1273A780)
#define RPG_CLIENT_PLAYERMODULE__HANDLEPLAYERINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x1273D7A0)
#define RPG_CLIENT_PLAYERMODULE__INITMAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x12737880)
#define RPG_CLIENT_PLAYERMODULE__INITMAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x12737750)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYCHANGEPWD_OFFSET UNITYSDK_OFFSET(0x1273AE20)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYMTP_OFFSET UNITYSDK_OFFSET(0x1273AEB0)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYMUIP_OFFSET UNITYSDK_OFFSET(0x1273AF40)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYSQUEEZED_OFFSET UNITYSDK_OFFSET(0x1273AD80)
#define RPG_CLIENT_PLAYERMODULE__ONADVENTUREPHASEENTER_OFFSET UNITYSDK_OFFSET(0x1273CE10)
#define RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJDOWNLOADDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273D540)
#define RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJUPLOADSCRSP_OFFSET UNITYSDK_OFFSET(0x1273D630)
#define RPG_CLIENT_PLAYERMODULE__ONCMDDAILYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273C130)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDSCRCP_OFFSET UNITYSDK_OFFSET(0x1273BA70)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDTAKENLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1273BCA0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETSECRETKEYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1273B7B0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETVIDEOVERSIONKEYSCRSP_OFFSET UNITYSDK_OFFSET(0x1273B840)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERLOGINSCRSP_OFFSET UNITYSDK_OFFSET(0x12739B10)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSQUEEZEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273AB50)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273A1D0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETGENDERSCRSP_OFFSET UNITYSDK_OFFSET(0x1273B180)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETNICKNAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1273AFD0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETPLAYERINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1273B4B0)
#define RPG_CLIENT_PLAYERMODULE__ONGETPLAYERBOARDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1273C3A0)
#define RPG_CLIENT_PLAYERMODULE__ONGETPLAYERDETAILINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1273D400)
#define RPG_CLIENT_PLAYERMODULE__ONRESERVESTAMINAEXCHANGESCRSP_OFFSET UNITYSDK_OFFSET(0x1273B9D0)
#define RPG_CLIENT_PLAYERMODULE__ONSETASSISTAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1273CAE0)
#define RPG_CLIENT_PLAYERMODULE__ONSETDISPLAYAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1273C8C0)
#define RPG_CLIENT_PLAYERMODULE__ONSETGAMEPLAYBIRTHDAYSCRSP_OFFSET UNITYSDK_OFFSET(0x1273CD80)
#define RPG_CLIENT_PLAYERMODULE__ONSETHEADICONSCRSP_OFFSET UNITYSDK_OFFSET(0x1273C710)
#define RPG_CLIENT_PLAYERMODULE__ONSETISDISPLAYAVATARINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1273CD00)
#define RPG_CLIENT_PLAYERMODULE__ONSETPERSONALCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1273C7E0)
#define RPG_CLIENT_PLAYERMODULE__ONSETSIGNATURESCRSP_OFFSET UNITYSDK_OFFSET(0x1273C310)
#define RPG_CLIENT_PLAYERMODULE__ONSOCIALPLAYSETTINGINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273D350)
#define RPG_CLIENT_PLAYERMODULE__ONSTAMINAINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1273B8D0)
#define RPG_CLIENT_PLAYERMODULE__ONUPDATEPLAYERSETTINGSCRSP_OFFSET UNITYSDK_OFFSET(0x1273CED0)
#define RPG_CLIENT_PLAYERMODULE__REFRESHWEEKLYCOCOON_OFFSET UNITYSDK_OFFSET(0x1273C230)
#define RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERGETTOKENRSP_OFFSET UNITYSDK_OFFSET(0x12739520)
#define RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERLOGINSCRSP_OFFSET UNITYSDK_OFFSET(0x12739EE0)
#define RPG_CLIENT_PLAYERMODULE__SYNCPLAYERBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1273C410)
#define RPG_CLIENT_PLAYERMODULE__UPDATEASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x1273CB90)
#define RPG_CLIENT_PLAYERMODULE__UPDATEDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1273C940)
#define RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1273DD70)
#define RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1273DE00)
#define RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1273DEC0)
#define RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1273DE60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule_TypeDefinitionIndex = 61443;

	class PlayerModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__RENAMECD()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerModule_TypeDefinitionIndex)->GetStaticField(0x11940);
		}
		static ::System::UInt32* StaticGet__REQ_LOCAL_BOARDINFO_CD()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerModule_TypeDefinitionIndex)->GetStaticField(0x11944);
		}
		// static const ::System::String* _LUA_WORLD_LEVEUP_UP_DIALOG; // 0x0
		// static const ::System::String* _LUA_ADD_EXP_DIALOG; // 0x0
		::Class_1_535F870B1E025E7A* _PlayerSecretChecker_k__BackingField; // 0x10
		::RPG::Client::PlayerData* _PlayerData_k__BackingField; // 0x18
		::System::Collections::Generic::CacheLinkedList_1<::Struct_2_02050905F189B085>* waitingQueue; // 0x20
		::Class_1_A854D54E8183102C* _ObjData; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LogicStateType, ::Class_1_46AE1E47FF3C5595*>* allStates; // 0x30
		::RPG::Client::PlayerBoardInfo* _LocalPlayerBoardInfo; // 0x38
		::Class_1_46AE1E47FF3C5595* CurrentLogicState; // 0x40
		::RPG::Client::PlayerSettingData* _PlayerSettingData_k__BackingField; // 0x48
		::System::UInt32 _LastReqLocalBoardInfoTimeStamp; // 0x50
		::RPG::Client::PlayerLevelUpgradeData _LevelUpDataCache; // 0x54
		::System::UInt32 _LoginTimeStamp_k__BackingField; // 0x60
		::System::UInt32 _MaxWorldLevel_k__BackingField; // 0x64
		::System::UInt32 _MaxPlayerLevel_k__BackingField; // 0x68
		::System::Boolean _IsEneterWorld_k__BackingField; // 0x6C
		::System::Int64 _LastSetNickNameTimeStamp; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CCTOR_OFFSET))();
		}

		::System::Void initLogicState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_INITLOGICSTATE_OFFSET))(this);
		}

		::System::Boolean TryPushLogicState(::RPG::Client::LogicStateType logicStateType, ::System::Boolean isWaitWhenCanNotSet, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LogicStateType, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_TRYPUSHLOGICSTATE_OFFSET))(this, logicStateType, isWaitWhenCanNotSet, arguments);
		}

		::System::Void AddStateToWaitingQueue(::RPG::Client::LogicStateType logicStateType, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LogicStateType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ADDSTATETOWAITINGQUEUE_OFFSET))(this, logicStateType, arguments);
		}

		::System::Void PopLogicState(::RPG::Client::LogicStateType logicStateType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LogicStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_POPLOGICSTATE_OFFSET))(this, logicStateType);
		}

		::System::Void OnEnterWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ONENTERWORLD_OFFSET))(this);
		}

		::System::Void PrintLogicState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_PRINTLOGICSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsEneterWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ISENETERWORLD_OFFSET))(this);
		}

		::System::Void set_IsEneterWorld(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_ISENETERWORLD_OFFSET))(this, value);
		}

		::RPG::Client::PlayerData* get_PlayerData()
		{
			return ((::RPG::Client::PlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::PlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_LoginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_LOGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_LoginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_LOGINTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::PlayerSettingData* get_PlayerSettingData()
		{
			return ((::RPG::Client::PlayerSettingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERSETTINGDATA_OFFSET))(this);
		}

		::System::Void set_PlayerSettingData(::RPG::Client::PlayerSettingData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerSettingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERSETTINGDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxWorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_MAXWORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxWorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_MAXWORLDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_MAXPLAYERLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxPlayerLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_MAXPLAYERLEVEL_OFFSET))(this, value);
		}

		::Class_1_535F870B1E025E7A* get_PlayerSecretChecker()
		{
			return ((::Class_1_535F870B1E025E7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERSECRETCHECKER_OFFSET))(this);
		}

		::System::Void set_PlayerSecretChecker(::Class_1_535F870B1E025E7A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_535F870B1E025E7A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERSECRETCHECKER_OFFSET))(this, value);
		}

		::System::Boolean get_AllowModifyNickName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYNICKNAME_OFFSET))(this);
		}

		::System::Boolean get_AllowModifySignature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYSIGNATURE_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> get_RenameCD()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_RENAMECD_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void AddMemberToTeam(::System::UInt32 memberID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ADDMEMBERTOTEAM_OFFSET))(this, memberID);
		}

		::System::Void SetNickName(::System::String* name, ::System::Boolean isModify)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SETNICKNAME_OFFSET))(this, name, isModify);
		}

		::System::Void SetGender(::Enum_3_0A3761FE34514D6C_7 gender)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SETGENDER_OFFSET))(this, gender);
		}

		::RPG::GameCore::GenderType GetGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETGENDER_OFFSET))(this);
		}

		::RPG::Client::PlayerBoardInfo* GetDisplayLocalPlayerBoardInfo()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFO_OFFSET))(this);
		}

		::RPG::Client::PlayerBoardInfo* GetDisplayLocalPlayerBoardInfoWithCollection()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFOWITHCOLLECTION_OFFSET))(this);
		}

		::System::Boolean IsWorldLevelUnlockedLocal(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ISWORLDLEVELUNLOCKEDLOCAL_OFFSET))(this, level);
		}

		::System::Void UploadPlayerObjData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_UPLOADPLAYEROBJDATA_OFFSET))(this);
		}

		::System::Boolean ModifyAssistAvatars(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_MODIFYASSISTAVATARS_OFFSET))(this, avatarIDs);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetBasicInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CMDGETBASICINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdPlayerGetTokenScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CMDPLAYERGETTOKENSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerLoginScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERLOGINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _HandleLevelUpAndAddExp(::System::UInt32 oldLevel, ::System::UInt32 oldWorldLevel, ::System::UInt32 oldExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__HANDLELEVELUPANDADDEXP_OFFSET))(this, oldLevel, oldWorldLevel, oldExp);
		}

		::System::Void _OnCmdPlayerSqueezedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSQUEEZEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSetNicknameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETNICKNAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSetGenderScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETGENDERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSetPlayerInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETPLAYERINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetSecretKeyInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETSECRETKEYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetVideoVersionKeyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETVIDEOVERSIONKEYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnStaminaInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSTAMINAINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnReserveStaminaExchangeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONRESERVESTAMINAEXCHANGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetLevelRewardScRcp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDSCRCP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetLevelRewardTakenListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDTAKENLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDailyRefreshNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDDAILYREFRESHNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetSignatureScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETSIGNATURESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPlayerBoardDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONGETPLAYERBOARDDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetHeadIconScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETHEADICONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetPersonalCardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETPERSONALCARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetDisplayAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETDISPLAYAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetAssistAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETASSISTAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetIsDisplayAvatarInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETISDISPLAYAVATARINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetGameplayBirthdayScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETGAMEPLAYBIRTHDAYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAdventurePhaseEnter(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONADVENTUREPHASEENTER_OFFSET))(this, arg);
		}

		::System::Void _OnUpdatePlayerSettingScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONUPDATEPLAYERSETTINGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSocialPlaySettingInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSOCIALPLAYSETTINGINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPlayerDetailInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONGETPLAYERDETAILINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnClientObjDownloadDataScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJDOWNLOADDATASCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnClientObjUploadScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJUPLOADSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _KickOffBySqueezed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYSQUEEZED_OFFSET))(this);
		}

		::System::Void _KickOffByMTP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYMTP_OFFSET))(this);
		}

		::System::Void _KickOffByChangePwd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYCHANGEPWD_OFFSET))(this);
		}

		::System::Void _KickOffByMUIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYMUIP_OFFSET))(this);
		}

		::RPG::GameCore::GenderType _GetInitGender(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__GETINITGENDER_OFFSET))(this, multiPathAvatarType);
		}

		::System::Void _InitMaxWorldLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__INITMAXWORLDLEVEL_OFFSET))(this);
		}

		::System::Void _InitMaxPlayerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__INITMAXPLAYERLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshWeeklyCocoon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__REFRESHWEEKLYCOCOON_OFFSET))(this);
		}

		::System::Void _ClearLevelUpDataCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CLEARLEVELUPDATACACHE_OFFSET))(this);
		}

		::System::Void _SyncPlayerBoardData(::Class_1_21DCD4640D389503_37* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SYNCPLAYERBOARDDATA_OFFSET))(this, rsp);
		}

		::System::Void _UpdateDisplayAvatarList(::Il2CppArray<::Class_1_D17272E82AE804C2_714*>* displayAvatarDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D17272E82AE804C2_714*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__UPDATEDISPLAYAVATARLIST_OFFSET))(this, displayAvatarDatas);
		}

		::System::Void _UpdateAssistAvatar(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__UPDATEASSISTAVATAR_OFFSET))(this, avatarIDs);
		}

		::System::Void _SDKReportPlayerGetTokenRsp(::Class_1_F138DBFC3396EA15_2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERGETTOKENRSP_OFFSET))(this, rsp);
		}

		::System::Void _SDKReportPlayerLoginScRsp(::Class_1_21DCD4640D389503_32* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERLOGINSCRSP_OFFSET))(this, rsp);
		}

		::System::Void _HandlePlayerInBlackList(::Class_1_F138DBFC3396EA15_2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__HANDLEPLAYERINBLACKLIST_OFFSET))(this, rsp);
		}

		::System::String* _GetAppealUrl(::System::String* authkey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__GETAPPEALURL_OFFSET))(this, authkey);
		}

		::System::UInt32 get_DisplayAvatarMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_DISPLAYAVATARMAXCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AssistAvatarMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ASSISTAVATARMAXCOUNT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_87EABE642B751E4E;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class FuncUnlockData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class FuncEntranceListConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SYSTEMOPENMODULE_ADDHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0x184C5770)
#define RPG_CLIENT_SYSTEMOPENMODULE_CANSHOW_OFFSET UNITYSDK_OFFSET(0x184C8A70)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKCANSHOW_OFFSET UNITYSDK_OFFSET(0x184C7A20)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKISCANSHOWWHEEL_OFFSET UNITYSDK_OFFSET(0x184C6170)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKISOPEN_OFFSET UNITYSDK_OFFSET(0x184C8760)
#define RPG_CLIENT_SYSTEMOPENMODULE_CLEARHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0x184C56F0)
#define RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_1_OFFSET UNITYSDK_OFFSET(0x184C9860)
#define RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_OFFSET UNITYSDK_OFFSET(0x184C96B0)
#define RPG_CLIENT_SYSTEMOPENMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184C70C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_FORCEREFRESHFUNCENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0x184C7450)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETCONDITIONCHECKERBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0x184C9140)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETCURRENTFUNCTIONENTRANCELISTID_OFFSET UNITYSDK_OFFSET(0x184C8800)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETDESKTOPAPPLIST_OFFSET UNITYSDK_OFFSET(0x184C7B10)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETDOCKAPPLIST_OFFSET UNITYSDK_OFFSET(0x184C7DC0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETEXITFUNCENTRANCES_OFFSET UNITYSDK_OFFSET(0x184C85F0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONDATA_OFFSET UNITYSDK_OFFSET(0x184C7330)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x184C73C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x184C7E40)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETISNOTOPENREASON_OFFSET UNITYSDK_OFFSET(0x184C8C80)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x184C8420)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTTOPHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x184C82A0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_ACTIONHINTSET_OFFSET UNITYSDK_OFFSET(0x184C6520)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDFUNCENTRANCEIDS_OFFSET UNITYSDK_OFFSET(0x184CA1C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDREDDOTKEYS_OFFSET UNITYSDK_OFFSET(0x184CA4B0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BLOCKEDHUDTYPES_OFFSET UNITYSDK_OFFSET(0x184C6500)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_REDEEMCODEENABLED_OFFSET UNITYSDK_OFFSET(0x184CA740)
#define RPG_CLIENT_SYSTEMOPENMODULE_HASGOTOTYPE_OFFSET UNITYSDK_OFFSET(0x184C86C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x184C68A0)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISCOMMUNICATIONRESTRICTED_OFFSET UNITYSDK_OFFSET(0x184C9280)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOIDVALID_OFFSET UNITYSDK_OFFSET(0x184C93E0)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOTYPEBLOCKED_OFFSET UNITYSDK_OFFSET(0x184C6330)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISMODESHOWCHAT_OFFSET UNITYSDK_OFFSET(0x184C8640)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISOPEN_OFFSET UNITYSDK_OFFSET(0x184C8930)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x184C8990)
#define RPG_CLIENT_SYSTEMOPENMODULE_OVERRIDEFUNCENTRANCELISTID_OFFSET UNITYSDK_OFFSET(0x184C9B40)
#define RPG_CLIENT_SYSTEMOPENMODULE_REMOVEHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0x184C5D80)
#define RPG_CLIENT_SYSTEMOPENMODULE_RESETFUNCENTRANCELISTIDTODEFAULT_OFFSET UNITYSDK_OFFSET(0x184C9BA0)
#define RPG_CLIENT_SYSTEMOPENMODULE_SET_ACTIONHINTSET_OFFSET UNITYSDK_OFFSET(0x184C6530)
#define RPG_CLIENT_SYSTEMOPENMODULE_SET_BLOCKEDHUDTYPES_OFFSET UNITYSDK_OFFSET(0x184C6510)
#define RPG_CLIENT_SYSTEMOPENMODULE_SKIPMAILEXPIRECHECK_OFFSET UNITYSDK_OFFSET(0x184C9B00)
#define RPG_CLIENT_SYSTEMOPENMODULE_TRYGETFUNCENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0x184C72A0)
#define RPG_CLIENT_SYSTEMOPENMODULE_UPDATEOPENSTATUS_OFFSET UNITYSDK_OFFSET(0x184C79A0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKEDDATA_OFFSET UNITYSDK_OFFSET(0x184C58F0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x184C5540)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x184C7530)
#define RPG_CLIENT_SYSTEMOPENMODULE__CLEARBLOCKEDDATA_OFFSET UNITYSDK_OFFSET(0x184C5F40)
#define RPG_CLIENT_SYSTEMOPENMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x184C6540)
#define RPG_CLIENT_SYSTEMOPENMODULE__DISPOSEBLOCK_OFFSET UNITYSDK_OFFSET(0x184C5490)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETENTRANCELISTCONFIG_OFFSET UNITYSDK_OFFSET(0x184C6390)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETMAINMISSIONTYPEREASON_OFFSET UNITYSDK_OFFSET(0x184C8F20)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETVALIDFUNCENTRANCEDATAS_OFFSET UNITYSDK_OFFSET(0x184C7B90)
#define RPG_CLIENT_SYSTEMOPENMODULE__ISFUNCENTRANCEVALID_OFFSET UNITYSDK_OFFSET(0x184C8130)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCENTRANCEDATACONFIG_OFFSET UNITYSDK_OFFSET(0x184C6BE0)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCTIONDATA_OFFSET UNITYSDK_OFFSET(0x184C6940)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCUNLOCKDATACONFIG_OFFSET UNITYSDK_OFFSET(0x184C6E90)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONBATTLEPASSCHANGED_OFFSET UNITYSDK_OFFSET(0x184C9E70)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONCLEARHUDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x184C56A0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFEATURECHANGED_OFFSET UNITYSDK_OFFSET(0x184C9F00)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x184C9BF0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x184C9C70)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONLEVELUP_OFFSET UNITYSDK_OFFSET(0x184C9CF0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONROGUEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x184C9DF0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x184C9F90)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONWORLDLEVELUP_OFFSET UNITYSDK_OFFSET(0x184C9D70)
#define RPG_CLIENT_SYSTEMOPENMODULE__UNINITBLOCK_OFFSET UNITYSDK_OFFSET(0x184C53F0)
#define RPG_CLIENT_SYSTEMOPENMODULE__UPDATEFUNCUNLOCKDATAS_OFFSET UNITYSDK_OFFSET(0x184CA020)
#define RPG_CLIENT_SYSTEMOPENMODULE__UPDATEUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x184C74E0)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184CA840)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x184CA7C0)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x184CA850)

namespace RPG::Client
{
	inline static constexpr unsigned int SystemOpenModule_TypeDefinitionIndex = 63641;

	class SystemOpenModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_87EABE642B751E4E*>* _FunctionDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BlockHudTemplateIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GotoType>* _BlockedGotoTypes; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _BlockedActions; // 0x28
		::Il2CppArray<::System::UInt32>* _ExitFuncEntranceList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PsBannedFuncEntranceIDs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>* _ConditionCheckers; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FuncEntranceData*>* _FuncEntranceDatas; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _BannedRedDotKeys; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FuncUnlockData*>* _FuncUnlockDatas; // 0x58
		::Il2CppArray<::System::UInt32>* _LeftHudFuncEntranceList; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* _BlockedHudTypes_k__BackingField; // 0x68
		::System::Boolean IsUnlockAllFunc; // 0x70
		::System::UInt32 _ActionHintSet_k__BackingField; // 0x74
		::System::Nullable_1<::System::UInt32> _OverrideFuncEntranceListID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _UnInitBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UNINITBLOCK_OFFSET))(this);
		}

		::System::Void _DisposeBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__DISPOSEBLOCK_OFFSET))(this);
		}

		::System::Void _AddBlockNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnClearHudTemplate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONCLEARHUDTEMPLATE_OFFSET))(this, a1);
		}

		::System::Void AddHudTemplateBlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ADDHUDTEMPLATEBLOCK_OFFSET))(this, a1);
		}

		::System::Void RemoveHudTemplateBlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_REMOVEHUDTEMPLATEBLOCK_OFFSET))(this, a1);
		}

		::System::Void ClearHudTemplateBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CLEARHUDTEMPLATEBLOCK_OFFSET))(this);
		}

		::System::Boolean CheckIsCanShowWheel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKISCANSHOWWHEEL_OFFSET))(this);
		}

		::System::Boolean IsGotoTypeBlocked(::RPG::GameCore::GotoType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOTYPEBLOCKED_OFFSET))(this, a1);
		}

		::System::Void _AddBlockedData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKEDDATA_OFFSET))(this, a1);
		}

		::System::Void _ClearBlockedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__CLEARBLOCKEDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* get_BlockedHudTypes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BLOCKEDHUDTYPES_OFFSET))(this);
		}

		::System::Void set_BlockedHudTypes(::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SET_BLOCKEDHUDTYPES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionHintSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_ACTIONHINTSET_OFFSET))(this);
		}

		::System::Void set_ActionHintSet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SET_ACTIONHINTSET_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FuncEntranceData* TryGetFuncEntranceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FuncEntranceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_TRYGETFUNCENTRANCEDATA_OFFSET))(this, a1);
		}

		::Class_1_87EABE642B751E4E* GetFunctionData(::System::UInt32 a1)
		{
			return ((::Class_1_87EABE642B751E4E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FuncUnlockData* GetFunctionUnlockData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FuncUnlockData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONUNLOCKDATA_OFFSET))(this, a1);
		}

		::System::Void ForceRefreshFuncEntranceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_FORCEREFRESHFUNCENTRANCEDATA_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void UpdateOpenStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_UPDATEOPENSTATUS_OFFSET))(this);
		}

		::System::Boolean CheckCanShow(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKCANSHOW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetDesktopAppList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETDESKTOPAPPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetDockAppList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETDOCKAPPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* GetLeftTopHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTTOPHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetLeftHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetExitFuncEntrances()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETEXITFUNCENTRANCES_OFFSET))(this);
		}

		::System::Boolean IsModeShowChat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISMODESHOWCHAT_OFFSET))(this);
		}

		::System::Boolean HasGotoType(::RPG::GameCore::GotoType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_HASGOTOTYPE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKISOPEN_OFFSET))(this, a1);
		}

		static ::System::UInt32 GetCurrentFunctionEntranceListID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETCURRENTFUNCTIONENTRANCELISTID_OFFSET))();
		}

		static ::System::Boolean IsOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISOPEN_OFFSET))(a1);
		}

		static ::System::String* GetIsNotOpenReason(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETISNOTOPENREASON_OFFSET))(a1);
		}

		static ::System::Boolean IsUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean CanShow(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CANSHOW_OFFSET))(a1);
		}

		static ::System::Boolean IsCommunicationRestricted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISCOMMUNICATIONRESTRICTED_OFFSET))();
		}

		::System::Boolean IsGotoIDValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOIDVALID_OFFSET))(this, a1);
		}

		::RPG::Client::ConditionChecker* GetConditionCheckerByUnlockID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ConditionChecker*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETCONDITIONCHECKERBYUNLOCKID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ConditionPrepared(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ConditionPrepared_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_1_OFFSET))(this, a1);
		}

		static ::System::Boolean SkipMailExpireCheck()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SKIPMAILEXPIRECHECK_OFFSET))();
		}

		::System::Void OverrideFuncEntranceListID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_OVERRIDEFUNCENTRANCELISTID_OFFSET))(this, a1);
		}

		::System::Void ResetFuncEntranceListIDToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_RESETFUNCENTRANCELISTIDTODEFAULT_OFFSET))(this);
		}

		static ::System::String* _GetMainMissionTypeReason(::System::UInt32 a1, ::RPG::Client::TextID a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETMAINMISSIONTYPEREASON_OFFSET))(a1, a2);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONLEVELUP_OFFSET))(this, a1);
		}

		::System::Void _OnWorldLevelUp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONWORLDLEVELUP_OFFSET))(this, a1);
		}

		::System::Void _OnRogueDataRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONROGUEDATAREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnBattlePassChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONBATTLEPASSCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnFeatureChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFEATURECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _UpdateUnlockStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UPDATEUNLOCKSTATUS_OFFSET))(this, a1);
		}

		::System::Void _LoadFunctionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCTIONDATA_OFFSET))(this);
		}

		::System::Void _LoadFuncEntranceDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCENTRANCEDATACONFIG_OFFSET))(this);
		}

		::System::Void _LoadFuncUnlockDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCUNLOCKDATACONFIG_OFFSET))(this);
		}

		::System::Void _UpdateFuncUnlockDatas(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UPDATEFUNCUNLOCKDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* _GetValidFuncEntranceDatas(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETVALIDFUNCENTRANCEDATAS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FuncEntranceListConfigRow* _GetEntranceListConfig()
		{
			return ((::RPG::GameCore::FuncEntranceListConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETENTRANCELISTCONFIG_OFFSET))(this);
		}

		::System::Boolean _IsFuncEntranceValid(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ISFUNCENTRANCEVALID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BannedFuncEntranceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDFUNCENTRANCEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_BannedRedDotKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDREDDOTKEYS_OFFSET))(this);
		}

		::System::Boolean get_RedeemCodeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_REDEEMCODEENABLED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}

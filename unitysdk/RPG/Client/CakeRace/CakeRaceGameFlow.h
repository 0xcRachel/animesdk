#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceGameFlow_InitParameters.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_0D4B763E40BF8CFF;
class Class_1_43BD383C98B4C0C5_133;
class Class_1_791CB467786D8BD6;
class Class_1_A9010BD7FDF68FFC;
class Class_1_C6871D0DAD2A840E;
class Class_2_9656056B501DC5E8;
class Class_2_A8371512CE517879;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceLobby; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x15FDCEC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x15FDDEE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x15FDCEA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x15FDCDE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x15FDCE40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x15FDCE20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x15FE1B60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15FDCDD0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x15FDCE00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x15FDE190)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x15FDD530)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x15FDCEB0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x15FDCDF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x15FDCE30)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x15FE1B70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x15FDCE10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x15FDDF60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x15FDDDA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x15FE1A40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDCFC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x15FE11F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET UNITYSDK_OFFSET(0x15FE0370)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x15FE0A70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x15FDE7D0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x15FDFEE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x15FE1F40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x15FDF460)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FE21B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x15FDEF80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x15FDF5C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x15FDF120)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x15FDF260)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x15FDF1C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x15FDFCF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x15FDF6F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET UNITYSDK_OFFSET(0x15FDF9C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x15FDF3C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FE0E00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET UNITYSDK_OFFSET(0x15FDEDB0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET UNITYSDK_OFFSET(0x15FE00D0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x15FDE6B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x15FE14E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET UNITYSDK_OFFSET(0x15FE26F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x15FE1250)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x15FE1CF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x15FE2060)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x15FE1C40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x15FE1120)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x15FE1EF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x15FE1940)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FE2160)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x15FE1630)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x15FE1990)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x15FE1680)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x15FE1820)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x15FE1750)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x15FE1BE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x15FE19E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET UNITYSDK_OFFSET(0x15FE1B80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x15FE1870)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15FE2620)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET UNITYSDK_OFFSET(0x15FE15E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0x15FE1C90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x15FDD080)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x15FDDC50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0x15FE1E50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET UNITYSDK_OFFSET(0x15FDE360)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET UNITYSDK_OFFSET(0x15FE2AE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET UNITYSDK_OFFSET(0x15FE2A70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET UNITYSDK_OFFSET(0x15FE2910)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET UNITYSDK_OFFSET(0x15FE2980)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET UNITYSDK_OFFSET(0x15FE2A00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x15FE2D50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x15FE2CF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x15FE2E50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0x15FE2DF0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow_TypeDefinitionIndex = 70205;

	class CakeRaceGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::Class_1_0D4B763E40BF8CFF* _GameplayManager_k__BackingField; // 0x40
		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _InitParams; // 0x48
		::Class_1_C6871D0DAD2A840E* _BGMState_k__BackingField; // 0x58
		::Class_1_A9010BD7FDF68FFC* _CommandBuilder_k__BackingField; // 0x60
		::Class_2_9656056B501DC5E8* _BubbleGuessPerformance; // 0x68
		::Class_1_791CB467786D8BD6* _UIManager_k__BackingField; // 0x70
		::Class_2_A8371512CE517879* _LoanConfirmContext; // 0x78
		::RPG::Client::Promises::Promise* _RequestCakeRaceDataPromise; // 0x80
		::System::Boolean _IsForcePvp_k__BackingField; // 0x88

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::Class_1_A9010BD7FDF68FFC* get_CommandBuilder()
		{
			return ((::Class_1_A9010BD7FDF68FFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET))(this);
		}

		::System::Void set_CommandBuilder(::Class_1_A9010BD7FDF68FFC* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9010BD7FDF68FFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET))(this, value);
		}

		::Class_1_791CB467786D8BD6* get_UIManager()
		{
			return ((::Class_1_791CB467786D8BD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Void set_UIManager(::Class_1_791CB467786D8BD6* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_791CB467786D8BD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET))(this, value);
		}

		::Class_1_0D4B763E40BF8CFF* get_GameplayManager()
		{
			return ((::Class_1_0D4B763E40BF8CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET))(this);
		}

		::System::Void set_GameplayManager(::Class_1_0D4B763E40BF8CFF* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D4B763E40BF8CFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::Class_1_C6871D0DAD2A840E* get_BGMState()
		{
			return ((::Class_1_C6871D0DAD2A840E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::Class_1_C6871D0DAD2A840E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C6871D0DAD2A840E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET))(parameters);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _ParseParameters()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET))(this);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* TryGetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* GetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET))();
		}

		static ::System::Void TryGetGameFlowAndSendMessage(::RPG::Client::CakeRaceGameFlowMessage message, ::System::Object* param)
		{
			return ((::System::Void(*)(::RPG::Client::CakeRaceGameFlowMessage, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET))(message, param);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRequestCakeRaceData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_133* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_133*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, evt);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnShowUI(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleShowUI(::System::Object* obj)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET))(this, obj);
		}

		::System::Void _OnShowEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowEntrance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET))(this);
		}

		::System::Void _OnShowFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldSelect()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET))(this);
		}

		::System::Void _OnShowGuessTicketShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowGuessTicketShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::System::Void _OnShowFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFriendRank()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET))(this);
		}

		::System::Void _OnShowResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowResidentReward()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void _OnShowCatHandbook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowCatHandbook()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET))(this);
		}

		::System::Void _OnShowFieldInfo(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET))(this, fieldData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldInfo(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET))(this, fieldData);
		}

		::System::Void _OnShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET))(this, prepareData);
		}

		::System::Void _CreateLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsForcePvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET))(this);
		}

		::System::Void set_IsForcePvp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET))(this, value);
		}

		::System::Void _OnShowMatch(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET))(this, fieldData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowMatch(::RPG::Client::CakeRaceFieldData* fieldData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET))(this, fieldData);
		}

		::System::Void _OnShowInviteFriend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowInviteFriend()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET))(this);
		}

		::System::Void _OnJoinLobby(::System::UInt64 lobbyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET))(this, lobbyID);
		}

		::RPG::Client::Promises::IPromise* _HandleJoinLobby(::System::UInt64 lobbyID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET))(this, lobbyID);
		}

		::System::Void _OnStartGame(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET))(this, startGameData);
		}

		::RPG::Client::Promises::IPromise* _HandleStartGame(::RPG::Client::CakeRaceStartGameData* startGameData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET))(this, startGameData);
		}

		::System::Void _OnExitGame(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _HandleExitGame(::System::Object* obj)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET))(this, obj);
		}

		::RPG::Client::Promises::IPromise* _TryQuitLobby(::RPG::Client::CakeRaceLobby* lobby, ::RPG::Client::CakeRace::CakeRaceUIType targetUIType)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceLobby*, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET))(this, lobby, targetUIType);
		}

		::System::Void _OnPauseGame(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET))(this, isPause);
		}

		::RPG::Client::Promises::IPromise* _HandlePauseGame(::System::Boolean isPause)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET))(this, isPause);
		}

		::System::Void _OnGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET))(this, prepareData);
		}

		::System::Void _OnShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::System::Void _OnShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET))(this, prepareData);
		}

		::System::Void _OnEntered_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowEntrance_b__42_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET))(this);
		}

		::System::Void __HandleShowEntrance_b__42_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowFriendRank_b__48_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowCatHandbook_b__52_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleJoinLobby_b__68_0(::RPG::Client::BaseLobby* joinLobby)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET))(this, joinLobby);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}
	};
}

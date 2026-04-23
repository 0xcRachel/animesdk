#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/ParkourGameFlow_InitParameters.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class ParkourGameFlowContext; }
namespace RPG::Client { class ParkourLevel; }
namespace RPG::Client { class ParkourLevelGroup; }
namespace RPG::Client { class ParkourSettlement; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x162D0BB0)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET UNITYSDK_OFFSET(0x162D0AF0)
#define RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x162CFCE0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x162D0650)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x162CFCC0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0x162CFCB0)
#define RPG_CLIENT_PARKOURGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x162CFCA0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x162D02A0)
#define RPG_CLIENT_PARKOURGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x162CFFD0)
#define RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x162CFCD0)
#define RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x162CFD70)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x162D05F0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x162D0410)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x162D1B90)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x162D0FA0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x162D1400)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x162D18B0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x162D0CA0)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x162D1680)
#define RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0x162D11D0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x162CFD90)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYENTERGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x162D1DA0)
#define RPG_CLIENT_PARKOURGAMEFLOW__PLAYEXITGAMEAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x162D0460)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x162D0FF0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTERUI_OFFSET UNITYSDK_OFFSET(0x162D2000)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0x162D2080)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x162D1450)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x162D1910)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET UNITYSDK_OFFSET(0x162D20D0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x162D0CF0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET UNITYSDK_OFFSET(0x162D16D0)
#define RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET UNITYSDK_OFFSET(0x162D1220)
#define RPG_CLIENT_PARKOURGAMEFLOW__TRYENTERGAME_OFFSET UNITYSDK_OFFSET(0x162D1F30)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x162D26F0)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x162D2580)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x162D2520)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x162D2680)
#define RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0x162D2620)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow_TypeDefinitionIndex = 57040;

	class ParkourGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::ParkourGameFlowContext* _GameContext_k__BackingField; // 0x40
		::RPG::Client::ParkourGameFlow_InitParameters _InitParams; // 0x48

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsGaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_ISGAMING_OFFSET))(this);
		}

		::RPG::Client::ParkourGameFlowContext* get_GameContext()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void set_GameContext(::RPG::Client::ParkourGameFlowContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_SET_GAMECONTEXT_OFFSET))(this, value);
		}

		static ::RPG::Client::ParkourGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::ParkourGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATE_OFFSET))(parameters);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void EnterGame(::System::UInt32 levelID, ::System::UInt32 ballID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_ENTERGAME_OFFSET))(this, levelID, ballID);
		}

		::RPG::Client::ParkourGameFlowContext* CreateGameFlowContextForDev()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CREATEGAMEFLOWCONTEXTFORDEV_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Void _OnShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* levelGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWLEVELDETAILPAGE_OFFSET))(this, levelGroup);
		}

		::System::Void _OnShowBallDetailPage(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWBALLDETAILPAGE_OFFSET))(this, level);
		}

		::System::Void _OnShowSettlementPage(::RPG::Client::ParkourSettlement* settlement)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWSETTLEMENTPAGE_OFFSET))(this, settlement);
		}

		::System::Void _OnShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _OnShowPauseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWPAUSEDIALOG_OFFSET))(this);
		}

		::System::Void _OnShowGameMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONSHOWGAMEMAINPAGE_OFFSET))(this);
		}

		::System::Void _OnRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__ONRESTARTGAME_OFFSET))(this);
		}

		::System::Void _PlayEnterGameAudioEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PLAYENTERGAMEAUDIOEVENT_OFFSET))(this);
		}

		::System::Void _PlayExitGameAudioEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PLAYEXITGAMEAUDIOEVENT_OFFSET))(this);
		}

		::RPG::Client::ParkourGameFlow_InitParameters _ParseParameters()
		{
			return ((::RPG::Client::ParkourGameFlow_InitParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__PARSEPARAMETERS_OFFSET))(this);
		}

		::System::Boolean _TryEnterGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__TRYENTERGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowEnterUI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTERUI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowEntrancePageWhenEnter()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGEWHENENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPageWhenEnter(::System::UInt32 levelGroupID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGEWHENENTER_OFFSET))(this, levelGroupID);
		}

		::RPG::Client::Promises::IPromise* _ShowEntrancePage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWENTRANCEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLevelDetailPage(::RPG::Client::ParkourLevelGroup* levelGroup)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ParkourLevelGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWLEVELDETAILPAGE_OFFSET))(this, levelGroup);
		}

		::System::Void _ShowBallDetailPage(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWBALLDETAILPAGE_OFFSET))(this, level);
		}

		::System::Void _ShowSettlementPage(::RPG::Client::ParkourSettlement* settlement)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourSettlement*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWSETTLEMENTPAGE_OFFSET))(this, settlement);
		}

		::System::Void _ShowGameMainPage(::RPG::Client::ParkourGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWGAMEMAINPAGE_OFFSET))(this, context);
		}

		::System::Void _ShowPauseDialog(::RPG::Client::ParkourGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW__SHOWPAUSEDIALOG_OFFSET))(this, context);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}
	};
}

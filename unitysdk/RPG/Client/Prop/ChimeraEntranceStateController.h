#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

class Class_1_935412A31E52F0D6;
class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraEntranceConfig; }
namespace RPG::Client::Prop { class ChimeraEntranceRoundConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9B96F70)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x9B97C40)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_LOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0x9B97EC0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0x9B96FC0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x9B974E0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHCHIMERAVIEW_OFFSET UNITYSDK_OFFSET(0x9B98800)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHTALKPOP_OFFSET UNITYSDK_OFFSET(0x9B987B0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET UNITYSDK_OFFSET(0x9B98450)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_UNLOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0x9B97850)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x9B97BE0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B989C0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B989B0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET UNITYSDK_OFFSET(0x9B977F0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__FINDCURRENTROUND_OFFSET UNITYSDK_OFFSET(0x9B984B0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9B97A30)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__INITCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0x9B980A0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__LOADCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0x9B98300)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET UNITYSDK_OFFSET(0x9B98B60)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9B972E0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__REACTIVEROUNDCONFIGNODE_OFFSET UNITYSDK_OFFSET(0x9B97F20)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET UNITYSDK_OFFSET(0x9B98620)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0x9B98B80)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0x9B98B90)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9B98BA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceStateController_TypeDefinitionIndex = 61756;

	class ChimeraEntranceStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet__PreparationStateOfPage()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraEntranceStateController_TypeDefinitionIndex)->GetStaticField(0x413C0);
		}
		::RPG::Client::Prop::ChimeraEntranceConfig* _EntranceConfig; // 0x38
		::System::UInt32 _CurrentRoundID; // 0x40
		::RPG::Client::Prop::ChimeraEntranceRoundConfig* _CurrentRound; // 0x48
		::System::Collections::Generic::List_1<::Class_1_935412A31E52F0D6*>* _ChimeraEntranceModels; // 0x50
		::System::Action* _TalkPopRefreshCallback; // 0x58
		::Cinemachine::CinemachineVirtualCameraBase* _ActiveVirtualCamera; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CCTOR_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void _HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void InferAndSwitchToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET))(this);
		}

		::System::Void LoadRoundPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_LOADROUNDPREFAB_OFFSET))(this);
		}

		::System::Void UnloadRoundPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_UNLOADROUNDPREFAB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>* TryGetChimeraTalkInfoList(::System::Action* callback)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET))(this, callback);
		}

		::System::Void _PrepareEntrancePage(::System::UInt32 roundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET))(this, roundID);
		}

		::System::Void _SetupCameraBlend(::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET))(this, config);
		}

		::System::Void _ActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET))(this, vCam);
		}

		::System::Void _DeactivateCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET))(this, vCam);
		}

		::System::Void _FindCurrentRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__FINDCURRENTROUND_OFFSET))(this);
		}

		::System::Void _ReactiveRoundConfigNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__REACTIVEROUNDCONFIGNODE_OFFSET))(this);
		}

		::System::Void _InitChimeraEntranceModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__INITCHIMERAENTRANCEMODELS_OFFSET))(this);
		}

		::System::Void _LoadChimeraEntranceModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__LOADCHIMERAENTRANCEMODELS_OFFSET))(this);
		}

		::System::Void RefreshTalkPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHTALKPOP_OFFSET))(this);
		}

		::System::Void RefreshChimeraView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHCHIMERAVIEW_OFFSET))(this);
		}

		::System::Void _OnEnter_b__3_0(::RPG::Client::ChimeraWorkRoundData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET))(this, data);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}
	};
}

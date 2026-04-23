#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_LockFovReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class ZoomModuleConfig; }

#define RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET UNITYSDK_OFFSET(0x14EC30E0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x14EC2E10)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x14EC2D70)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x14EC5770)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0x14EC5790)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET UNITYSDK_OFFSET(0x14EC2F60)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_04C3EB7C71C7F711_OFFSET UNITYSDK_OFFSET(0x14EC4B60)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14EC49C0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14EC50F0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14EC48E0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x14EC4E90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14EC5620)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3E4C8C6D0565FEE4_OFFSET UNITYSDK_OFFSET(0x14EC4330)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x14EC5070)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x14EC4F30)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_69D7C9E34E9233CC_OFFSET UNITYSDK_OFFSET(0x14EC3B00)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x14EC39C0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_A64A73F9FA074B2D_OFFSET UNITYSDK_OFFSET(0x14EC5230)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x14EC5670)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14EC5720)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14EC5020)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EC4E40)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x14EC4FB0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x14EC55B0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_E85F8F1A5509AB03_OFFSET UNITYSDK_OFFSET(0x14EC5160)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14EC2D10)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x14EC3250)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET UNITYSDK_OFFSET(0x14EC2E60)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x14EC2C30)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x14EC5780)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0x14EC2DC0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET UNITYSDK_OFFSET(0x14EC3020)
#define RPG_CLIENT_RPGCINEMACHINEZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC57A0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x14EC5800)
#define RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x14EC57F0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14EC57D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineZoom_TypeDefinitionIndex = 64247;

	class RPGCinemachineZoom : public ::Cinemachine::CinemachineExtension
	{
	public:
		// static const ::System::Single Field_6_24; // 0x0
		::System::Single m_ZoomSensitive; // 0x28
		::System::Single m_Damping; // 0x2C
		::System::Nullable_1<::System::Single> Field_6_2; // 0x30
		::System::Single Field_6_3; // 0x38
		::System::Single Field_6_4; // 0x3C
		::System::Boolean Field_6_5; // 0x40
		::System::Single Field_6_6; // 0x44
		::System::Nullable_1<::System::Single> Field_6_7; // 0x48
		::System::Single Field_6_8; // 0x50
		::System::Single Field_6_9; // 0x54
		::System::Single Field_6_10; // 0x58
		::System::Nullable_1<::System::Single> Field_6_11; // 0x5C
		::System::Nullable_1<::System::Single> Field_6_12; // 0x64
		::Class_1_D27BF54F25500E5F* Field_6_13; // 0x70
		::RPG::Client::PipelineCameraEngine* Field_6_14; // 0x78
		::RPG::Client::CameraDataAndFlags* Field_6_15; // 0x80
		::RPG::Client::ZoomModuleConfig* Field_6_16; // 0x88
		::RPG::Client::Freelook3rdModuleConfig* Field_6_17; // 0x90
		::Cinemachine::CinemachineFreeLook* Field_6_18; // 0x98
		::System::Boolean Field_6_19; // 0xA0
		::UnityEngine::Vector3 Field_6_20; // 0xA4
		::System::Single Field_6_21; // 0xB0
		::System::Int32 Field_6_22; // 0xB4
		::System::Single Field_6_23; // 0xB8
		::System::Single Field_6_25; // 0xBC
		::System::Single Field_6_26; // 0xC0
		::System::Single Field_6_27; // 0xC4
		::System::Boolean Field_6_28; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM__CTOR_OFFSET))(this);
		}

		::System::Void ResetZoomDistanceImmediately(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::System::Single> a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET))(this);
		}

		::System::Void EnableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET))(this);
		}

		::System::Void ReloadModuleConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET))(this);
		}

		::System::Void LockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET))(this, a1);
		}

		::System::Void UnlockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_6_69D7C9E34E9233CC(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_69D7C9E34E9233CC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_3E4C8C6D0565FEE4(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3E4C8C6D0565FEE4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_6_A64A73F9FA074B2D(::RPG::Client::Freelook3rdModuleConfig* a1, ::RPG::Client::CameraDataAndFlags* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Freelook3rdModuleConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_A64A73F9FA074B2D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E85F8F1A5509AB03(::Cinemachine::CameraState& a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::RPG::Client::CameraDataAndFlags*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_E85F8F1A5509AB03_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_6_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_1_OFFSET))(this);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_6_AA972BE565DAF9E3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AA972BE565DAF9E3_OFFSET))(this);
		}

		::System::Void Method_6_04C3EB7C71C7F711()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_04C3EB7C71C7F711_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_6_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Boolean Method_6_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Single Method_6_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_6_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_6_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Single Method_6_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3422201382CE593B_OFFSET))(this);
		}

		::System::Boolean get_EnableZoomChangeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET))(this);
		}

		::System::Void set_EnableZoomChangeData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET))(this, a1);
		}

		::System::Single get_FieldOfViewRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Single __iFixBaseProxy_GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}

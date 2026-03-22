#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FABRIK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoBodyControlIK_Class_1_B96D9B71B2B5BC28; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOBODYCONTROLIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x977C1C0)
#define RPG_CLIENT_MONOBODYCONTROLIK_METHOD_6_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x977CB40)
#define RPG_CLIENT_MONOBODYCONTROLIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x977C1D0)
#define RPG_CLIENT_MONOBODYCONTROLIK_RESETEFFECTORTARGET_OFFSET UNITYSDK_OFFSET(0x977D0A0)
#define RPG_CLIENT_MONOBODYCONTROLIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x977C150)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETAPPLYEFFECTORROTATION_OFFSET UNITYSDK_OFFSET(0x977CC80)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETEFFECTORTARGET_OFFSET UNITYSDK_OFFSET(0x977CCD0)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETFORCEUSEEFFECTOR_OFFSET UNITYSDK_OFFSET(0x977D160)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETSPINENUM_OFFSET UNITYSDK_OFFSET(0x977CAE0)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETTIPBONE_OFFSET UNITYSDK_OFFSET(0x977CC30)
#define RPG_CLIENT_MONOBODYCONTROLIK_STOPTRACEEFFECTOR_OFFSET UNITYSDK_OFFSET(0x977D3D0)
#define RPG_CLIENT_MONOBODYCONTROLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x977D460)
#define RPG_CLIENT_MONOBODYCONTROLIK___IFIXBASEPROXY_PROCESS_OFFSET UNITYSDK_OFFSET(0x977D4D0)
#define RPG_CLIENT_MONOBODYCONTROLIK___IFIXBASEPROXY_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x977D4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_TypeDefinitionIndex = 54392;

	class MonoBodyControlIK : public ::RPG::Client::FABRIK
	{
	public:
		::System::Boolean Field_6_0; // 0x60
		::UnityEngine::Transform* Field_6_1; // 0x68
		::System::Nullable_1<::UnityEngine::Vector3> Field_6_2; // 0x70
		::System::Nullable_1<::UnityEngine::Quaternion> Field_6_3; // 0x80
		::RPG::Client::MonoBodyControlIK_Class_1_B96D9B71B2B5BC28* Field_6_4; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK__CTOR_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void SetSpineNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETSPINENUM_OFFSET))(this, a1);
		}

		::System::Void SetTipBone(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETTIPBONE_OFFSET))(this, a1);
		}

		::System::Void SetApplyEffectorRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETAPPLYEFFECTORROTATION_OFFSET))(this, a1);
		}

		::System::Void SetEffectorTarget(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETEFFECTORTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetEffectorTarget(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_RESETEFFECTORTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetForceUseEffector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETFORCEUSEEFFECTOR_OFFSET))(this);
		}

		::System::Void StopTraceEffector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_STOPTRACEEFFECTOR_OFFSET))(this);
		}

		::System::Void Method_6_C1D3BDE2A17F5C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_METHOD_6_C1D3BDE2A17F5C9D_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeInit(::RPG::Client::AttachPointMapping* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK___IFIXBASEPROXY_SAFEINIT_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_Process(::System::Single P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK___IFIXBASEPROXY_PROCESS_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/EnvironmentSyetem/EnvSysAdjustLevelParam.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xA62A0C0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_17AB97AE7444593C_OFFSET UNITYSDK_OFFSET(0xA629980)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA629020)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xA62A2B0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_F373AA721E5B82FD_OFFSET UNITYSDK_OFFSET(0xA6290C0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA628F60)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA629800)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA629870)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA62A230)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA62A280)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA62A290)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA62A2A0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysAdjustLevelBehaviour_TypeDefinitionIndex = 38457;

	class EnviroSysAdjustLevelBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam OrignEnvSysAdjustLevelParameter; // 0x18
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam EnvSysAdjustLevelParameter; // 0x68
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_06330CD58CB602B6_OFFSET))(this);
		}

		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam Method_3_F373AA721E5B82FD()
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_F373AA721E5B82FD_OFFSET))(this);
		}

		::System::Void Method_3_17AB97AE7444593C(::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_17AB97AE7444593C_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void Method_3_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}

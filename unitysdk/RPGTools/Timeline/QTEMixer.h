#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/QTEMixer_QTEState.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_36264895A759B0FF;
class Class_1_4B703F2764047929;
namespace RPGTools::Timeline { class QTEData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_0EB2CD34D2D5AB0D_OFFSET UNITYSDK_OFFSET(0xA65D980)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_1D9AD08B174D2098_OFFSET UNITYSDK_OFFSET(0xA65E080)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_3F5DC960A2A68BBD_OFFSET UNITYSDK_OFFSET(0xA65D520)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xA65D470)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_B79D0665B51E930B_OFFSET UNITYSDK_OFFSET(0xA65D7F0)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_CBBFB9A6CF88C9DD_OFFSET UNITYSDK_OFFSET(0xA65C670)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA65D390)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA65CB50)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA65D110)
#define RPGTOOLS_TIMELINE_QTEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xA65E110)
#define RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA65E2A0)
#define RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA65E2B0)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET UNITYSDK_OFFSET(0xA65E120)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET UNITYSDK_OFFSET(0xA65E1E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEMixer_TypeDefinitionIndex = 38129;

	class QTEMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::QTEData* _QTEData; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::Class_1_36264895A759B0FF* _DirectorState; // 0x20
		::Class_1_4B703F2764047929* _EffectMgr; // 0x28
		::UnityEngine::Coroutine* _FailScreenTransferCoroutine; // 0x30
		::RPGTools::Timeline::QTEMixer_QTEState _State; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_CBBFB9A6CF88C9DD(::RPGTools::Timeline::QTEData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::QTEData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_CBBFB9A6CF88C9DD_OFFSET))(this, a1);
		}

		::System::Void Method_2_3F5DC960A2A68BBD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_3F5DC960A2A68BBD_OFFSET))(this, a1);
		}

		::System::Void Method_2_0EB2CD34D2D5AB0D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_0EB2CD34D2D5AB0D_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_2_1D9AD08B174D2098(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_1D9AD08B174D2098_OFFSET))(this, a1);
		}

		::System::Void Method_2_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Void Method_2_B79D0665B51E930B(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_B79D0665B51E930B_OFFSET))(this, a1);
		}

		::System::Void __OnFail_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET))(this);
		}

		::System::Void __OnFail_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}
	};
}

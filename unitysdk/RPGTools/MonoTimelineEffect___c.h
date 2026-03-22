#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_MONOTIMELINEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5E0460)
#define RPGTOOLS_MONOTIMELINEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E0490)
#define RPGTOOLS_MONOTIMELINEEFFECT___C__ONENABALEPOSM_B__43_0_OFFSET UNITYSDK_OFFSET(0xA5E04A0)

namespace RPGTools
{
	inline static constexpr unsigned int MonoTimelineEffect___c_TypeDefinitionIndex = 37696;

	class MonoTimelineEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoTimelineEffect___c_TypeDefinitionIndex)->GetStaticField(0x46580);
		}
		static ::RPGTools::MonoTimelineEffect___c** StaticGet___9()
		{
			return (::RPGTools::MonoTimelineEffect___c**)Il2CppClass::FromTypeDefinitionIndex(MonoTimelineEffect___c_TypeDefinitionIndex)->GetStaticField(0x46588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnabalePOSM_b__43_0(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__ONENABALEPOSM_B__43_0_OFFSET))(this, renderer);
		}
	};
}

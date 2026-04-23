#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xBF792C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xBF794B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK__CTOR_OFFSET UNITYSDK_OFFSET(0xBF793F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaBreak_TypeDefinitionIndex = 64466;

	class MonoEffectPluginCharaBreak : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Vector4 MainSpeed; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_5835DC16FC46989B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_5835DC16FC46989B_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}

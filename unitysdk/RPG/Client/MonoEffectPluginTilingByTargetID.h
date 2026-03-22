#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTilingByTargetID_RendererData.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTilingByTargetID_TilingOffsetData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x980A660)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_9D73A4DA47109EEE_OFFSET UNITYSDK_OFFSET(0x980A6A0)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_E82E2569B5AD252F_OFFSET UNITYSDK_OFFSET(0x980A450)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x980A360)
#define RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CTOR_OFFSET UNITYSDK_OFFSET(0x980A850)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTilingByTargetID_TypeDefinitionIndex = 55819;

	class MonoEffectPluginTilingByTargetID : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTilingByTargetID_RendererData>* RendererList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTilingByTargetID_TilingOffsetData>* TilingOffsetDataList; // 0x30
		::UnityEngine::Vector2 DefaultTiling; // 0x38
		::UnityEngine::Vector2 DefaultOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_E82E2569B5AD252F(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_E82E2569B5AD252F_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_6_9D73A4DA47109EEE(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTILINGBYTARGETID_METHOD_6_9D73A4DA47109EEE_OFFSET))(this, a1);
		}
	};
}

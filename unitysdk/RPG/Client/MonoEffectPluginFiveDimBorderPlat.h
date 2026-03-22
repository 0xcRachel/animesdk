#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_1_9CBC71DC5240DC00;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97FA900)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x97FA8C0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET UNITYSDK_OFFSET(0x97FA950)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CTOR_OFFSET UNITYSDK_OFFSET(0x97FAC70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex = 55732;

	class MonoEffectPluginFiveDimBorderPlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Border; // 0x28
		::System::Single BaseDensity; // 0x30
		::System::Single Field_6_2; // 0x34
		::System::Single Field_6_3; // 0x38
		::System::Single Field_6_4; // 0x3C
		::Class_1_9CBC71DC5240DC00* Field_6_5; // 0x40
		::System::Int32 Field_6_6; // 0x48
		::System::Int32 Field_6_7; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void SetShowDistanceAndUnitLength(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET))(this, a1, a2, a3);
		}
	};
}

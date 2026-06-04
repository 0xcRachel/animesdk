#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_145900CF007A5A6E_OFFSET UNITYSDK_OFFSET(0x19A4DA30)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_5A807A4F4ADF7250_OFFSET UNITYSDK_OFFSET(0x19A42DB0)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_6AF613AFDA0FD020_OFFSET UNITYSDK_OFFSET(0x19A3F820)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_CEFDE55AD88492E9_OFFSET UNITYSDK_OFFSET(0x19A4DAC0)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3F7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSDFTextEffect_TypeDefinitionIndex = 22345;

	class TriggerSDFTextEffect : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::RPG::Client::TextID TextContent; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_145900CF007A5A6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_145900CF007A5A6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6AF613AFDA0FD020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_6AF613AFDA0FD020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A807A4F4ADF7250(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_5A807A4F4ADF7250_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEFDE55AD88492E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_CEFDE55AD88492E9_OFFSET))(a1, a2);
		}
	};
}

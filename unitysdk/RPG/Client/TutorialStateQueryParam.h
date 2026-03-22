#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_23.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA12D0D0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA12D090)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xA12D0B0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA12D0E0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA12D0A0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xA12D0C0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA12D080)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialStateQueryParam_TypeDefinitionIndex = 54164;

	class TutorialStateQueryParam : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::Enum_3_ED790DAC948A65A9_23 _GuideType_k__BackingField; // 0x14
		::System::Boolean _IsGuide_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isGuide)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET))(this, id, isGuide);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET))(this);
		}

		::System::Void set_IsGuide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_23 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Void set_GuideType(::Enum_3_ED790DAC948A65A9_23 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET))(this, value);
		}
	};
}

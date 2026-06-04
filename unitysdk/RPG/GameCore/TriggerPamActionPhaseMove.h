#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_METHOD_3_4DAF2A95A077F091_OFFSET UNITYSDK_OFFSET(0x19A4AB20)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_METHOD_3_9A6566183D8D61E5_OFFSET UNITYSDK_OFFSET(0x19A4AC30)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4AC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseMove_TypeDefinitionIndex = 18905;

	class TriggerPamActionPhaseMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DAF2A95A077F091(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_METHOD_3_4DAF2A95A077F091_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A6566183D8D61E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_METHOD_3_9A6566183D8D61E5_OFFSET))(a1, a2);
		}
	};
}

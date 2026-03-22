#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2AB40)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureSkillMPRefreshParam_TypeDefinitionIndex = 54054;

	class AdventureSkillMPRefreshParam : public ::System::Object
	{
	public:
		::System::Int32 ChangeCount; // 0x10
		::System::Boolean Overflow; // 0x14
		::System::Boolean DisplayEffect; // 0x15
		::Enum_3_71AA90D596A09AC8_10 Reason; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM__CTOR_OFFSET))(this);
		}
	};
}

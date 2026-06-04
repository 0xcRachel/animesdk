#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BACKTOMAINPAGE_METHOD_3_9CF19AE80304114E_OFFSET UNITYSDK_OFFSET(0x17650D60)
#define RPG_GAMECORE_BACKTOMAINPAGE_METHOD_3_B8B467F4A7AAF99F_OFFSET UNITYSDK_OFFSET(0x17650CE0)
#define RPG_GAMECORE_BACKTOMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17650D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackToMainPage_TypeDefinitionIndex = 23044;

	class BackToMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Delay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8B467F4A7AAF99F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BackToMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackToMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE_METHOD_3_B8B467F4A7AAF99F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CF19AE80304114E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BackToMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackToMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE_METHOD_3_9CF19AE80304114E_OFFSET))(a1, a2);
		}
	};
}

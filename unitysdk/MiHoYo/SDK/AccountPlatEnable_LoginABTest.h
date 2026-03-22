#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_ACCOUNTPLATENABLE_LOGINABTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x156FAD50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatEnable_LoginABTest_TypeDefinitionIndex = 6816;

	class AccountPlatEnable_LoginABTest : public ::System::Object
	{
	public:
		::System::Boolean bResult; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_LOGINABTEST__CTOR_OFFSET))(this);
		}
	};
}

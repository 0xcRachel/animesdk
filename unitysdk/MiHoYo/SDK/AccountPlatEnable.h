#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatEnable_LoginABTest; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATENABLE_GETPASSPORTAPPID_OFFSET UNITYSDK_OFFSET(0x156FAFA0)
#define MIHOYO_SDK_ACCOUNTPLATENABLE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x156FAD60)
#define MIHOYO_SDK_ACCOUNTPLATENABLE_LOCKACCOUNTPLATENABLEFLAG_OFFSET UNITYSDK_OFFSET(0x156FACF0)
#define MIHOYO_SDK_ACCOUNTPLATENABLE_SETABTESTRESULT_OFFSET UNITYSDK_OFFSET(0x156FAD10)
#define MIHOYO_SDK_ACCOUNTPLATENABLE_UNLOCKACCOUNTPLATENABLEFLAG_OFFSET UNITYSDK_OFFSET(0x156FAD00)
#define MIHOYO_SDK_ACCOUNTPLATENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x156FAFB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatEnable_TypeDefinitionIndex = 6815;

	class AccountPlatEnable : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountPlatEnable_LoginABTest* m_loginABtest; // 0x10
		::System::String* passportAppID; // 0x18
		::System::Boolean isEnableAccountPlat; // 0x20
		::System::Boolean isLocked; // 0x21
		::System::Boolean isInitialized; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE__CTOR_OFFSET))(this);
		}

		::System::Void LockAccountPlatEnableFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_LOCKACCOUNTPLATENABLEFLAG_OFFSET))(this);
		}

		::System::Void UnlockAccountPlatEnableFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_UNLOCKACCOUNTPLATENABLEFLAG_OFFSET))(this);
		}

		::System::Void SetABTestResult(::System::Boolean bResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_SETABTESTRESULT_OFFSET))(this, bResult);
		}

		::System::Boolean GetValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_GETVALUE_OFFSET))(this);
		}

		::System::String* GetPassportAppID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATENABLE_GETPASSPORTAPPID_OFFSET))(this);
		}
	};
}

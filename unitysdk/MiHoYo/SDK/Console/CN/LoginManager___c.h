#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1573EA80)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1573EAC0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__REQUESTUSERCENTERABTEST_B__19_0_OFFSET UNITYSDK_OFFSET(0x1573EAD0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 7598;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x13530);
		}
		static ::MiHoYo::SDK::Console::CN::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::CN::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x13538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestUserCenterABTest_b__19_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER___C__REQUESTUSERCENTERABTEST_B__19_0_OFFSET))(this, response);
		}
	};
}

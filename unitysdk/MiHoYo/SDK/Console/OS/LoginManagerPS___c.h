#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1578F5A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1578F5E0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1578F5F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS___c_TypeDefinitionIndex = 7566;

	class LoginManagerPS___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x14F50);
		}
		static ::MiHoYo::SDK::Console::OS::LoginManagerPS___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::LoginManagerPS___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x14F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C___CTOR_B__1_0_OFFSET))(this);
		}
	};
}

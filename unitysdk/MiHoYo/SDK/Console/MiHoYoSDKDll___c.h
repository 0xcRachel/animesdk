#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15772F10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15772F50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x15772F60)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll___c_TypeDefinitionIndex = 7442;

	class MiHoYoSDKDll___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x145F0);
		}
		static ::MiHoYo::SDK::Console::MiHoYoSDKDll___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::MiHoYoSDKDll___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x145F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__18_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET))(this, response);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ThirdpartyOAuthClient; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157C18E0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x157C1EE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x157C1F10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthClient___c__DisplayClass34_0_TypeDefinitionIndex = 7749;

	class ThirdpartyOAuthClient___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ThirdpartyOAuthClient* __4__this; // 0x10
		::System::String* error; // 0x18
		::System::String* idToken; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnContextCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _OnContextCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__1_OFFSET))(this);
		}
	};
}

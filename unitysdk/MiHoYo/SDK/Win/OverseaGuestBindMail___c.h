#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaGuestBindMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A538A0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A538E0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x15A538F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail___c_TypeDefinitionIndex = 7969;

	class OverseaGuestBindMail___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGuestBindMail___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::OverseaGuestBindMail___c**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x1C0C0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail___c_TypeDefinitionIndex)->GetStaticField(0x1C0C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::Win::OverseaGuestBindMail* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET))(this, dialog);
		}
	};
}

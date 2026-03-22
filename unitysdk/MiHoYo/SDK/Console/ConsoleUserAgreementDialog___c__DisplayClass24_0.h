#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleUserAgreementDialog_DisplayMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUserAgreementDialog; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15762C10)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15764C10)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog___c__DisplayClass24_0_TypeDefinitionIndex = 7502;

	class ConsoleUserAgreementDialog___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleUserAgreementDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}

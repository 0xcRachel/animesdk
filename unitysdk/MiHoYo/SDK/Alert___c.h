#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_ALERT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16181350)
#define MIHOYO_SDK_ALERT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16181390)
#define MIHOYO_SDK_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET UNITYSDK_OFFSET(0x161813A0)
#define MIHOYO_SDK_ALERT___C__SHOW_B__21_1_OFFSET UNITYSDK_OFFSET(0x16181440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert___c_TypeDefinitionIndex = 7280;

	class Alert___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Alert___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Alert___c**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0x8480);
		}
		static ::System::Action** StaticGet___9__20_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0x8488);
		}
		static ::System::Action** StaticGet___9__21_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0x8490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET))(this);
		}

		::System::Void _Show_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__SHOW_B__21_1_OFFSET))(this);
		}
	};
}

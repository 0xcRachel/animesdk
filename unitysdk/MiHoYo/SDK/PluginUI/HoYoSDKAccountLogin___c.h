#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AE5E00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE5E40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x16AE5E50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x16AE5E90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x16AE5ED0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x16AE5F10)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin___c_TypeDefinitionIndex = 44101;

	class HoYoSDKAccountLogin___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__4_3()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x10ED0);
		}
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x10ED8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x10EE0);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x10EE8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x10EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__4_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET))(this, a1);
		}
	};
}

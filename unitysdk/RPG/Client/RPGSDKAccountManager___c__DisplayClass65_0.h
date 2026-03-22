#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D52F80)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS65_0__SHOWEXITUI_B__0_OFFSET UNITYSDK_OFFSET(0x9D5F220)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass65_0_TypeDefinitionIndex = 48424;

	class RPGSDKAccountManager___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowExitUI_b__0(::System::String* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS65_0__SHOWEXITUI_B__0_OFFSET))(this, rsp);
		}
	};
}

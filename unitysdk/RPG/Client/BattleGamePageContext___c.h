#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DA4690)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA46D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__70_0_OFFSET UNITYSDK_OFFSET(0x8DA46E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext___c_TypeDefinitionIndex = 57129;

	class BattleGamePageContext___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleGamePageContext___c** StaticGet___9()
		{
			return (::RPG::Client::BattleGamePageContext___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePageContext___c_TypeDefinitionIndex)->GetStaticField(0x36000);
		}
		static ::System::Action** StaticGet___9__70_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePageContext___c_TypeDefinitionIndex)->GetStaticField(0x36008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __ToggleAvatarPanel_b__70_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__70_0_OFFSET))(this);
		}
	};
}

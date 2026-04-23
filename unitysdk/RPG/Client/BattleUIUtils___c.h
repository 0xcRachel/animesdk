#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEUIUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1472E630)
#define RPG_CLIENT_BATTLEUIUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1472E670)
#define RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET UNITYSDK_OFFSET(0x1472E680)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c_TypeDefinitionIndex = 66404;

	class BattleUIUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils___c_TypeDefinitionIndex)->GetStaticField(0x5EE90);
		}
		static ::RPG::Client::BattleUIUtils___c** StaticGet___9()
		{
			return (::RPG::Client::BattleUIUtils___c**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils___c_TypeDefinitionIndex)->GetStaticField(0x5EE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTeamDetailDialog_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET))(this);
		}
	};
}

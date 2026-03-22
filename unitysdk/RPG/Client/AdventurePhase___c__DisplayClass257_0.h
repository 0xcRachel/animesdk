#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ToastPile; }

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS257_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C1B730)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS257_0___ONMAZEREFRESCHARACTERHP_B__0_OFFSET UNITYSDK_OFFSET(0x8C1CC10)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass257_0_TypeDefinitionIndex = 47622;

	class AdventurePhase___c__DisplayClass257_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ToastPile* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS257_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnMazeRefresCharacterHP_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS257_0___ONMAZEREFRESCHARACTERHP_B__0_OFFSET))(this);
		}
	};
}

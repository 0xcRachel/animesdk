#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F76E966DD50AB39A;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x90F1050)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x90F1160)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c__DisplayClass8_0_TypeDefinitionIndex = 56734;

	class ElationBuffPresenter___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::ElationBattleBuffGroupViewData* elationBuffGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0(::Class_2_F76E966DD50AB39A* panel, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F76E966DD50AB39A*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__SETUPVIEW_B__0_OFFSET))(this, panel, i);
		}
	};
}

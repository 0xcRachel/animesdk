#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_5_4ED0B74A107C92A9_OFFSET UNITYSDK_OFFSET(0x16B15EC0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_5_C6EDBBB6D6038A0B_OFFSET UNITYSDK_OFFSET(0x16B15FF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B15F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBattleAvatarNumConfig_TypeDefinitionIndex = 17323;

	class GridFightActionAddBattleAvatarNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4ED0B74A107C92A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_5_4ED0B74A107C92A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C6EDBBB6D6038A0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_METHOD_5_C6EDBBB6D6038A0B_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_5_200CFB613821568F_OFFSET UNITYSDK_OFFSET(0x16B16AD0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_5_5FF9249BF6CD0925_OFFSET UNITYSDK_OFFSET(0x16B16C00)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionClearGlobalSavedValueConfig_TypeDefinitionIndex = 17336;

	class GridFightActionClearGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_200CFB613821568F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_5_200CFB613821568F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5FF9249BF6CD0925(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_5_5FF9249BF6CD0925_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_5_6B3DCC8A0E6C79FA_OFFSET UNITYSDK_OFFSET(0x16B19010)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_5_BC3DC37A05245AA8_OFFSET UNITYSDK_OFFSET(0x16B186A0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetKeepWinNumConfig_TypeDefinitionIndex = 17321;

	class GridFightActionSetKeepWinNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6B3DCC8A0E6C79FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_5_6B3DCC8A0E6C79FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BC3DC37A05245AA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_5_BC3DC37A05245AA8_OFFSET))(a1, a2);
		}
	};
}

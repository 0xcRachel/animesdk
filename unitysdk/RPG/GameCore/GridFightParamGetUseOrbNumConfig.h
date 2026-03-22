#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_5_50D62404DE5B4368_OFFSET UNITYSDK_OFFSET(0x16B3AF20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_5_BBA33AD5ABAEA315_OFFSET UNITYSDK_OFFSET(0x16B3ACF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUseOrbNumConfig_TypeDefinitionIndex = 17507;

	class GridFightParamGetUseOrbNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BBA33AD5ABAEA315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_5_BBA33AD5ABAEA315_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_50D62404DE5B4368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_5_50D62404DE5B4368_OFFSET))(a1, a2);
		}
	};
}

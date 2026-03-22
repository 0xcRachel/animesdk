#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_5_513A09F563093156_OFFSET UNITYSDK_OFFSET(0x16B1D0B0)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_5_724A6A1B588647C5_OFFSET UNITYSDK_OFFSET(0x16B1CF40)
#define RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondRandomConfig_TypeDefinitionIndex = 17343;

	class GridFightCondRandomConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_724A6A1B588647C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_5_724A6A1B588647C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_513A09F563093156(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDRANDOMCONFIG_METHOD_5_513A09F563093156_OFFSET))(a1, a2);
		}
	};
}

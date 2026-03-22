#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_5_20A93F52AAF105EE_OFFSET UNITYSDK_OFFSET(0x16B36DF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_5_43805BE163CBDFDB_OFFSET UNITYSDK_OFFSET(0x16B37020)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurSectionConfig_TypeDefinitionIndex = 17499;

	class GridFightParamGetCurSectionConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_20A93F52AAF105EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_5_20A93F52AAF105EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_43805BE163CBDFDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurSectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURSECTIONCONFIG_METHOD_5_43805BE163CBDFDB_OFFSET))(a1, a2);
		}
	};
}

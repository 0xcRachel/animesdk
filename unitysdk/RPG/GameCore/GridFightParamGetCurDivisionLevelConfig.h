#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_5_449414270721813F_OFFSET UNITYSDK_OFFSET(0x16B36960)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_5_B3BE7820D83F419A_OFFSET UNITYSDK_OFFSET(0x16B36730)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurDivisionLevelConfig_TypeDefinitionIndex = 17501;

	class GridFightParamGetCurDivisionLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B3BE7820D83F419A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_5_B3BE7820D83F419A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_449414270721813F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURDIVISIONLEVELCONFIG_METHOD_5_449414270721813F_OFFSET))(a1, a2);
		}
	};
}

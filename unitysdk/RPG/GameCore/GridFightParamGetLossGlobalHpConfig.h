#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_5_23E4A739C838A737_OFFSET UNITYSDK_OFFSET(0x16B386B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_5_329CEC2965B31C42_OFFSET UNITYSDK_OFFSET(0x16B388E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B387F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLossGlobalHpConfig_TypeDefinitionIndex = 17497;

	class GridFightParamGetLossGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_23E4A739C838A737(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_5_23E4A739C838A737_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_329CEC2965B31C42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_METHOD_5_329CEC2965B31C42_OFFSET))(a1, a2);
		}
	};
}

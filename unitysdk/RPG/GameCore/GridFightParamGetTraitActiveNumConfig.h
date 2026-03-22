#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_5_9128F2773FCA67F1_OFFSET UNITYSDK_OFFSET(0x16B3A870)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_5_ABA6AFF4CFE0CE6C_OFFSET UNITYSDK_OFFSET(0x16B3AAA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTraitActiveNumConfig_TypeDefinitionIndex = 17474;

	class GridFightParamGetTraitActiveNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9128F2773FCA67F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_5_9128F2773FCA67F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_ABA6AFF4CFE0CE6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetTraitActiveNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITACTIVENUMCONFIG_METHOD_5_ABA6AFF4CFE0CE6C_OFFSET))(a1, a2);
		}
	};
}

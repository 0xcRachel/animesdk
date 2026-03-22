#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_5_C600339F68465086_OFFSET UNITYSDK_OFFSET(0x16B3B5F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_5_EA222F82BF23EB13_OFFSET UNITYSDK_OFFSET(0x16B3B820)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitActiveLayerConfig_TypeDefinitionIndex = 17472;

	class GridFightParamTraitActiveLayerConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C600339F68465086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_5_C600339F68465086_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EA222F82BF23EB13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_METHOD_5_EA222F82BF23EB13_OFFSET))(a1, a2);
		}
	};
}

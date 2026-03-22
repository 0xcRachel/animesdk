#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_5_9DCC9EECE5C8DCF2_OFFSET UNITYSDK_OFFSET(0x16B3BA60)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_5_A1FCCBEA139927E7_OFFSET UNITYSDK_OFFSET(0x16B3B830)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3B970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitMemberNumConfig_TypeDefinitionIndex = 17473;

	class GridFightParamTraitMemberNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A1FCCBEA139927E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_5_A1FCCBEA139927E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9DCC9EECE5C8DCF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_5_9DCC9EECE5C8DCF2_OFFSET))(a1, a2);
		}
	};
}

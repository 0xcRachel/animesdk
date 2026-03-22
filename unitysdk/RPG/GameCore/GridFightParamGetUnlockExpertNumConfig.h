#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_5_377820BDAB899A11_OFFSET UNITYSDK_OFFSET(0x16B3AAB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_5_A3F05AA43B2ECA8C_OFFSET UNITYSDK_OFFSET(0x16B3ACE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUnlockExpertNumConfig_TypeDefinitionIndex = 17510;

	class GridFightParamGetUnlockExpertNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_377820BDAB899A11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_5_377820BDAB899A11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A3F05AA43B2ECA8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUnlockExpertNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUNLOCKEXPERTNUMCONFIG_METHOD_5_A3F05AA43B2ECA8C_OFFSET))(a1, a2);
		}
	};
}

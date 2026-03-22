#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_3_4DAFFD803866BA96_OFFSET UNITYSDK_OFFSET(0x16D16410)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_3_CF0BAA3755823A88_OFFSET UNITYSDK_OFFSET(0x16D165B0)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D16560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConstantConfig_TypeDefinitionIndex = 15374;

	class ParamConstantConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Double Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DAFFD803866BA96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConstantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConstantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_3_4DAFFD803866BA96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF0BAA3755823A88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConstantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_3_CF0BAA3755823A88_OFFSET))(a1, a2);
		}
	};
}

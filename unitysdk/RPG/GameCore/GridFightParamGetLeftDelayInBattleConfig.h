#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_5_183B473F20E02619_OFFSET UNITYSDK_OFFSET(0x16B38460)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_5_701D49F95D4BF424_OFFSET UNITYSDK_OFFSET(0x16B38230)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B38370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftDelayInBattleConfig_TypeDefinitionIndex = 17493;

	class GridFightParamGetLeftDelayInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_701D49F95D4BF424(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_5_701D49F95D4BF424_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_183B473F20E02619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_5_183B473F20E02619_OFFSET))(a1, a2);
		}
	};
}

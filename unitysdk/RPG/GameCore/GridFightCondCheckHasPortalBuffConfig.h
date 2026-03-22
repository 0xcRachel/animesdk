#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_5_AAFE436CDFD198D1_OFFSET UNITYSDK_OFFSET(0x16B1C7C0)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_5_D2FD90684A13ECBA_OFFSET UNITYSDK_OFFSET(0x16B1C930)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1C890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasPortalBuffConfig_TypeDefinitionIndex = 17347;

	class GridFightCondCheckHasPortalBuffConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AAFE436CDFD198D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_5_AAFE436CDFD198D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D2FD90684A13ECBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_5_D2FD90684A13ECBA_OFFSET))(a1, a2);
		}
	};
}

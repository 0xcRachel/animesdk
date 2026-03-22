#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_5_84C795337C1420B8_OFFSET UNITYSDK_OFFSET(0x16B18F60)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_5_F94B0A637F95A30A_OFFSET UNITYSDK_OFFSET(0x16B18610)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetInterestLimitConfig_TypeDefinitionIndex = 17319;

	class GridFightActionSetInterestLimitConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_84C795337C1420B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_5_84C795337C1420B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F94B0A637F95A30A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_5_F94B0A637F95A30A_OFFSET))(a1, a2);
		}
	};
}

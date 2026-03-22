#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_5_42F610E164AB7681_OFFSET UNITYSDK_OFFSET(0x16B1C5A0)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_5_9716413DA54F17AA_OFFSET UNITYSDK_OFFSET(0x16B1C710)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasAugmentConfig_TypeDefinitionIndex = 17348;

	class GridFightCondCheckHasAugmentConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_42F610E164AB7681(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_5_42F610E164AB7681_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9716413DA54F17AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_5_9716413DA54F17AA_OFFSET))(a1, a2);
		}
	};
}

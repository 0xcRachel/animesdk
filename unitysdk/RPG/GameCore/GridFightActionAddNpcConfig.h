#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_5_1D40FFA137FE2999_OFFSET UNITYSDK_OFFSET(0x16B167F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_5_3DEEC2FFE711419B_OFFSET UNITYSDK_OFFSET(0x16B166C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcConfig_TypeDefinitionIndex = 17332;

	class GridFightActionAddNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3DEEC2FFE711419B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_5_3DEEC2FFE711419B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1D40FFA137FE2999(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_METHOD_5_1D40FFA137FE2999_OFFSET))(a1, a2);
		}
	};
}

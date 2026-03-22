#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_5_352B03A6C237B938_OFFSET UNITYSDK_OFFSET(0x16B16580)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_5_A9AE78D6C5B93B8A_OFFSET UNITYSDK_OFFSET(0x16B166B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddMaxInterestConfig_TypeDefinitionIndex = 17320;

	class GridFightActionAddMaxInterestConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_352B03A6C237B938(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_5_352B03A6C237B938_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A9AE78D6C5B93B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_5_A9AE78D6C5B93B8A_OFFSET))(a1, a2);
		}
	};
}

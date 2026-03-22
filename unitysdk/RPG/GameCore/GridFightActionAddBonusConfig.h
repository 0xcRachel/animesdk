#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_5_0CBC91D9C5354755_OFFSET UNITYSDK_OFFSET(0x16B161B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_5_3631EFC1DECEC83F_OFFSET UNITYSDK_OFFSET(0x16B16080)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBonusConfig_TypeDefinitionIndex = 17316;

	class GridFightActionAddBonusConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3631EFC1DECEC83F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_5_3631EFC1DECEC83F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0CBC91D9C5354755(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_5_0CBC91D9C5354755_OFFSET))(a1, a2);
		}
	};
}

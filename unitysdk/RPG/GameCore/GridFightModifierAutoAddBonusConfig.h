#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_11D74EE7FD80C9A2_OFFSET UNITYSDK_OFFSET(0x16B28880)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_F4B95313880375BB_OFFSET UNITYSDK_OFFSET(0x16B28950)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B28900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoAddBonusConfig_TypeDefinitionIndex = 17399;

	class GridFightModifierAutoAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11D74EE7FD80C9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_11D74EE7FD80C9A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4B95313880375BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_F4B95313880375BB_OFFSET))(a1, a2);
		}
	};
}

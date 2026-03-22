#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_5_330267B7E429A091_OFFSET UNITYSDK_OFFSET(0x16B16430)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_5_6C7CFBC73E8D7413_OFFSET UNITYSDK_OFFSET(0x16B16300)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B163B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpMaxConfig_TypeDefinitionIndex = 17315;

	class GridFightActionAddGlobalHpMaxConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6C7CFBC73E8D7413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_5_6C7CFBC73E8D7413_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_330267B7E429A091(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_5_330267B7E429A091_OFFSET))(a1, a2);
		}
	};
}

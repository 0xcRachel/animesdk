#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_5_4D2356FA82AFB4F6_OFFSET UNITYSDK_OFFSET(0x16B187D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_5_911A7013F952A45C_OFFSET UNITYSDK_OFFSET(0x16B17FE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyEquipConfig_TypeDefinitionIndex = 17317;

	class GridFightActionCopyEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4D2356FA82AFB4F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_5_4D2356FA82AFB4F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_911A7013F952A45C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYEQUIPCONFIG_METHOD_5_911A7013F952A45C_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_5_C2919E6BBFFB5D99_OFFSET UNITYSDK_OFFSET(0x16B161C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_5_E01998EF448B0BFB_OFFSET UNITYSDK_OFFSET(0x16B162F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpConfig_TypeDefinitionIndex = 17314;

	class GridFightActionAddGlobalHpConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C2919E6BBFFB5D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_5_C2919E6BBFFB5D99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E01998EF448B0BFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_5_E01998EF448B0BFB_OFFSET))(a1, a2);
		}
	};
}

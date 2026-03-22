#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_5_64B91E357DA18FCF_OFFSET UNITYSDK_OFFSET(0x16B1CC40)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_5_C10B8993817655CC_OFFSET UNITYSDK_OFFSET(0x16B1CDB0)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1CD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsBenchPosFullConfig_TypeDefinitionIndex = 17344;

	class GridFightCondIsBenchPosFullConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_64B91E357DA18FCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_5_64B91E357DA18FCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C10B8993817655CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_5_C10B8993817655CC_OFFSET))(a1, a2);
		}
	};
}

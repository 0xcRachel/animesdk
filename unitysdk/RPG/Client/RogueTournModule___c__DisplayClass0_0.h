#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E78560)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS0_0___TRYREFETCHBUILDREFSTATICDATAWITHBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x9E89B20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass0_0_TypeDefinitionIndex = 53786;

	class RogueTournModule___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryRefetchBuildRefStaticDataWithBlock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS0_0___TRYREFETCHBUILDREFSTATICDATAWITHBLOCK_B__0_OFFSET))(this);
		}
	};
}

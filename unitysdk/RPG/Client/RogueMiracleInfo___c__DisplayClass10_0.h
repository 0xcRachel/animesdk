#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMiracleData; }

#define RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E23930)
#define RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS10_0__GETROGUEMIRACLEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9E23EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo___c__DisplayClass10_0_TypeDefinitionIndex = 53462;

	class RogueMiracleInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 miracleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueMiracleData_b__0(::RPG::Client::RogueMiracleData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS10_0__GETROGUEMIRACLEDATA_B__0_OFFSET))(this, x);
		}
	};
}

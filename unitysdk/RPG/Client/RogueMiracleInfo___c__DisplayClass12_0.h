#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMiracleData; }

#define RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E23BB0)
#define RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__GETMIRACLESBYCATEGORY_B__0_OFFSET UNITYSDK_OFFSET(0x9E23EC0)
#define RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__GETMIRACLESBYCATEGORY_B__1_OFFSET UNITYSDK_OFFSET(0x9E23F90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo___c__DisplayClass12_0_TypeDefinitionIndex = 53463;

	class RogueMiracleInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Int32 brokenPriority; // 0x10
		::System::Int32 unbrokenPriority; // 0x14
		::RPG::GameCore::RogueMiracleCategory category; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMiraclesByCategory_b__0(::RPG::Client::RogueMiracleData* miracle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__GETMIRACLESBYCATEGORY_B__0_OFFSET))(this, miracle);
		}

		::System::Int32 _GetMiraclesByCategory_b__1(::RPG::Client::RogueMiracleData* miracle)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__DISPLAYCLASS12_0__GETMIRACLESBYCATEGORY_B__1_OFFSET))(this, miracle);
		}
	};
}

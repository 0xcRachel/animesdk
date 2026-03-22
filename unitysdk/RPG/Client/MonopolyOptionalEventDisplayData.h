#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_533;

#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x98A0310)
#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98A03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalEventDisplayData_TypeDefinitionIndex = 52761;

	class MonopolyOptionalEventDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalEventDisplayData* Create(::Class_1_FA4F4A67B1C04320_533* contentInfo)
		{
			return ((::RPG::Client::MonopolyOptionalEventDisplayData*(*)(::Class_1_FA4F4A67B1C04320_533*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET))(contentInfo);
		}
	};
}

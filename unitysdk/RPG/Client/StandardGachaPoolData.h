#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x16200060)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x161FFFA0)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x161FFF90)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x162000B0)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x162000A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StandardGachaPoolData_TypeDefinitionIndex = 59170;

	class StandardGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::Void _ctor(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA__CTOR_OFFSET))(this, gachaID);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET))(this);
		}
	};
}

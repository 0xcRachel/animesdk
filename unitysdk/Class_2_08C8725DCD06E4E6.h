#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

#define CLASS_2_08C8725DCD06E4E6_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x8963FA0)
#define CLASS_2_08C8725DCD06E4E6__CTOR_OFFSET UNITYSDK_OFFSET(0x8964580)
#define CLASS_2_08C8725DCD06E4E6___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x8964590)

inline static constexpr unsigned int Class_2_08C8725DCD06E4E6_TypeDefinitionIndex = 51013;

class Class_2_08C8725DCD06E4E6 : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6_SETUPDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}
};

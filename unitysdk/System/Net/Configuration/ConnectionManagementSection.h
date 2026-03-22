#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x17EA2800)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA27C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementSection_TypeDefinitionIndex = 3055;

	class ConnectionManagementSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTSECTION_GET_PROPERTIES_OFFSET))(this);
		}
	};
}

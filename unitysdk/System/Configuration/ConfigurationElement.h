#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A75A5A0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1A75A5E0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1A75A660)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1A75A620)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElement_TypeDefinitionIndex = 2325;

	class ConfigurationElement : public ::System::Object
	{
	public:
		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET))(this, parentElement);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET))(this);
		}
	};
}

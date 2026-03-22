#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_SETTINGS_SETDECODESKIPPINGENABLED_OFFSET UNITYSDK_OFFSET(0x112DC3F0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 30353;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Void SetDecodeSkippingEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_SETTINGS_SETDECODESKIPPINGENABLED_OFFSET))(enabled);
		}
	};
}

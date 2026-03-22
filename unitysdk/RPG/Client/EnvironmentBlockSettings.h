#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnvironmentProbeSettings.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_METHOD_3_11F007EB99F2A22E_OFFSET UNITYSDK_OFFSET(0x916B300)
#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x916B370)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentBlockSettings_TypeDefinitionIndex = 55496;

	class EnvironmentBlockSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EnvironmentProbeSettings>* ProbeSettingsList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::String* Method_3_11F007EB99F2A22E(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_METHOD_3_11F007EB99F2A22E_OFFSET))(a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F19830)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F19850)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F19840)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F19860)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F17D60)
#define RPG_CLIENT_PARKOURGAMELOCKTARGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F19870)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameLockTargetInfo_TypeDefinitionIndex = 50201;

	class ParkourGameLockTargetInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsVisible_k__BackingField; // 0x10
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Update(::System::Boolean isVisible, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMELOCKTARGETINFO_UPDATE_OFFSET))(this, isVisible, position);
		}
	};
}

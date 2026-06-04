#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureWaypointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IWayPointTarget; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREWAYPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x167D9D50)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureWaypointConfig_TypeDefinitionIndex = 64601;

	class AdventureWaypointConfig : public ::System::Object
	{
	public:
		::RPG::Client::IWayPointTarget* Target; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* IconPath; // 0x20
		::UnityEngine::Vector3 Offset; // 0x28
		::RPG::Client::AdventureWaypointType WaypointType; // 0x34
		::System::UInt64 CreateTime; // 0x38
		::UnityEngine::Vector2 Offset2D; // 0x40
		::System::Single ShowRangeMin; // 0x48
		::System::Boolean IsInMinRange; // 0x4C
		::System::Boolean IsNew; // 0x4D
		::System::Boolean IsTeleport; // 0x4E
		::System::Single ToShowAnimTime; // 0x50
		::System::Single ShowRangeMax; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREWAYPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}

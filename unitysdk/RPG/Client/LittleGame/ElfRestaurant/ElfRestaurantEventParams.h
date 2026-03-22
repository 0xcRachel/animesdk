#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTEVENTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9524790)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEventParams_TypeDefinitionIndex = 60921;

	class ElfRestaurantEventParams : public ::System::Object
	{
	public:
		::System::String* EventIconPath; // 0x10
		::System::String* EventTip; // 0x18
		::System::String* ParamStr; // 0x20
		::System::Int32 ParamInt; // 0x28
		::UnityEngine::Vector3 EventWorldPos; // 0x2C
		::System::Single Duration; // 0x38
		::RPG::GameCore::RestaurantNormalEventType Type; // 0x3C
		::System::Boolean FollowEntity; // 0x40
		::System::Int32 EventEntityRuntimeID; // 0x44

		::System::Void _ctor(::RPG::GameCore::RestaurantNormalEventType type, ::UnityEngine::Vector3 eventWPos, ::System::String* iconPath, ::System::String* tip, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTEVENTPARAMS__CTOR_OFFSET))(this, type, eventWPos, iconPath, tip, duration);
		}
	};
}

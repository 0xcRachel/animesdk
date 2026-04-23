#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3AD50)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__0_OFFSET UNITYSDK_OFFSET(0x16C3BBD0)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__1_OFFSET UNITYSDK_OFFSET(0x16C3BC40)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__2_OFFSET UNITYSDK_OFFSET(0x16C3BCB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Stage___c__DisplayClass90_0_TypeDefinitionIndex = 64053;

	class Stage___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _RuntimeAddStreamingItem_b__0(::UnityEngine::GameObject* obj, ::RPG::Client::OpenWorld::StreamingItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__0_OFFSET))(this, obj, item);
		}

		::System::Void _RuntimeAddStreamingItem_b__1(::UnityEngine::GameObject* before, ::UnityEngine::GameObject* after, ::RPG::Client::OpenWorld::StreamingItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__1_OFFSET))(this, before, after, item);
		}

		::System::Void _RuntimeAddStreamingItem_b__2(::RPG::Client::OpenWorld::StreamingItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS90_0__RUNTIMEADDSTREAMINGITEM_B__2_OFFSET))(this, item);
		}
	};
}

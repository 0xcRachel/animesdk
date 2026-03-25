#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIDraggableManager_AreaFlag.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO_GET_CANDRAG_OFFSET UNITYSDK_OFFSET(0xA696470)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO_GET_CANHOVER_OFFSET UNITYSDK_OFFSET(0xA6980D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA697F20)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager_AreaInfo_TypeDefinitionIndex = 56449;

	class UIDraggableManager_AreaInfo : public ::System::Object
	{
	public:
		::System::Object* UserObjectData; // 0x10
		::System::Boolean IsEntered; // 0x18
		::System::Int32 InstanceID; // 0x1C
		::RPG::Client::UIDraggableManager_AreaFlag Flags; // 0x20

		::System::Void _ctor(::UnityEngine::GameObject* gameObject, ::System::Object* data, ::RPG::Client::UIDraggableManager_AreaFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::RPG::Client::UIDraggableManager_AreaFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO__CTOR_OFFSET))(this, gameObject, data, flag);
		}

		::System::Boolean get_CanDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO_GET_CANDRAG_OFFSET))(this);
		}

		::System::Boolean get_CanHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_AREAINFO_GET_CANHOVER_OFFSET))(this);
		}
	};
}

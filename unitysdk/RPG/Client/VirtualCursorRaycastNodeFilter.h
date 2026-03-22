#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_ADDNODE_OFFSET UNITYSDK_OFFSET(0xA24EA50)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_RPG_CLIENT_IVIRTUALCURSORRAYCASTFILTER_ISRAYCASTVALID_OFFSET UNITYSDK_OFFSET(0xA24D340)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_START_OFFSET UNITYSDK_OFFSET(0xA24EAC0)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA24EBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorRaycastNodeFilter_TypeDefinitionIndex = 58392;

	class VirtualCursorRaycastNodeFilter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _AllowRaycastNodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean RPG_Client_IVirtualCursorRaycastFilter_IsRaycastValid(::UnityEngine::EventSystems::RaycastResult raycastResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_RPG_CLIENT_IVIRTUALCURSORRAYCASTFILTER_ISRAYCASTVALID_OFFSET))(this, raycastResult);
		}

		::System::Void AddNode(::UnityEngine::Transform* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_ADDNODE_OFFSET))(this, node);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_START_OFFSET))(this);
		}
	};
}

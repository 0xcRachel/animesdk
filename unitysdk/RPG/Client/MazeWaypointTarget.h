#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifier.h"
#include "unitysdk/RPG/Client/WaypointIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x96EA830)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET UNITYSDK_OFFSET(0x96EA660)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x96EA530)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x96EA510)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x96EA7A0)
#define RPG_CLIENT_MAZEWAYPOINTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x96EA8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeWaypointTarget_TypeDefinitionIndex = 54871;

	class MazeWaypointTarget : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetObject; // 0x10
		::RPG::GameCore::GameEntity* TargetEntity; // 0x18
		::UnityEngine::Transform* TargetTransform; // 0x20
		::UnityEngine::Vector3 TargetPos; // 0x28
		::System::Boolean IsGameObject; // 0x34
		::RPG::Client::Billboard::BillboardIdentifier _billboardIdentifier; // 0x38
		::System::UInt32 GroupID; // 0x4C
		::RPG::Client::WaypointIdentifier WaypointIdentifier; // 0x50
		::System::UInt32 InstanceID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET__CTOR_OFFSET))(this);
		}

		::RPG::Client::WaypointIdentifier get_Identifier()
		{
			return ((::RPG::Client::WaypointIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GET_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetEntityPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier GetBillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET))(this);
		}
	};
}

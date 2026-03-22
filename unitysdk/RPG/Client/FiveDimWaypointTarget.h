#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifier.h"
#include "unitysdk/RPG/Client/WaypointIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_99D526797741C2F2;
namespace RPG::Client { class FiveDimGameInstance; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0x9293EC0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9293E60)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET UNITYSDK_OFFSET(0x9293C50)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x9293900)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x92938E0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x92940E0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BORNPOSITION_OFFSET UNITYSDK_OFFSET(0x9293BD0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9293AF0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x9293B70)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x9293E20)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9293FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimWaypointTarget_TypeDefinitionIndex = 54872;

	class FiveDimWaypointTarget : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _TargetTransform; // 0x10
		::Class_1_99D526797741C2F2* _FiveDimEntityCheatSheet; // 0x18
		::RPG::Client::Billboard::BillboardIdentifier __BillboardIdentifier_k__BackingField; // 0x20
		::RPG::Client::WaypointIdentifier _Identifier_k__BackingField; // 0x34
		::System::UInt32 _ContainerInstanceID; // 0x40
		::System::UInt32 _ContainerGroupID; // 0x44

		::System::Void _ctor(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::Class_1_99D526797741C2F2* fiveDimEntityCheatSheet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_99D526797741C2F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET__CTOR_OFFSET))(this, containerGroupID, containerInstanceID, fiveDimEntityCheatSheet);
		}

		::RPG::Client::WaypointIdentifier get_Identifier()
		{
			return ((::RPG::Client::WaypointIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetEntityPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier GetBillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimWaypointTarget* Create(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::RPG::Client::FiveDimWaypointTarget*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_CREATE_OFFSET))(containerGroupID, containerInstanceID, littleGameEntityID);
		}

		::System::UInt32 get__LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__BornPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BORNPOSITION_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier get__BillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BILLBOARDIDENTIFIER_OFFSET))(this);
		}

		::RPG::Client::FiveDimGameInstance* get__GameInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__GAMEINSTANCE_OFFSET))(this);
		}
	};
}

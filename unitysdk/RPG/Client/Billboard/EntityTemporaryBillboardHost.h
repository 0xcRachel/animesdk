#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_CREATE_OFFSET UNITYSDK_OFFSET(0x16D3BDA0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x16D3C080)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x16D3BE90)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x16D3BE80)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x16D3C280)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3BE30)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int EntityTemporaryBillboardHost_TypeDefinitionIndex = 69042;

	class EntityTemporaryBillboardHost : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x10
		::UnityEngine::Transform* _AttachTrans; // 0x18
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST__CTOR_OFFSET))(this, owner);
		}

		static ::RPG::Client::Billboard::EntityTemporaryBillboardHost* Create(::RPG::GameCore::GameEntity* owner)
		{
			return ((::RPG::Client::Billboard::EntityTemporaryBillboardHost*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_CREATE_OFFSET))(owner);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_ISVISIBLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETATTACHTRANS_OFFSET))(this);
		}
	};
}

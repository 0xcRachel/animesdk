#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifierType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCAFC0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xCAF20)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETENTITY_OFFSET UNITYSDK_OFFSET(0xCAE50)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCAFD0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETWAYPOINTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCAEC0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xD240)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCAE40)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x68F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DAE0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8DF2A50)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8DF2B40)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCB070)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DF30B0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCAF00)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEE0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB080)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCB0D0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCB110)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardIdentifier_TypeDefinitionIndex = 59778;

	struct alignas(4) BillboardIdentifier
	{
		static ::RPG::Client::Billboard::BillboardIdentifier* StaticGet_Invalid()
		{
			return (::RPG::Client::Billboard::BillboardIdentifier*)Il2CppClass::FromTypeDefinitionIndex(BillboardIdentifier_TypeDefinitionIndex)->GetStaticField(0xB5B0);
		}
		::RPG::Client::Billboard::BillboardIdentifierType _Type_k__BackingField; // 0x10
		::System::UInt32 _RuntimeID_k__BackingField; // 0x14
		::System::UInt32 _ContainerGroupID_k__BackingField; // 0x18
		::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x1C
		::System::UInt32 _EntityID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 runtimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_OFFSET))(this, runtimeID);
		}

		::System::Void _ctor_1(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_1_OFFSET))(this, groupID, instanceID, entityID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CCTOR_OFFSET))();
		}

		::RPG::Client::Billboard::BillboardIdentifierType get_Type()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifierType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_ENTITYID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETENTITY_OFFSET))(this);
		}

		/*
		::RPG::Client::WaypointIdentifier GetWaypointIdentifier()
		{
			return ((::RPG::Client::WaypointIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETWAYPOINTIDENTIFIER_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::RPG::Client::Billboard::BillboardIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Billboard::BillboardIdentifier a, ::RPG::Client::Billboard::BillboardIdentifier b)
		{
			return ((::System::Boolean(*)(::RPG::Client::Billboard::BillboardIdentifier, ::RPG::Client::Billboard::BillboardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Billboard::BillboardIdentifier a, ::RPG::Client::Billboard::BillboardIdentifier b)
		{
			return ((::System::Boolean(*)(::RPG::Client::Billboard::BillboardIdentifier, ::RPG::Client::Billboard::BillboardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

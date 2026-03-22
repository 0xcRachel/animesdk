#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xD50C0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xD5050)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD50D0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA256270)
#define RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA256330)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2563F0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC9EC0)
#define RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5040)
#define RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xD5130)
#define RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD5180)

namespace RPG::Client
{
	inline static constexpr unsigned int WaypointIdentifier_TypeDefinitionIndex = 54869;

	struct alignas(4) WaypointIdentifier
	{
		static ::RPG::Client::WaypointIdentifier* StaticGet_Invalid()
		{
			return (::RPG::Client::WaypointIdentifier*)Il2CppClass::FromTypeDefinitionIndex(WaypointIdentifier_TypeDefinitionIndex)->GetStaticField(0xDEE0);
		}
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 LittleGameEntityID; // 0x18

		::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _ctor_1(::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CTOR_1_OFFSET))(this, groupID, instanceID, littleGameEntityID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::RPG::Client::WaypointIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WaypointIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::WaypointIdentifier left, ::RPG::Client::WaypointIdentifier right)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier, ::RPG::Client::WaypointIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::WaypointIdentifier left, ::RPG::Client::WaypointIdentifier right)
		{
			return ((::System::Boolean(*)(::RPG::Client::WaypointIdentifier, ::RPG::Client::WaypointIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAYPOINTIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}

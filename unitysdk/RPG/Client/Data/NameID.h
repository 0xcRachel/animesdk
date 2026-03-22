#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DATA_NAMEID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xCC6C0)
#define RPG_CLIENT_DATA_NAMEID_COMPARETO_OFFSET UNITYSDK_OFFSET(0xCC6B0)
#define RPG_CLIENT_DATA_NAMEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCC720)
#define RPG_CLIENT_DATA_NAMEID_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xCC770)
#define RPG_CLIENT_DATA_NAMEID_EQUALS_OFFSET UNITYSDK_OFFSET(0xCC640)
#define RPG_CLIENT_DATA_NAMEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCC650)
#define RPG_CLIENT_DATA_NAMEID_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x8FF8230)
#define RPG_CLIENT_DATA_NAMEID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8FF8100)
#define RPG_CLIENT_DATA_NAMEID_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x8FF6650)
#define RPG_CLIENT_DATA_NAMEID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8FF8150)
#define RPG_CLIENT_DATA_NAMEID_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x8FF8380)
#define RPG_CLIENT_DATA_NAMEID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8FF72B0)
#define RPG_CLIENT_DATA_NAMEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCC6A0)
#define RPG_CLIENT_DATA_NAMEID__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FF84D0)
#define RPG_CLIENT_DATA_NAMEID__CTOR_OFFSET UNITYSDK_OFFSET(0xCC580)
#define RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xCC780)
#define RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCC7C0)
#define RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCC800)

namespace RPG::Client::Data
{
	inline static constexpr unsigned int NameID_TypeDefinitionIndex = 58471;

	struct alignas(4) NameID
	{
		static ::RPG::Client::Data::NameID* StaticGet_Empty()
		{
			return (::RPG::Client::Data::NameID*)Il2CppClass::FromTypeDefinitionIndex(NameID_TypeDefinitionIndex)->GetStaticField(0xFB40);
		}
		static ::System::Int32* StaticGet__emptyHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NameID_TypeDefinitionIndex)->GetStaticField(0xFB44);
		}
		::System::Int32 hash; // 0x10

		::System::Void _ctor(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID__CTOR_OFFSET))(this, s);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo_1(::RPG::Client::Data::NameID other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::Data::NameID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_EQUALS_2_OFFSET))(this, s);
		}

		static ::RPG::Client::Data::NameID op_Implicit(::System::String* s)
		{
			return ((::RPG::Client::Data::NameID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::Int32 op_Implicit_1(::RPG::Client::Data::NameID id)
		{
			return ((::System::Int32(*)(::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_IMPLICIT_1_OFFSET))(id);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Data::NameID id1, ::RPG::Client::Data::NameID id2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID, ::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_EQUALITY_OFFSET))(id1, id2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Data::NameID id1, ::RPG::Client::Data::NameID id2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID, ::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_INEQUALITY_OFFSET))(id1, id2);
		}

		static ::System::Boolean op_Equality_1(::RPG::Client::Data::NameID id, ::System::String* s)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_EQUALITY_1_OFFSET))(id, s);
		}

		static ::System::Boolean op_Inequality_1(::RPG::Client::Data::NameID id, ::System::String* s)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID_OP_INEQUALITY_1_OFFSET))(id, s);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_NAMEID___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

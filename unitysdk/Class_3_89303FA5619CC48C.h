#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/IPEndPoint.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class SocketAddress; }

#define CLASS_3_89303FA5619CC48C_CREATE_OFFSET UNITYSDK_OFFSET(0x172D3540)
#define CLASS_3_89303FA5619CC48C_EQUALS_OFFSET UNITYSDK_OFFSET(0x172D3650)
#define CLASS_3_89303FA5619CC48C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172D3700)
#define CLASS_3_89303FA5619CC48C_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x172D3530)
#define CLASS_3_89303FA5619CC48C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172D3720)
#define CLASS_3_89303FA5619CC48C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172D3140)
#define CLASS_3_89303FA5619CC48C__CTOR_2_OFFSET UNITYSDK_OFFSET(0x172D30C0)
#define CLASS_3_89303FA5619CC48C__CTOR_OFFSET UNITYSDK_OFFSET(0x172D3490)

inline static constexpr unsigned int Class_3_89303FA5619CC48C_TypeDefinitionIndex = 32865;

class Class_3_89303FA5619CC48C : public ::System::Net::IPEndPoint
{
public:
	::System::Net::SocketAddress* Field_3_0; // 0x20

	::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Net::IPAddress* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::Net::IPEndPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C__CTOR_2_OFFSET))(this, a1);
	}

	::System::Net::SocketAddress* Serialize()
	{
		return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C_SERIALIZE_OFFSET))(this);
	}

	::System::Net::EndPoint* Create(::System::Net::SocketAddress* a1)
	{
		return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C_CREATE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89303FA5619CC48C_TOSTRING_OFFSET))(this);
	}
};

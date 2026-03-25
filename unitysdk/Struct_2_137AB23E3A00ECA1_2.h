#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_137AB23E3A00ECA1_2_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1497420)
#define STRUCT_2_137AB23E3A00ECA1_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1497550)
#define STRUCT_2_137AB23E3A00ECA1_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x14974E0)
#define STRUCT_2_137AB23E3A00ECA1_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1497560)
#define STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_726D00087F5202C3_1_OFFSET UNITYSDK_OFFSET(0x10AFB560)
#define STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_726D00087F5202C3_OFFSET UNITYSDK_OFFSET(0x10AFB430)
#define STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_8227E2C527665382_OFFSET UNITYSDK_OFFSET(0x1497360)
#define STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x14973B0)
#define STRUCT_2_137AB23E3A00ECA1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1497350)
#define STRUCT_2_137AB23E3A00ECA1_2___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14975C0)
#define STRUCT_2_137AB23E3A00ECA1_2___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1497610)

inline static constexpr unsigned int Struct_2_137AB23E3A00ECA1_2_TypeDefinitionIndex = 61353;

struct alignas(4) Struct_2_137AB23E3A00ECA1_2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_8227E2C527665382()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_8227E2C527665382_OFFSET))(this);
	}

	::System::Void Method_2_842446766C7EDE9B(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_726D00087F5202C3(::Struct_2_137AB23E3A00ECA1_2 a1, ::Struct_2_137AB23E3A00ECA1_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_137AB23E3A00ECA1_2, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_726D00087F5202C3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_726D00087F5202C3_1(::Struct_2_137AB23E3A00ECA1_2 a1, ::Struct_2_137AB23E3A00ECA1_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_137AB23E3A00ECA1_2, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_METHOD_2_726D00087F5202C3_1_OFFSET))(a1, a2);
	}

	::System::Int32 CompareTo(::Struct_2_137AB23E3A00ECA1_2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_COMPARETO_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_137AB23E3A00ECA1_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

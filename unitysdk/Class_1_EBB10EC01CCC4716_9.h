#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1777E3B0)
#define CLASS_1_EBB10EC01CCC4716_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1777DD50)
#define CLASS_1_EBB10EC01CCC4716_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1777DF60)
#define CLASS_1_EBB10EC01CCC4716_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1777DF00)
#define CLASS_1_EBB10EC01CCC4716_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1777E0B0)
#define CLASS_1_EBB10EC01CCC4716_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1777E770)
#define CLASS_1_EBB10EC01CCC4716_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1777E6D0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1777DE00)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1777DE40)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1777DE60)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1777DE80)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1777DEE0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1777DDE0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1777DE10)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1777DE50)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1777DE70)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1777DE90)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1777DEF0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1777DDF0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1777DEB0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1777DEA0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1777DED0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1777DE30)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1777DEC0)
#define CLASS_1_EBB10EC01CCC4716_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1777DE20)
#define CLASS_1_EBB10EC01CCC4716_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1777DCE0)
#define CLASS_1_EBB10EC01CCC4716_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1777E170)
#define CLASS_1_EBB10EC01CCC4716_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1777E1D0)
#define CLASS_1_EBB10EC01CCC4716_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1777DD00)
#define CLASS_1_EBB10EC01CCC4716_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1777DCF0)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_9_TypeDefinitionIndex = 23660;

class Class_1_EBB10EC01CCC4716_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_10; // 0x20
	::System::UInt32 Field_1_18; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::Boolean Field_1_16; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Double Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_9*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_9* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_9*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_9*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

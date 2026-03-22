#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A1329B6B19F70B0_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175E2000)
#define CLASS_1_0A1329B6B19F70B0_10_CLONE_OFFSET UNITYSDK_OFFSET(0x175E1AE0)
#define CLASS_1_0A1329B6B19F70B0_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175E1C80)
#define CLASS_1_0A1329B6B19F70B0_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x175E1BC0)
#define CLASS_1_0A1329B6B19F70B0_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175E1D40)
#define CLASS_1_0A1329B6B19F70B0_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175E2350)
#define CLASS_1_0A1329B6B19F70B0_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175E22D0)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x175E1B30)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x175E1B50)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x175E1B70)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x175E1B90)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175E1B10)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x175E1BB0)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x175E1B40)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x175E1B60)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x175E1B80)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x175E1BA0)
#define CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175E1B20)
#define CLASS_1_0A1329B6B19F70B0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175E19F0)
#define CLASS_1_0A1329B6B19F70B0_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175E1E60)
#define CLASS_1_0A1329B6B19F70B0_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x175E1EC0)
#define CLASS_1_0A1329B6B19F70B0_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E2480)
#define CLASS_1_0A1329B6B19F70B0_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175E1A50)
#define CLASS_1_0A1329B6B19F70B0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x175E1A00)

inline static constexpr unsigned int Class_1_0A1329B6B19F70B0_10_TypeDefinitionIndex = 26646;

class Class_1_0A1329B6B19F70B0_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A1329B6B19F70B0_10_TypeDefinitionIndex)->GetStaticField(0x19EA0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A1329B6B19F70B0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_10*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A1329B6B19F70B0_10* Clone()
	{
		return ((::Class_1_0A1329B6B19F70B0_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A1329B6B19F70B0_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_10*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A1329B6B19F70B0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_10*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A1329B6B19F70B0_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355C62D538F2A42A;
class Class_1_FA4F4A67B1C04320_636;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BB4B99DE4C2501EC_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1809C210)
#define CLASS_1_BB4B99DE4C2501EC_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1809BC20)
#define CLASS_1_BB4B99DE4C2501EC_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1809BD20)
#define CLASS_1_BB4B99DE4C2501EC_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1809BCF0)
#define CLASS_1_BB4B99DE4C2501EC_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1809BE30)
#define CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1809C660)
#define CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1809C530)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1809BC60)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1809BC90)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1809BCC0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1809BCA0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1809BC50)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1809BC70)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1809BCB0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1809BCE0)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1809BC80)
#define CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1809BCD0)
#define CLASS_1_BB4B99DE4C2501EC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1809BA80)
#define CLASS_1_BB4B99DE4C2501EC_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1809C000)
#define CLASS_1_BB4B99DE4C2501EC_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1809C060)
#define CLASS_1_BB4B99DE4C2501EC_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809C7D0)
#define CLASS_1_BB4B99DE4C2501EC_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1809BB00)
#define CLASS_1_BB4B99DE4C2501EC_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1809BA90)

inline static constexpr unsigned int Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex = 25941;

class Class_1_BB4B99DE4C2501EC_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_636*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_636*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x3A9F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_355C62D538F2A42A*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_355C62D538F2A42A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_6_TypeDefinitionIndex)->GetStaticField(0x3A9F8);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_355C62D538F2A42A*>* Field_1_10; // 0x20
	::System::UInt64 Field_1_7; // 0x28
	::System::Int64 Field_1_12; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Boolean Field_1_14; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_6* Clone()
	{
		return ((::Class_1_BB4B99DE4C2501EC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_636*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_355C62D538F2A42A*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_355C62D538F2A42A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};

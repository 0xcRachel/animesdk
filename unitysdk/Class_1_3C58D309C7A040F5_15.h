#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_961FA5C09972E05C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3C58D309C7A040F5_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17801350)
#define CLASS_1_3C58D309C7A040F5_15_CLONE_OFFSET UNITYSDK_OFFSET(0x17800ED0)
#define CLASS_1_3C58D309C7A040F5_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17801070)
#define CLASS_1_3C58D309C7A040F5_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x17800F50)
#define CLASS_1_3C58D309C7A040F5_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17801120)
#define CLASS_1_3C58D309C7A040F5_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17801520)
#define CLASS_1_3C58D309C7A040F5_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17801480)
#define CLASS_1_3C58D309C7A040F5_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17800F30)
#define CLASS_1_3C58D309C7A040F5_15_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17800F20)
#define CLASS_1_3C58D309C7A040F5_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17800F40)
#define CLASS_1_3C58D309C7A040F5_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17800DB0)
#define CLASS_1_3C58D309C7A040F5_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17801210)
#define CLASS_1_3C58D309C7A040F5_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x17801270)
#define CLASS_1_3C58D309C7A040F5_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x17801600)
#define CLASS_1_3C58D309C7A040F5_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17800E10)
#define CLASS_1_3C58D309C7A040F5_15__CTOR_OFFSET UNITYSDK_OFFSET(0x17800DC0)

inline static constexpr unsigned int Class_1_3C58D309C7A040F5_15_TypeDefinitionIndex = 23411;

class Class_1_3C58D309C7A040F5_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_961FA5C09972E05C*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_961FA5C09972E05C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C58D309C7A040F5_15_TypeDefinitionIndex)->GetStaticField(0x412B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3C58D309C7A040F5_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_15*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3C58D309C7A040F5_15* Clone()
	{
		return ((::Class_1_3C58D309C7A040F5_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3C58D309C7A040F5_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3C58D309C7A040F5_15*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3C58D309C7A040F5_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_15*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3C58D309C7A040F5_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};

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

#define CLASS_1_9A5DF077ABBBFC6B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AB1530)
#define CLASS_1_9A5DF077ABBBFC6B_CLONE_OFFSET UNITYSDK_OFFSET(0x17AB10C0)
#define CLASS_1_9A5DF077ABBBFC6B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AB1160)
#define CLASS_1_9A5DF077ABBBFC6B_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AB1130)
#define CLASS_1_9A5DF077ABBBFC6B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AB1220)
#define CLASS_1_9A5DF077ABBBFC6B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AB1660)
#define CLASS_1_9A5DF077ABBBFC6B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AB15F0)
#define CLASS_1_9A5DF077ABBBFC6B_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17AB1120)
#define CLASS_1_9A5DF077ABBBFC6B_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17AB10F0)
#define CLASS_1_9A5DF077ABBBFC6B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17AB1110)
#define CLASS_1_9A5DF077ABBBFC6B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17AB1100)
#define CLASS_1_9A5DF077ABBBFC6B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AB0F30)
#define CLASS_1_9A5DF077ABBBFC6B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AB1400)
#define CLASS_1_9A5DF077ABBBFC6B_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AB1460)
#define CLASS_1_9A5DF077ABBBFC6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AB1780)
#define CLASS_1_9A5DF077ABBBFC6B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AB0FD0)
#define CLASS_1_9A5DF077ABBBFC6B__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB0F40)

inline static constexpr unsigned int Class_1_9A5DF077ABBBFC6B_TypeDefinitionIndex = 26451;

class Class_1_9A5DF077ABBBFC6B : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A5DF077ABBBFC6B_TypeDefinitionIndex)->GetStaticField(0x3C0E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A5DF077ABBBFC6B_TypeDefinitionIndex)->GetStaticField(0x3C0E8);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9A5DF077ABBBFC6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A5DF077ABBBFC6B*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9A5DF077ABBBFC6B* Clone()
	{
		return ((::Class_1_9A5DF077ABBBFC6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9A5DF077ABBBFC6B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9A5DF077ABBBFC6B*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9A5DF077ABBBFC6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A5DF077ABBBFC6B*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A5DF077ABBBFC6B_MERGEFROM_1_OFFSET))(this, a1);
	}
};

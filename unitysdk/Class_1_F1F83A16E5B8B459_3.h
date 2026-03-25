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

#define CLASS_1_F1F83A16E5B8B459_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D0EB80)
#define CLASS_1_F1F83A16E5B8B459_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17D0E660)
#define CLASS_1_F1F83A16E5B8B459_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D0E790)
#define CLASS_1_F1F83A16E5B8B459_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D0E760)
#define CLASS_1_F1F83A16E5B8B459_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D0E860)
#define CLASS_1_F1F83A16E5B8B459_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D0EF20)
#define CLASS_1_F1F83A16E5B8B459_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D0EE90)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D0E6F0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D0E690)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x17D0E6E0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17D0E6C0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17D0E730)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D0E700)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D0E6A0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x17D0E6D0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17D0E6B0)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17D0E750)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D0E720)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17D0E740)
#define CLASS_1_F1F83A16E5B8B459_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D0E710)
#define CLASS_1_F1F83A16E5B8B459_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D0E560)
#define CLASS_1_F1F83A16E5B8B459_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D0E9B0)
#define CLASS_1_F1F83A16E5B8B459_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D0EA10)
#define CLASS_1_F1F83A16E5B8B459_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D0F070)
#define CLASS_1_F1F83A16E5B8B459_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D0E5C0)
#define CLASS_1_F1F83A16E5B8B459_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0E570)

inline static constexpr unsigned int Class_1_F1F83A16E5B8B459_3_TypeDefinitionIndex = 26311;

class Class_1_F1F83A16E5B8B459_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1F83A16E5B8B459_3_TypeDefinitionIndex)->GetStaticField(0xD4A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_10; // 0x20
	::System::Boolean Field_1_15; // 0x21
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_8; // 0x28
	::System::Int64 Field_1_4; // 0x30
	::System::Int64 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F1F83A16E5B8B459_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F1F83A16E5B8B459_3* Clone()
	{
		return ((::Class_1_F1F83A16E5B8B459_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F1F83A16E5B8B459_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F1F83A16E5B8B459_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F1F83A16E5B8B459_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};

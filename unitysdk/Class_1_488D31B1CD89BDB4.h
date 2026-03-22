#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B902E336FF3D37;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_488D31B1CD89BDB4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1765C360)
#define CLASS_1_488D31B1CD89BDB4_CLONE_OFFSET UNITYSDK_OFFSET(0x1765BFA0)
#define CLASS_1_488D31B1CD89BDB4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1765C190)
#define CLASS_1_488D31B1CD89BDB4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1765C0B0)
#define CLASS_1_488D31B1CD89BDB4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1765C240)
#define CLASS_1_488D31B1CD89BDB4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1765C4A0)
#define CLASS_1_488D31B1CD89BDB4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1765C3C0)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1765C070)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1765C080)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1765C0A0)
#define CLASS_1_488D31B1CD89BDB4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1765C090)
#define CLASS_1_488D31B1CD89BDB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1765BEF0)
#define CLASS_1_488D31B1CD89BDB4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1765C280)
#define CLASS_1_488D31B1CD89BDB4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1765C2E0)
#define CLASS_1_488D31B1CD89BDB4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1765BF10)
#define CLASS_1_488D31B1CD89BDB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1765BF00)

inline static constexpr unsigned int Class_1_488D31B1CD89BDB4_TypeDefinitionIndex = 25357;

class Class_1_488D31B1CD89BDB4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_64B902E336FF3D37* Field_1_2; // 0x18
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_488D31B1CD89BDB4* Clone()
	{
		return ((::Class_1_488D31B1CD89BDB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_CLONE_OFFSET))(this);
	}

	::Class_1_64B902E336FF3D37* Method_1_24748FC20F375725()
	{
		return ((::Class_1_64B902E336FF3D37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_64B902E336FF3D37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64B902E336FF3D37*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_488D31B1CD89BDB4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

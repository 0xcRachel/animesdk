#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_541CE7568126AB53;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FFE64310E4DB1CD6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179A7110)
#define CLASS_1_FFE64310E4DB1CD6_CLONE_OFFSET UNITYSDK_OFFSET(0x179A6DB0)
#define CLASS_1_FFE64310E4DB1CD6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179A6F00)
#define CLASS_1_FFE64310E4DB1CD6_EQUALS_OFFSET UNITYSDK_OFFSET(0x179A6E50)
#define CLASS_1_FFE64310E4DB1CD6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179A6FB0)
#define CLASS_1_FFE64310E4DB1CD6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179A7270)
#define CLASS_1_FFE64310E4DB1CD6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179A71E0)
#define CLASS_1_FFE64310E4DB1CD6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x179A6E10)
#define CLASS_1_FFE64310E4DB1CD6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179A6E30)
#define CLASS_1_FFE64310E4DB1CD6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x179A6E20)
#define CLASS_1_FFE64310E4DB1CD6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x179A6E40)
#define CLASS_1_FFE64310E4DB1CD6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179A6D40)
#define CLASS_1_FFE64310E4DB1CD6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179A7030)
#define CLASS_1_FFE64310E4DB1CD6_WRITETO_OFFSET UNITYSDK_OFFSET(0x179A7090)
#define CLASS_1_FFE64310E4DB1CD6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179A6D60)
#define CLASS_1_FFE64310E4DB1CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x179A6D50)

inline static constexpr unsigned int Class_1_FFE64310E4DB1CD6_TypeDefinitionIndex = 23224;

class Class_1_FFE64310E4DB1CD6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_541CE7568126AB53* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FFE64310E4DB1CD6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FFE64310E4DB1CD6* Clone()
	{
		return ((::Class_1_FFE64310E4DB1CD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_541CE7568126AB53* Method_1_24748FC20F375725()
	{
		return ((::Class_1_541CE7568126AB53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_541CE7568126AB53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_541CE7568126AB53*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FFE64310E4DB1CD6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FFE64310E4DB1CD6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE64310E4DB1CD6_MERGEFROM_1_OFFSET))(this, a1);
	}
};

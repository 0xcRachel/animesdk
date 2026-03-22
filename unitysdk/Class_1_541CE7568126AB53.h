#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_21DCD4640D389503_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_541CE7568126AB53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17532FF0)
#define CLASS_1_541CE7568126AB53_CLONE_OFFSET UNITYSDK_OFFSET(0x17532BA0)
#define CLASS_1_541CE7568126AB53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17532DD0)
#define CLASS_1_541CE7568126AB53_EQUALS_OFFSET UNITYSDK_OFFSET(0x17532CC0)
#define CLASS_1_541CE7568126AB53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17532EB0)
#define CLASS_1_541CE7568126AB53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17533140)
#define CLASS_1_541CE7568126AB53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17533080)
#define CLASS_1_541CE7568126AB53_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17532CA0)
#define CLASS_1_541CE7568126AB53_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17532C80)
#define CLASS_1_541CE7568126AB53_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17532CB0)
#define CLASS_1_541CE7568126AB53_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17532C90)
#define CLASS_1_541CE7568126AB53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17532AE0)
#define CLASS_1_541CE7568126AB53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17532F10)
#define CLASS_1_541CE7568126AB53_WRITETO_OFFSET UNITYSDK_OFFSET(0x17532F70)
#define CLASS_1_541CE7568126AB53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17532B00)
#define CLASS_1_541CE7568126AB53__CTOR_OFFSET UNITYSDK_OFFSET(0x17532AF0)

inline static constexpr unsigned int Class_1_541CE7568126AB53_TypeDefinitionIndex = 23133;

class Class_1_541CE7568126AB53 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_21DCD4640D389503_16* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_541CE7568126AB53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_541CE7568126AB53*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_541CE7568126AB53* Clone()
	{
		return ((::Class_1_541CE7568126AB53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_16* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_541CE7568126AB53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_541CE7568126AB53*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_541CE7568126AB53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_541CE7568126AB53*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_541CE7568126AB53_MERGEFROM_1_OFFSET))(this, a1);
	}
};

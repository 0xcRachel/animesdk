#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_370B64CFA1979F38_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17749D10)
#define CLASS_1_370B64CFA1979F38_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17749970)
#define CLASS_1_370B64CFA1979F38_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17749AF0)
#define CLASS_1_370B64CFA1979F38_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17749A20)
#define CLASS_1_370B64CFA1979F38_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17749B90)
#define CLASS_1_370B64CFA1979F38_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17749DE0)
#define CLASS_1_370B64CFA1979F38_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17749D70)
#define CLASS_1_370B64CFA1979F38_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17749A00)
#define CLASS_1_370B64CFA1979F38_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17749A10)
#define CLASS_1_370B64CFA1979F38_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17749900)
#define CLASS_1_370B64CFA1979F38_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17749C50)
#define CLASS_1_370B64CFA1979F38_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17749CB0)
#define CLASS_1_370B64CFA1979F38_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17749920)
#define CLASS_1_370B64CFA1979F38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17749910)

inline static constexpr unsigned int Class_1_370B64CFA1979F38_2_TypeDefinitionIndex = 23893;

class Class_1_370B64CFA1979F38_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_3DE734113B1E313B_1* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_370B64CFA1979F38_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_2*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_370B64CFA1979F38_2* Clone()
	{
		return ((::Class_1_370B64CFA1979F38_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_CLONE_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_370B64CFA1979F38_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_370B64CFA1979F38_2*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_370B64CFA1979F38_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_2*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_370B64CFA1979F38_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

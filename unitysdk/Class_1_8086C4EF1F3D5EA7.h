#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D96BFF51520C4AF;
class Class_1_A4E2764947F50E01;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8086C4EF1F3D5EA7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18156270)
#define CLASS_1_8086C4EF1F3D5EA7_CLONE_OFFSET UNITYSDK_OFFSET(0x1814C570)
#define CLASS_1_8086C4EF1F3D5EA7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18156010)
#define CLASS_1_8086C4EF1F3D5EA7_EQUALS_OFFSET UNITYSDK_OFFSET(0x18155FB0)
#define CLASS_1_8086C4EF1F3D5EA7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1814C860)
#define CLASS_1_8086C4EF1F3D5EA7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18156410)
#define CLASS_1_8086C4EF1F3D5EA7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1814CD60)
#define CLASS_1_8086C4EF1F3D5EA7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18155F80)
#define CLASS_1_8086C4EF1F3D5EA7_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x18155F70)
#define CLASS_1_8086C4EF1F3D5EA7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18155FA0)
#define CLASS_1_8086C4EF1F3D5EA7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18155F90)
#define CLASS_1_8086C4EF1F3D5EA7_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x18155F60)
#define CLASS_1_8086C4EF1F3D5EA7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18155E20)
#define CLASS_1_8086C4EF1F3D5EA7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18156110)
#define CLASS_1_8086C4EF1F3D5EA7_WRITETO_OFFSET UNITYSDK_OFFSET(0x18156170)
#define CLASS_1_8086C4EF1F3D5EA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x18156530)
#define CLASS_1_8086C4EF1F3D5EA7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18155E30)
#define CLASS_1_8086C4EF1F3D5EA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1814CD10)

inline static constexpr unsigned int Class_1_8086C4EF1F3D5EA7_TypeDefinitionIndex = 22937;

class Class_1_8086C4EF1F3D5EA7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_A4E2764947F50E01*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_A4E2764947F50E01*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8086C4EF1F3D5EA7_TypeDefinitionIndex)->GetStaticField(0x4690);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	::Class_1_6D96BFF51520C4AF* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A4E2764947F50E01*>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8086C4EF1F3D5EA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8086C4EF1F3D5EA7*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8086C4EF1F3D5EA7* Clone()
	{
		return ((::Class_1_8086C4EF1F3D5EA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Class_1_6D96BFF51520C4AF* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6D96BFF51520C4AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6D96BFF51520C4AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D96BFF51520C4AF*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A4E2764947F50E01*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A4E2764947F50E01*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8086C4EF1F3D5EA7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8086C4EF1F3D5EA7*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8086C4EF1F3D5EA7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8086C4EF1F3D5EA7*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8086C4EF1F3D5EA7_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_120;
class Class_1_E30585F0EAEFDF1E_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA103D0)
#define CLASS_1_752A428518BC8100_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA0FED0)
#define CLASS_1_752A428518BC8100_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA100A0)
#define CLASS_1_752A428518BC8100_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA0FF50)
#define CLASS_1_752A428518BC8100_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA10190)
#define CLASS_1_752A428518BC8100_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA10620)
#define CLASS_1_752A428518BC8100_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA104B0)
#define CLASS_1_752A428518BC8100_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AA0FF30)
#define CLASS_1_752A428518BC8100_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA0FD00)
#define CLASS_1_752A428518BC8100_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AA0FF20)
#define CLASS_1_752A428518BC8100_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AA0FF40)
#define CLASS_1_752A428518BC8100_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA0FD60)
#define CLASS_1_752A428518BC8100_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA10290)
#define CLASS_1_752A428518BC8100_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA102F0)
#define CLASS_1_752A428518BC8100_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA10850)
#define CLASS_1_752A428518BC8100_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA0FDC0)
#define CLASS_1_752A428518BC8100_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA0FD70)

inline static constexpr unsigned int Class_1_752A428518BC8100_9_TypeDefinitionIndex = 33274;

class Class_1_752A428518BC8100_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_9_TypeDefinitionIndex)->GetStaticField(0x2000);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_120*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_120*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_9_TypeDefinitionIndex)->GetStaticField(0x2008);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Class_1_E30585F0EAEFDF1E_12* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_120*>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_9*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_9* Clone()
	{
		return ((::Class_1_752A428518BC8100_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_120*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_120*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_E30585F0EAEFDF1E_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E30585F0EAEFDF1E_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E30585F0EAEFDF1E_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_12*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_9*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_9*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

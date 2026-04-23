#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E3361428001BACB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_49F04DC1BC0F5D98_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A166F10)
#define CLASS_1_49F04DC1BC0F5D98_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1A166C30)
#define CLASS_1_49F04DC1BC0F5D98_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A166D60)
#define CLASS_1_49F04DC1BC0F5D98_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A166CB0)
#define CLASS_1_49F04DC1BC0F5D98_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A166E00)
#define CLASS_1_49F04DC1BC0F5D98_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A167000)
#define CLASS_1_49F04DC1BC0F5D98_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A166F70)
#define CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A166C90)
#define CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A166B90)
#define CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A166CA0)
#define CLASS_1_49F04DC1BC0F5D98_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A166BC0)
#define CLASS_1_49F04DC1BC0F5D98_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A166E50)
#define CLASS_1_49F04DC1BC0F5D98_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A166EB0)
#define CLASS_1_49F04DC1BC0F5D98_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1670B0)
#define CLASS_1_49F04DC1BC0F5D98_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A166BE0)
#define CLASS_1_49F04DC1BC0F5D98_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A166BD0)

inline static constexpr unsigned int Class_1_49F04DC1BC0F5D98_9_TypeDefinitionIndex = 30988;

class Class_1_49F04DC1BC0F5D98_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F04DC1BC0F5D98_9_TypeDefinitionIndex)->GetStaticField(0x2EE20);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Class_1_1E3361428001BACB* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_49F04DC1BC0F5D98_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98_9*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_49F04DC1BC0F5D98_9* Clone()
	{
		return ((::Class_1_49F04DC1BC0F5D98_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_CLONE_OFFSET))(this);
	}

	::Class_1_1E3361428001BACB* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1E3361428001BACB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1E3361428001BACB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E3361428001BACB*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_49F04DC1BC0F5D98_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98_9*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_49F04DC1BC0F5D98_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98_9*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

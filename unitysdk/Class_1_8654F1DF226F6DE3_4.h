#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AC23260)
#define CLASS_1_8654F1DF226F6DE3_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1AC22EC0)
#define CLASS_1_8654F1DF226F6DE3_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AC23050)
#define CLASS_1_8654F1DF226F6DE3_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC22F90)
#define CLASS_1_8654F1DF226F6DE3_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC230E0)
#define CLASS_1_8654F1DF226F6DE3_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AC233C0)
#define CLASS_1_8654F1DF226F6DE3_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AC23380)
#define CLASS_1_8654F1DF226F6DE3_4_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1AC22F40)
#define CLASS_1_8654F1DF226F6DE3_4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AC22F30)
#define CLASS_1_8654F1DF226F6DE3_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AC22E00)
#define CLASS_1_8654F1DF226F6DE3_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AC22E60)
#define CLASS_1_8654F1DF226F6DE3_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC231A0)
#define CLASS_1_8654F1DF226F6DE3_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AC23200)
#define CLASS_1_8654F1DF226F6DE3_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC23550)
#define CLASS_1_8654F1DF226F6DE3_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC22E80)
#define CLASS_1_8654F1DF226F6DE3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22E70)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_4_TypeDefinitionIndex = 24275;

class Class_1_8654F1DF226F6DE3_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_4_TypeDefinitionIndex)->GetStaticField(0x99B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_4*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_4* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_4*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_4*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

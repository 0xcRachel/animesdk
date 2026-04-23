#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_18;
class Class_1_3AD2528CD53B1639_12;
class Class_1_BB4B99DE4C2501EC_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FF03248024BAA97A_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A25D0A0)
#define CLASS_1_FF03248024BAA97A_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A25CC40)
#define CLASS_1_FF03248024BAA97A_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A25CE00)
#define CLASS_1_FF03248024BAA97A_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A25CCD0)
#define CLASS_1_FF03248024BAA97A_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A25CF20)
#define CLASS_1_FF03248024BAA97A_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A25D2A0)
#define CLASS_1_FF03248024BAA97A_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A25D160)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A25CC90)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1A25CCB0)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A25CC70)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A25CB20)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A25CCA0)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1A25CCC0)
#define CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A25CC80)
#define CLASS_1_FF03248024BAA97A_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A25CB50)
#define CLASS_1_FF03248024BAA97A_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A25CF90)
#define CLASS_1_FF03248024BAA97A_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A25CFF0)
#define CLASS_1_FF03248024BAA97A_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A25D400)
#define CLASS_1_FF03248024BAA97A_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A25CB70)
#define CLASS_1_FF03248024BAA97A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A25CB60)

inline static constexpr unsigned int Class_1_FF03248024BAA97A_2_TypeDefinitionIndex = 31250;

class Class_1_FF03248024BAA97A_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF03248024BAA97A_2_TypeDefinitionIndex)->GetStaticField(0x17400);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_21DCD4640D389503_18* Field_1_5; // 0x18
	::Class_1_3AD2528CD53B1639_12* Field_1_7; // 0x20
	::Class_1_BB4B99DE4C2501EC_2* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FF03248024BAA97A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FF03248024BAA97A_2* Clone()
	{
		return ((::Class_1_FF03248024BAA97A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_CLONE_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BB4B99DE4C2501EC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BB4B99DE4C2501EC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_18* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_3AD2528CD53B1639_12* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_3AD2528CD53B1639_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_3AD2528CD53B1639_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_12*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FF03248024BAA97A_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FF03248024BAA97A_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FF03248024BAA97A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

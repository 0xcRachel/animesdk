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

#define CLASS_1_FF03248024BAA97A_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19E67BD0)
#define CLASS_1_FF03248024BAA97A_4_CLONE_OFFSET UNITYSDK_OFFSET(0x19E67720)
#define CLASS_1_FF03248024BAA97A_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19E67930)
#define CLASS_1_FF03248024BAA97A_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E677D0)
#define CLASS_1_FF03248024BAA97A_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E67A50)
#define CLASS_1_FF03248024BAA97A_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19E67DC0)
#define CLASS_1_FF03248024BAA97A_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19E67C90)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19E67790)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x19E677B0)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19E67770)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19E675D0)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19E677A0)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x19E677C0)
#define CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19E67780)
#define CLASS_1_FF03248024BAA97A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19E67630)
#define CLASS_1_FF03248024BAA97A_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E67AC0)
#define CLASS_1_FF03248024BAA97A_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x19E67B20)
#define CLASS_1_FF03248024BAA97A_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E67F20)
#define CLASS_1_FF03248024BAA97A_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E67650)
#define CLASS_1_FF03248024BAA97A_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19E67640)

inline static constexpr unsigned int Class_1_FF03248024BAA97A_4_TypeDefinitionIndex = 31557;

class Class_1_FF03248024BAA97A_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF03248024BAA97A_4_TypeDefinitionIndex)->GetStaticField(0x47E10);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Class_1_21DCD4640D389503_18* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_BB4B99DE4C2501EC_2* Field_1_7; // 0x20
	::Class_1_3AD2528CD53B1639_12* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FF03248024BAA97A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FF03248024BAA97A_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FF03248024BAA97A_4* Clone()
	{
		return ((::Class_1_FF03248024BAA97A_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_12*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_18* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_BB4B99DE4C2501EC_2* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_BB4B99DE4C2501EC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_BB4B99DE4C2501EC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FF03248024BAA97A_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FF03248024BAA97A_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FF03248024BAA97A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_4*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF03248024BAA97A_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_34_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B2C6200)
#define CLASS_1_455008579EB95638_34_CLONE_OFFSET UNITYSDK_OFFSET(0x1B2C5C50)
#define CLASS_1_455008579EB95638_34_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2C5DD0)
#define CLASS_1_455008579EB95638_34_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2C5CD0)
#define CLASS_1_455008579EB95638_34_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2C5EA0)
#define CLASS_1_455008579EB95638_34_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B2C63D0)
#define CLASS_1_455008579EB95638_34_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B2C62E0)
#define CLASS_1_455008579EB95638_34_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1B2C5CB0)
#define CLASS_1_455008579EB95638_34_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1B2C5A80)
#define CLASS_1_455008579EB95638_34_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1B2C5CA0)
#define CLASS_1_455008579EB95638_34_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1B2C5CC0)
#define CLASS_1_455008579EB95638_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2C5AE0)
#define CLASS_1_455008579EB95638_34_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2C60C0)
#define CLASS_1_455008579EB95638_34_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B2C6120)
#define CLASS_1_455008579EB95638_34__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2C6610)
#define CLASS_1_455008579EB95638_34__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2C5B40)
#define CLASS_1_455008579EB95638_34__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C5AF0)

inline static constexpr unsigned int Class_1_455008579EB95638_34_TypeDefinitionIndex = 26794;

class Class_1_455008579EB95638_34 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_34_TypeDefinitionIndex)->GetStaticField(0x137C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_34*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_34_TypeDefinitionIndex)->GetStaticField(0x137C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Class_1_9AD828BA811E7C7A_3* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_34*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_34*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_34* Clone()
	{
		return ((::Class_1_455008579EB95638_34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9AD828BA811E7C7A_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9AD828BA811E7C7A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_3*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_34_MERGEFROM_1_OFFSET))(this, a1);
	}
};

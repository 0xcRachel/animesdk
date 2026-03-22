#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F606812EC9EB69;
class Class_1_FA4F4A67B1C04320_25;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3DE734113B1E313B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17992C00)
#define CLASS_1_3DE734113B1E313B_CLONE_OFFSET UNITYSDK_OFFSET(0x179927F0)
#define CLASS_1_3DE734113B1E313B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179929D0)
#define CLASS_1_3DE734113B1E313B_EQUALS_OFFSET UNITYSDK_OFFSET(0x179928E0)
#define CLASS_1_3DE734113B1E313B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17992AB0)
#define CLASS_1_3DE734113B1E313B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17992D50)
#define CLASS_1_3DE734113B1E313B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17992C90)
#define CLASS_1_3DE734113B1E313B_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x179928C0)
#define CLASS_1_3DE734113B1E313B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x179928A0)
#define CLASS_1_3DE734113B1E313B_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x179928D0)
#define CLASS_1_3DE734113B1E313B_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x179928B0)
#define CLASS_1_3DE734113B1E313B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17992730)
#define CLASS_1_3DE734113B1E313B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17992B20)
#define CLASS_1_3DE734113B1E313B_WRITETO_OFFSET UNITYSDK_OFFSET(0x17992B80)
#define CLASS_1_3DE734113B1E313B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17992750)
#define CLASS_1_3DE734113B1E313B__CTOR_OFFSET UNITYSDK_OFFSET(0x17992740)

inline static constexpr unsigned int Class_1_3DE734113B1E313B_TypeDefinitionIndex = 22539;

class Class_1_3DE734113B1E313B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Class_1_36F606812EC9EB69* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_FA4F4A67B1C04320_25* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3DE734113B1E313B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B* Clone()
	{
		return ((::Class_1_3DE734113B1E313B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_25* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_25*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_36F606812EC9EB69* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_36F606812EC9EB69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_36F606812EC9EB69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3DE734113B1E313B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE734113B1E313B*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3DE734113B1E313B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DE734113B1E313B_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1A263F5BDD91B9DA_Enum_3_FCBB2C507E9B21A3_2.h"
#include "unitysdk/System/Object.h"

class Class_1_4DC6841D62972C54_2;
class Class_1_FA4F4A67B1C04320_40;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1A263F5BDD91B9DA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17820C40)
#define CLASS_1_1A263F5BDD91B9DA_CLONE_OFFSET UNITYSDK_OFFSET(0x17820690)
#define CLASS_1_1A263F5BDD91B9DA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17820760)
#define CLASS_1_1A263F5BDD91B9DA_EQUALS_OFFSET UNITYSDK_OFFSET(0x17820700)
#define CLASS_1_1A263F5BDD91B9DA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17820990)
#define CLASS_1_1A263F5BDD91B9DA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17821080)
#define CLASS_1_1A263F5BDD91B9DA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17820DA0)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x178206E0)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x17820610)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17820590)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x178206F0)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17820670)
#define CLASS_1_1A263F5BDD91B9DA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x178205F0)
#define CLASS_1_1A263F5BDD91B9DA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17820410)
#define CLASS_1_1A263F5BDD91B9DA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17820AC0)
#define CLASS_1_1A263F5BDD91B9DA_WRITETO_OFFSET UNITYSDK_OFFSET(0x17820B20)
#define CLASS_1_1A263F5BDD91B9DA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17820430)
#define CLASS_1_1A263F5BDD91B9DA__CTOR_OFFSET UNITYSDK_OFFSET(0x17820420)

inline static constexpr unsigned int Class_1_1A263F5BDD91B9DA_TypeDefinitionIndex = 22633;

class Class_1_1A263F5BDD91B9DA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3E9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3EA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_1A263F5BDD91B9DA_Enum_3_FCBB2C507E9B21A3_2 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1A263F5BDD91B9DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1A263F5BDD91B9DA* Clone()
	{
		return ((::Class_1_1A263F5BDD91B9DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_CLONE_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_40* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_FA4F4A67B1C04320_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_40*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4DC6841D62972C54_2* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_4DC6841D62972C54_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4DC6841D62972C54_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DC6841D62972C54_2*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_1A263F5BDD91B9DA_Enum_3_FCBB2C507E9B21A3_2 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_1A263F5BDD91B9DA_Enum_3_FCBB2C507E9B21A3_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1A263F5BDD91B9DA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1A263F5BDD91B9DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_MERGEFROM_1_OFFSET))(this, a1);
	}
};

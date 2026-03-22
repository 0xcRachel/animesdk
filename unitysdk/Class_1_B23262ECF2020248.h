#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901.h"
#include "unitysdk/System/Object.h"

class Class_1_BD570EF86E624FB1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B23262ECF2020248_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176A9DF0)
#define CLASS_1_B23262ECF2020248_CLONE_OFFSET UNITYSDK_OFFSET(0x176A9A40)
#define CLASS_1_B23262ECF2020248_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176A9BC0)
#define CLASS_1_B23262ECF2020248_EQUALS_OFFSET UNITYSDK_OFFSET(0x176A9B10)
#define CLASS_1_B23262ECF2020248_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176A9C70)
#define CLASS_1_B23262ECF2020248_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176A9FC0)
#define CLASS_1_B23262ECF2020248_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176A9F00)
#define CLASS_1_B23262ECF2020248_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x176A9AF0)
#define CLASS_1_B23262ECF2020248_METHOD_1_846EDF57F2A478CA_OFFSET UNITYSDK_OFFSET(0x176A9AD0)
#define CLASS_1_B23262ECF2020248_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x176A9B00)
#define CLASS_1_B23262ECF2020248_METHOD_1_CBA8E20523A95EF1_OFFSET UNITYSDK_OFFSET(0x176A9AE0)
#define CLASS_1_B23262ECF2020248_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176A99A0)
#define CLASS_1_B23262ECF2020248_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176A9D00)
#define CLASS_1_B23262ECF2020248_WRITETO_OFFSET UNITYSDK_OFFSET(0x176A9D60)
#define CLASS_1_B23262ECF2020248__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176A99C0)
#define CLASS_1_B23262ECF2020248__CTOR_OFFSET UNITYSDK_OFFSET(0x176A99B0)

inline static constexpr unsigned int Class_1_B23262ECF2020248_TypeDefinitionIndex = 25288;

class Class_1_B23262ECF2020248 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_BD570EF86E624FB1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B23262ECF2020248* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B23262ECF2020248*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B23262ECF2020248* Clone()
	{
		return ((::Class_1_B23262ECF2020248*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_CLONE_OFFSET))(this);
	}

	::Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901 Method_1_846EDF57F2A478CA()
	{
		return ((::Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_METHOD_1_846EDF57F2A478CA_OFFSET))(this);
	}

	::System::Void Method_1_CBA8E20523A95EF1(::Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B23262ECF2020248_Class_1_534EF681CC2FBEA4_1_Enum_3_CC844EE29E976901))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_METHOD_1_CBA8E20523A95EF1_OFFSET))(this, a1);
	}

	::Class_1_BD570EF86E624FB1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD570EF86E624FB1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD570EF86E624FB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B23262ECF2020248* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B23262ECF2020248*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B23262ECF2020248* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B23262ECF2020248*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B23262ECF2020248_MERGEFROM_1_OFFSET))(this, a1);
	}
};

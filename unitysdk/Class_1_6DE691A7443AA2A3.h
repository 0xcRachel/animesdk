#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6DE691A7443AA2A3_Enum_3_060898AA908AAA4E_6.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_328;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6DE691A7443AA2A3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1750BA20)
#define CLASS_1_6DE691A7443AA2A3_CLONE_OFFSET UNITYSDK_OFFSET(0x1750B210)
#define CLASS_1_6DE691A7443AA2A3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1750B2E0)
#define CLASS_1_6DE691A7443AA2A3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1750B280)
#define CLASS_1_6DE691A7443AA2A3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1750B640)
#define CLASS_1_6DE691A7443AA2A3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1750BFA0)
#define CLASS_1_6DE691A7443AA2A3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1750BCC0)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1750B260)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1750B0E0)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x1750B160)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1750B030)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1750B270)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1750B140)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x1750B1E0)
#define CLASS_1_6DE691A7443AA2A3_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1750B0B0)
#define CLASS_1_6DE691A7443AA2A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1750ADD0)
#define CLASS_1_6DE691A7443AA2A3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1750B7E0)
#define CLASS_1_6DE691A7443AA2A3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1750B840)
#define CLASS_1_6DE691A7443AA2A3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1750ADF0)
#define CLASS_1_6DE691A7443AA2A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1750ADE0)

inline static constexpr unsigned int Class_1_6DE691A7443AA2A3_TypeDefinitionIndex = 24153;

class Class_1_6DE691A7443AA2A3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_6DE691A7443AA2A3_Enum_3_060898AA908AAA4E_6 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DE691A7443AA2A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE691A7443AA2A3*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DE691A7443AA2A3* Clone()
	{
		return ((::Class_1_6DE691A7443AA2A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_328* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_FA4F4A67B1C04320_328*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_328*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_6DE691A7443AA2A3_Enum_3_060898AA908AAA4E_6 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_6DE691A7443AA2A3_Enum_3_060898AA908AAA4E_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DE691A7443AA2A3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DE691A7443AA2A3*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DE691A7443AA2A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE691A7443AA2A3*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DE691A7443AA2A3_MERGEFROM_1_OFFSET))(this, a1);
	}
};

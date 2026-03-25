#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3F2088DC1442FBF8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D9FAC0)
#define CLASS_1_3F2088DC1442FBF8_CLONE_OFFSET UNITYSDK_OFFSET(0x17D9F530)
#define CLASS_1_3F2088DC1442FBF8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D9F7B0)
#define CLASS_1_3F2088DC1442FBF8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D9F6B0)
#define CLASS_1_3F2088DC1442FBF8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D9F870)
#define CLASS_1_3F2088DC1442FBF8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D9FCA0)
#define CLASS_1_3F2088DC1442FBF8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D9FC10)
#define CLASS_1_3F2088DC1442FBF8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D9F5E0)
#define CLASS_1_3F2088DC1442FBF8_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17D9F600)
#define CLASS_1_3F2088DC1442FBF8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D9F5F0)
#define CLASS_1_3F2088DC1442FBF8_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17D9F610)
#define CLASS_1_3F2088DC1442FBF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D9F450)
#define CLASS_1_3F2088DC1442FBF8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D9F9B0)
#define CLASS_1_3F2088DC1442FBF8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D9FA10)
#define CLASS_1_3F2088DC1442FBF8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D9F4B0)
#define CLASS_1_3F2088DC1442FBF8__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9F460)

inline static constexpr unsigned int Class_1_3F2088DC1442FBF8_TypeDefinitionIndex = 24396;

class Class_1_3F2088DC1442FBF8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::ByteString* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3F2088DC1442FBF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3F2088DC1442FBF8* Clone()
	{
		return ((::Class_1_3F2088DC1442FBF8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3F2088DC1442FBF8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F2088DC1442FBF8*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3F2088DC1442FBF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_MERGEFROM_1_OFFSET))(this, a1);
	}
};

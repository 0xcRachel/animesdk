#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3F2088DC1442FBF8_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175BC100)
#define CLASS_1_3F2088DC1442FBF8_2_CLONE_OFFSET UNITYSDK_OFFSET(0x175BBC10)
#define CLASS_1_3F2088DC1442FBF8_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175BBDF0)
#define CLASS_1_3F2088DC1442FBF8_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x175BBD20)
#define CLASS_1_3F2088DC1442FBF8_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175BBEB0)
#define CLASS_1_3F2088DC1442FBF8_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175BC2A0)
#define CLASS_1_3F2088DC1442FBF8_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175BC250)
#define CLASS_1_3F2088DC1442FBF8_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175BBCA0)
#define CLASS_1_3F2088DC1442FBF8_2_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x175BBCC0)
#define CLASS_1_3F2088DC1442FBF8_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175BBCB0)
#define CLASS_1_3F2088DC1442FBF8_2_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x175BBCD0)
#define CLASS_1_3F2088DC1442FBF8_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175BBB30)
#define CLASS_1_3F2088DC1442FBF8_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175BBFF0)
#define CLASS_1_3F2088DC1442FBF8_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x175BC050)
#define CLASS_1_3F2088DC1442FBF8_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175BBB90)
#define CLASS_1_3F2088DC1442FBF8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x175BBB40)

inline static constexpr unsigned int Class_1_3F2088DC1442FBF8_2_TypeDefinitionIndex = 23726;

class Class_1_3F2088DC1442FBF8_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::ByteString* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3F2088DC1442FBF8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_2*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3F2088DC1442FBF8_2* Clone()
	{
		return ((::Class_1_3F2088DC1442FBF8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3F2088DC1442FBF8_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_2*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3F2088DC1442FBF8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_2*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

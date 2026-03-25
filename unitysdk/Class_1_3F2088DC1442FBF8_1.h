#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3F2088DC1442FBF8_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CFF0D0)
#define CLASS_1_3F2088DC1442FBF8_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17CFEB30)
#define CLASS_1_3F2088DC1442FBF8_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CFED80)
#define CLASS_1_3F2088DC1442FBF8_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CFECB0)
#define CLASS_1_3F2088DC1442FBF8_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CFEE50)
#define CLASS_1_3F2088DC1442FBF8_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CFF330)
#define CLASS_1_3F2088DC1442FBF8_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CFF290)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CFEBE0)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CFEBC0)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17CFEC00)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CFEBF0)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CFEBD0)
#define CLASS_1_3F2088DC1442FBF8_1_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17CFEC10)
#define CLASS_1_3F2088DC1442FBF8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CFEA50)
#define CLASS_1_3F2088DC1442FBF8_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CFEF90)
#define CLASS_1_3F2088DC1442FBF8_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CFEFF0)
#define CLASS_1_3F2088DC1442FBF8_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CFEAB0)
#define CLASS_1_3F2088DC1442FBF8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CFEA60)

inline static constexpr unsigned int Class_1_3F2088DC1442FBF8_1_TypeDefinitionIndex = 24397;

class Class_1_3F2088DC1442FBF8_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::ByteString* Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3F2088DC1442FBF8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_1*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3F2088DC1442FBF8_1* Clone()
	{
		return ((::Class_1_3F2088DC1442FBF8_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3F2088DC1442FBF8_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_1*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3F2088DC1442FBF8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_1*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F2088DC1442FBF8_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

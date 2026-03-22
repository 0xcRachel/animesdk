#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BB577D0A6A4EBDEC_Enum_3_2E741879C8CDBAFC_15.h"
#include "unitysdk/System/Object.h"

class Class_1_8C3F509D34B4C4A1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BB577D0A6A4EBDEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1784B1D0)
#define CLASS_1_BB577D0A6A4EBDEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1784AEE0)
#define CLASS_1_BB577D0A6A4EBDEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1784AF60)
#define CLASS_1_BB577D0A6A4EBDEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1784AF30)
#define CLASS_1_BB577D0A6A4EBDEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1784B090)
#define CLASS_1_BB577D0A6A4EBDEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1784B330)
#define CLASS_1_BB577D0A6A4EBDEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1784B240)
#define CLASS_1_BB577D0A6A4EBDEC_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1784AF10)
#define CLASS_1_BB577D0A6A4EBDEC_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1784AF20)
#define CLASS_1_BB577D0A6A4EBDEC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1784AEC0)
#define CLASS_1_BB577D0A6A4EBDEC_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1784AE80)
#define CLASS_1_BB577D0A6A4EBDEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1784ADD0)
#define CLASS_1_BB577D0A6A4EBDEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1784B0F0)
#define CLASS_1_BB577D0A6A4EBDEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1784B150)
#define CLASS_1_BB577D0A6A4EBDEC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1784ADF0)
#define CLASS_1_BB577D0A6A4EBDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1784ADE0)

inline static constexpr unsigned int Class_1_BB577D0A6A4EBDEC_TypeDefinitionIndex = 25797;

class Class_1_BB577D0A6A4EBDEC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_BB577D0A6A4EBDEC_Enum_3_2E741879C8CDBAFC_15 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BB577D0A6A4EBDEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB577D0A6A4EBDEC*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BB577D0A6A4EBDEC* Clone()
	{
		return ((::Class_1_BB577D0A6A4EBDEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_CLONE_OFFSET))(this);
	}

	::Class_1_8C3F509D34B4C4A1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_8C3F509D34B4C4A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8C3F509D34B4C4A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C3F509D34B4C4A1*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_BB577D0A6A4EBDEC_Enum_3_2E741879C8CDBAFC_15 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_BB577D0A6A4EBDEC_Enum_3_2E741879C8CDBAFC_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BB577D0A6A4EBDEC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BB577D0A6A4EBDEC*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BB577D0A6A4EBDEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB577D0A6A4EBDEC*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB577D0A6A4EBDEC_MERGEFROM_1_OFFSET))(this, a1);
	}
};

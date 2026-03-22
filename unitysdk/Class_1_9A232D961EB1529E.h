#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9A232D961EB1529E_Enum_3_2E741879C8CDBAFC_17.h"
#include "unitysdk/System/Object.h"

class Class_1_B139B98AF2D803D6_21;
class Class_1_F97A746160B55249;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9A232D961EB1529E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1778BC30)
#define CLASS_1_9A232D961EB1529E_CLONE_OFFSET UNITYSDK_OFFSET(0x1778B870)
#define CLASS_1_9A232D961EB1529E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1778B910)
#define CLASS_1_9A232D961EB1529E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1778B8E0)
#define CLASS_1_9A232D961EB1529E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1778BA90)
#define CLASS_1_9A232D961EB1529E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1778BE00)
#define CLASS_1_9A232D961EB1529E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1778BCE0)
#define CLASS_1_9A232D961EB1529E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1778B8A0)
#define CLASS_1_9A232D961EB1529E_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1778B8C0)
#define CLASS_1_9A232D961EB1529E_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1778B8D0)
#define CLASS_1_9A232D961EB1529E_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1778B850)
#define CLASS_1_9A232D961EB1529E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1778B8B0)
#define CLASS_1_9A232D961EB1529E_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1778B810)
#define CLASS_1_9A232D961EB1529E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1778B740)
#define CLASS_1_9A232D961EB1529E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1778BB10)
#define CLASS_1_9A232D961EB1529E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1778BB70)
#define CLASS_1_9A232D961EB1529E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1778B760)
#define CLASS_1_9A232D961EB1529E__CTOR_OFFSET UNITYSDK_OFFSET(0x1778B750)

inline static constexpr unsigned int Class_1_9A232D961EB1529E_TypeDefinitionIndex = 26135;

class Class_1_9A232D961EB1529E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6DC; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_B139B98AF2D803D6_21* Field_1_2; // 0x20
	::Class_1_9A232D961EB1529E_Enum_3_2E741879C8CDBAFC_17 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9A232D961EB1529E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A232D961EB1529E*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9A232D961EB1529E* Clone()
	{
		return ((::Class_1_9A232D961EB1529E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_CLONE_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_21* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B139B98AF2D803D6_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B139B98AF2D803D6_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_21*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_F97A746160B55249* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_F97A746160B55249*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_F97A746160B55249* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_9A232D961EB1529E_Enum_3_2E741879C8CDBAFC_17 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_9A232D961EB1529E_Enum_3_2E741879C8CDBAFC_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9A232D961EB1529E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9A232D961EB1529E*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9A232D961EB1529E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A232D961EB1529E*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9A232D961EB1529E_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ECB0576E84484CA9_Enum_3_2E741879C8CDBAFC_7.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ECB0576E84484CA9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A06A3B0)
#define CLASS_1_ECB0576E84484CA9_CLONE_OFFSET UNITYSDK_OFFSET(0x1A06A050)
#define CLASS_1_ECB0576E84484CA9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A06A0F0)
#define CLASS_1_ECB0576E84484CA9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A06A0C0)
#define CLASS_1_ECB0576E84484CA9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A06A230)
#define CLASS_1_ECB0576E84484CA9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A06A5F0)
#define CLASS_1_ECB0576E84484CA9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A06A4B0)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A06A080)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1A06A0A0)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A069F10)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A06A090)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A06A0B0)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A06A030)
#define CLASS_1_ECB0576E84484CA9_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1A069FF0)
#define CLASS_1_ECB0576E84484CA9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A069F40)
#define CLASS_1_ECB0576E84484CA9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A06A2A0)
#define CLASS_1_ECB0576E84484CA9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A06A300)
#define CLASS_1_ECB0576E84484CA9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A06A710)
#define CLASS_1_ECB0576E84484CA9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A069F60)
#define CLASS_1_ECB0576E84484CA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A069F50)

inline static constexpr unsigned int Class_1_ECB0576E84484CA9_TypeDefinitionIndex = 25637;

class Class_1_ECB0576E84484CA9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECB0576E84484CA9_TypeDefinitionIndex)->GetStaticField(0x42220);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5E2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_5; // 0x18
	::Class_1_ECB0576E84484CA9_Enum_3_2E741879C8CDBAFC_7 Field_1_6; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ECB0576E84484CA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ECB0576E84484CA9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ECB0576E84484CA9* Clone()
	{
		return ((::Class_1_ECB0576E84484CA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_20* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_075C34D03AFA1215_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_20*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_ECB0576E84484CA9_Enum_3_2E741879C8CDBAFC_7 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_ECB0576E84484CA9_Enum_3_2E741879C8CDBAFC_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ECB0576E84484CA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ECB0576E84484CA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ECB0576E84484CA9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

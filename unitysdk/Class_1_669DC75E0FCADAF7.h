#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_669DC75E0FCADAF7_Enum_3_FCBB2C507E9B21A3_3.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_669DC75E0FCADAF7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B45530)
#define CLASS_1_669DC75E0FCADAF7_CLONE_OFFSET UNITYSDK_OFFSET(0x19B44F40)
#define CLASS_1_669DC75E0FCADAF7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B44FE0)
#define CLASS_1_669DC75E0FCADAF7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B44FB0)
#define CLASS_1_669DC75E0FCADAF7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B45270)
#define CLASS_1_669DC75E0FCADAF7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B45940)
#define CLASS_1_669DC75E0FCADAF7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B457D0)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B44F70)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19B44F90)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B44C30)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x19B44E90)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x19B44DE0)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B44F80)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19B44FA0)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x19B44F10)
#define CLASS_1_669DC75E0FCADAF7_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x19B44E60)
#define CLASS_1_669DC75E0FCADAF7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B44C60)
#define CLASS_1_669DC75E0FCADAF7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B45330)
#define CLASS_1_669DC75E0FCADAF7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B45390)
#define CLASS_1_669DC75E0FCADAF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B45A20)
#define CLASS_1_669DC75E0FCADAF7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B44C80)
#define CLASS_1_669DC75E0FCADAF7__CTOR_OFFSET UNITYSDK_OFFSET(0x19B44C70)

inline static constexpr unsigned int Class_1_669DC75E0FCADAF7_TypeDefinitionIndex = 24877;

class Class_1_669DC75E0FCADAF7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_669DC75E0FCADAF7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_669DC75E0FCADAF7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_669DC75E0FCADAF7_TypeDefinitionIndex)->GetStaticField(0x56F70);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_6; // 0x18
	::Class_1_669DC75E0FCADAF7_Enum_3_FCBB2C507E9B21A3_3 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_669DC75E0FCADAF7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_669DC75E0FCADAF7*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_669DC75E0FCADAF7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_669DC75E0FCADAF7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_669DC75E0FCADAF7* Clone()
	{
		return ((::Class_1_669DC75E0FCADAF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_669DC75E0FCADAF7_Enum_3_FCBB2C507E9B21A3_3 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_669DC75E0FCADAF7_Enum_3_FCBB2C507E9B21A3_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_669DC75E0FCADAF7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_669DC75E0FCADAF7*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_669DC75E0FCADAF7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_669DC75E0FCADAF7*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_669DC75E0FCADAF7_MERGEFROM_1_OFFSET))(this, a1);
	}
};

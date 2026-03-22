#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_18.h"
#include "unitysdk/Enum_3_DB663931210BBC27_35.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_016B52228E650C03_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17371400)
#define CLASS_1_016B52228E650C03_CLONE_OFFSET UNITYSDK_OFFSET(0x17370F90)
#define CLASS_1_016B52228E650C03_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17371190)
#define CLASS_1_016B52228E650C03_EQUALS_OFFSET UNITYSDK_OFFSET(0x173710C0)
#define CLASS_1_016B52228E650C03_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17371230)
#define CLASS_1_016B52228E650C03_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17371680)
#define CLASS_1_016B52228E650C03_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17371620)
#define CLASS_1_016B52228E650C03_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17371020)
#define CLASS_1_016B52228E650C03_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x173710B0)
#define CLASS_1_016B52228E650C03_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17371090)
#define CLASS_1_016B52228E650C03_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17371030)
#define CLASS_1_016B52228E650C03_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x173710A0)
#define CLASS_1_016B52228E650C03_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17371080)
#define CLASS_1_016B52228E650C03_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17371070)
#define CLASS_1_016B52228E650C03_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17371050)
#define CLASS_1_016B52228E650C03_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17371060)
#define CLASS_1_016B52228E650C03_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17371040)
#define CLASS_1_016B52228E650C03_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17370F20)
#define CLASS_1_016B52228E650C03_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17371270)
#define CLASS_1_016B52228E650C03_WRITETO_OFFSET UNITYSDK_OFFSET(0x173712D0)
#define CLASS_1_016B52228E650C03__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17370F40)
#define CLASS_1_016B52228E650C03__CTOR_OFFSET UNITYSDK_OFFSET(0x17370F30)

inline static constexpr unsigned int Class_1_016B52228E650C03_TypeDefinitionIndex = 24329;

class Class_1_016B52228E650C03 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Enum_3_DB663931210BBC27_35 Field_1_8; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::Boolean Field_1_6; // 0x1D
	::System::UInt32 Field_1_2; // 0x20
	::Enum_3_96F6662CA3713095_18 Field_1_10; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_016B52228E650C03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_016B52228E650C03*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_016B52228E650C03* Clone()
	{
		return ((::Class_1_016B52228E650C03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_35 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_35(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_35 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_35))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_18 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_96F6662CA3713095_18(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_96F6662CA3713095_18 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_18))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_016B52228E650C03* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_016B52228E650C03*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_016B52228E650C03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_016B52228E650C03*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_016B52228E650C03_MERGEFROM_1_OFFSET))(this, a1);
	}
};

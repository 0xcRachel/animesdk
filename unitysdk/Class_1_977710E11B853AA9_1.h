#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_977710E11B853AA9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B3A120)
#define CLASS_1_977710E11B853AA9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17B39E80)
#define CLASS_1_977710E11B853AA9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B39F90)
#define CLASS_1_977710E11B853AA9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B39F10)
#define CLASS_1_977710E11B853AA9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B3A000)
#define CLASS_1_977710E11B853AA9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B3A240)
#define CLASS_1_977710E11B853AA9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B3A200)
#define CLASS_1_977710E11B853AA9_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B39F00)
#define CLASS_1_977710E11B853AA9_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B39EF0)
#define CLASS_1_977710E11B853AA9_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17B39EE0)
#define CLASS_1_977710E11B853AA9_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17B39ED0)
#define CLASS_1_977710E11B853AA9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B39E20)
#define CLASS_1_977710E11B853AA9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B3A030)
#define CLASS_1_977710E11B853AA9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B3A090)
#define CLASS_1_977710E11B853AA9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B39E40)
#define CLASS_1_977710E11B853AA9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B39E30)

inline static constexpr unsigned int Class_1_977710E11B853AA9_1_TypeDefinitionIndex = 26366;

class Class_1_977710E11B853AA9_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::Enum_3_4608E37A1B3D374A_28 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_977710E11B853AA9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_977710E11B853AA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_977710E11B853AA9_1* Clone()
	{
		return ((::Class_1_977710E11B853AA9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_977710E11B853AA9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_977710E11B853AA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_977710E11B853AA9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_977710E11B853AA9_1*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_977710E11B853AA9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

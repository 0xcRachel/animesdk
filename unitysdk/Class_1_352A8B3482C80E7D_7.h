#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_352A8B3482C80E7D_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174B49A0)
#define CLASS_1_352A8B3482C80E7D_7_CLONE_OFFSET UNITYSDK_OFFSET(0x174B46D0)
#define CLASS_1_352A8B3482C80E7D_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174B4820)
#define CLASS_1_352A8B3482C80E7D_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x174B4780)
#define CLASS_1_352A8B3482C80E7D_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174B4880)
#define CLASS_1_352A8B3482C80E7D_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174B4B30)
#define CLASS_1_352A8B3482C80E7D_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174B4AF0)
#define CLASS_1_352A8B3482C80E7D_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174B4760)
#define CLASS_1_352A8B3482C80E7D_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x174B4750)
#define CLASS_1_352A8B3482C80E7D_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174B4770)
#define CLASS_1_352A8B3482C80E7D_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x174B4740)
#define CLASS_1_352A8B3482C80E7D_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174B4680)
#define CLASS_1_352A8B3482C80E7D_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174B48B0)
#define CLASS_1_352A8B3482C80E7D_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x174B4910)
#define CLASS_1_352A8B3482C80E7D_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174B46A0)
#define CLASS_1_352A8B3482C80E7D_7__CTOR_OFFSET UNITYSDK_OFFSET(0x174B4690)

inline static constexpr unsigned int Class_1_352A8B3482C80E7D_7_TypeDefinitionIndex = 22966;

class Class_1_352A8B3482C80E7D_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::Enum_3_A35B38E5F9115A76 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_352A8B3482C80E7D_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_7*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_7* Clone()
	{
		return ((::Class_1_352A8B3482C80E7D_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_CLONE_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_352A8B3482C80E7D_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_7*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_352A8B3482C80E7D_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_7*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_352A8B3482C80E7D_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5CF1DDAFE12F0E87_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18034730)
#define CLASS_1_5CF1DDAFE12F0E87_3_CLONE_OFFSET UNITYSDK_OFFSET(0x180341F0)
#define CLASS_1_5CF1DDAFE12F0E87_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18034390)
#define CLASS_1_5CF1DDAFE12F0E87_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x180342D0)
#define CLASS_1_5CF1DDAFE12F0E87_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18034450)
#define CLASS_1_5CF1DDAFE12F0E87_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18034AC0)
#define CLASS_1_5CF1DDAFE12F0E87_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18034A40)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18034240)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18034260)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18034280)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18034220)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180342C0)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180342A0)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18034250)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18034270)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18034290)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18034230)
#define CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180342B0)
#define CLASS_1_5CF1DDAFE12F0E87_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18034100)
#define CLASS_1_5CF1DDAFE12F0E87_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18034570)
#define CLASS_1_5CF1DDAFE12F0E87_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x180345D0)
#define CLASS_1_5CF1DDAFE12F0E87_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x18034BE0)
#define CLASS_1_5CF1DDAFE12F0E87_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18034160)
#define CLASS_1_5CF1DDAFE12F0E87_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18034110)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_3_TypeDefinitionIndex = 26567;

class Class_1_5CF1DDAFE12F0E87_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_3_TypeDefinitionIndex)->GetStaticField(0x457D0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x18
	::Enum_3_0A3761FE34514D6C_63 Field_1_13; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5CF1DDAFE12F0E87_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5CF1DDAFE12F0E87_3* Clone()
	{
		return ((::Class_1_5CF1DDAFE12F0E87_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_63 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_63(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5CF1DDAFE12F0E87_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5CF1DDAFE12F0E87_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};

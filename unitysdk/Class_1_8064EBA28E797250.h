#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8064EBA28E797250_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18284550)
#define CLASS_1_8064EBA28E797250_CLONE_OFFSET UNITYSDK_OFFSET(0x18284010)
#define CLASS_1_8064EBA28E797250_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18284170)
#define CLASS_1_8064EBA28E797250_EQUALS_OFFSET UNITYSDK_OFFSET(0x18284110)
#define CLASS_1_8064EBA28E797250_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18284250)
#define CLASS_1_8064EBA28E797250_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18284940)
#define CLASS_1_8064EBA28E797250_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18284860)
#define CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18284090)
#define CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x182840B0)
#define CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x182840D0)
#define CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x182840F0)
#define CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18284070)
#define CLASS_1_8064EBA28E797250_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18284060)
#define CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x182840A0)
#define CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x182840C0)
#define CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x182840E0)
#define CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x18284100)
#define CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18284080)
#define CLASS_1_8064EBA28E797250_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18283F20)
#define CLASS_1_8064EBA28E797250_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18284370)
#define CLASS_1_8064EBA28E797250_WRITETO_OFFSET UNITYSDK_OFFSET(0x182843D0)
#define CLASS_1_8064EBA28E797250__CCTOR_OFFSET UNITYSDK_OFFSET(0x18284A80)
#define CLASS_1_8064EBA28E797250__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18283F70)
#define CLASS_1_8064EBA28E797250__CTOR_OFFSET UNITYSDK_OFFSET(0x18283F30)

inline static constexpr unsigned int Class_1_8064EBA28E797250_TypeDefinitionIndex = 24591;

class Class_1_8064EBA28E797250 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8064EBA28E797250_TypeDefinitionIndex)->GetStaticField(0x14370);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_13; // 0x20
	::System::UInt32 Field_1_11; // 0x24
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_9; // 0x2C
	::System::UInt32 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8064EBA28E797250* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8064EBA28E797250*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8064EBA28E797250* Clone()
	{
		return ((::Class_1_8064EBA28E797250*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8064EBA28E797250* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8064EBA28E797250*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8064EBA28E797250* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8064EBA28E797250*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8064EBA28E797250_MERGEFROM_1_OFFSET))(this, a1);
	}
};

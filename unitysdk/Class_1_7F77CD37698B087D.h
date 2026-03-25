#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_27.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_532;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7F77CD37698B087D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AF9980)
#define CLASS_1_7F77CD37698B087D_CLONE_OFFSET UNITYSDK_OFFSET(0x17AF9400)
#define CLASS_1_7F77CD37698B087D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AF94E0)
#define CLASS_1_7F77CD37698B087D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AF94B0)
#define CLASS_1_7F77CD37698B087D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AF95F0)
#define CLASS_1_7F77CD37698B087D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AF9CE0)
#define CLASS_1_7F77CD37698B087D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AF9C00)
#define CLASS_1_7F77CD37698B087D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17AF9490)
#define CLASS_1_7F77CD37698B087D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AF9430)
#define CLASS_1_7F77CD37698B087D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17AF9460)
#define CLASS_1_7F77CD37698B087D_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17AF9470)
#define CLASS_1_7F77CD37698B087D_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17AF9480)
#define CLASS_1_7F77CD37698B087D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17AF94A0)
#define CLASS_1_7F77CD37698B087D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AF9440)
#define CLASS_1_7F77CD37698B087D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17AF9450)
#define CLASS_1_7F77CD37698B087D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AF9280)
#define CLASS_1_7F77CD37698B087D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AF97D0)
#define CLASS_1_7F77CD37698B087D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AF9830)
#define CLASS_1_7F77CD37698B087D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF9E40)
#define CLASS_1_7F77CD37698B087D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AF9300)
#define CLASS_1_7F77CD37698B087D__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF9290)

inline static constexpr unsigned int Class_1_7F77CD37698B087D_TypeDefinitionIndex = 25405;

class Class_1_7F77CD37698B087D : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F77CD37698B087D_TypeDefinitionIndex)->GetStaticField(0x2C710);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_532*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_532*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F77CD37698B087D_TypeDefinitionIndex)->GetStaticField(0x2C718);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_532*>* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::Enum_3_DB663931210BBC27_27 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7F77CD37698B087D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F77CD37698B087D*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7F77CD37698B087D* Clone()
	{
		return ((::Class_1_7F77CD37698B087D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_27 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_27(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_532*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_532*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7F77CD37698B087D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F77CD37698B087D*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7F77CD37698B087D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F77CD37698B087D*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F77CD37698B087D_MERGEFROM_1_OFFSET))(this, a1);
	}
};

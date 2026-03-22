#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17627B70)
#define CLASS_1_21DCD4640D389503_27_CLONE_OFFSET UNITYSDK_OFFSET(0x176274C0)
#define CLASS_1_21DCD4640D389503_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17627670)
#define CLASS_1_21DCD4640D389503_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x17627610)
#define CLASS_1_21DCD4640D389503_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17627760)
#define CLASS_1_21DCD4640D389503_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17627FB0)
#define CLASS_1_21DCD4640D389503_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17627F10)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17627530)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17627550)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x176275F0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17627510)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x176275A0)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17627590)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17627580)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17627540)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17627560)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17627600)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17627520)
#define CLASS_1_21DCD4640D389503_27_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17627570)
#define CLASS_1_21DCD4640D389503_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17627340)
#define CLASS_1_21DCD4640D389503_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17627930)
#define CLASS_1_21DCD4640D389503_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x17627990)
#define CLASS_1_21DCD4640D389503_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x176281A0)
#define CLASS_1_21DCD4640D389503_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176273D0)
#define CLASS_1_21DCD4640D389503_27__CTOR_OFFSET UNITYSDK_OFFSET(0x17627350)

inline static constexpr unsigned int Class_1_21DCD4640D389503_27_TypeDefinitionIndex = 24686;

class Class_1_21DCD4640D389503_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0x23500);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_27_TypeDefinitionIndex)->GetStaticField(0x23508);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	::System::String* Field_1_14; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_16; // 0x34
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_27* Clone()
	{
		return ((::Class_1_21DCD4640D389503_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};

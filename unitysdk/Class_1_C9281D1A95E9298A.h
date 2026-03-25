#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9281D1A95E9298A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CD4810)
#define CLASS_1_C9281D1A95E9298A_CLONE_OFFSET UNITYSDK_OFFSET(0x17CD4300)
#define CLASS_1_C9281D1A95E9298A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CD4480)
#define CLASS_1_C9281D1A95E9298A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CD43C0)
#define CLASS_1_C9281D1A95E9298A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CD4530)
#define CLASS_1_C9281D1A95E9298A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CD4B80)
#define CLASS_1_C9281D1A95E9298A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CD4B10)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CD4380)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CD4330)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17CD4370)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17CD43B0)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17CD4350)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CD4390)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CD4340)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17CD43A0)
#define CLASS_1_C9281D1A95E9298A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17CD4360)
#define CLASS_1_C9281D1A95E9298A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CD4200)
#define CLASS_1_C9281D1A95E9298A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CD4670)
#define CLASS_1_C9281D1A95E9298A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CD46D0)
#define CLASS_1_C9281D1A95E9298A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CD4C90)
#define CLASS_1_C9281D1A95E9298A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CD4260)
#define CLASS_1_C9281D1A95E9298A__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD4210)

inline static constexpr unsigned int Class_1_C9281D1A95E9298A_TypeDefinitionIndex = 26112;

class Class_1_C9281D1A95E9298A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9281D1A95E9298A_TypeDefinitionIndex)->GetStaticField(0xD320);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Int64 Field_1_11; // 0x20
	::Enum_3_4608E37A1B3D374A_24 Field_1_7; // 0x28
	::System::UInt32 Field_1_9; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9281D1A95E9298A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9281D1A95E9298A* Clone()
	{
		return ((::Class_1_C9281D1A95E9298A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_24 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9281D1A95E9298A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9281D1A95E9298A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9281D1A95E9298A_MERGEFROM_1_OFFSET))(this, a1);
	}
};

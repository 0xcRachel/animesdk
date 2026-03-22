#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_42.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_40D39AAEF815AE1F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176FF0D0)
#define CLASS_1_40D39AAEF815AE1F_CLONE_OFFSET UNITYSDK_OFFSET(0x176FEC30)
#define CLASS_1_40D39AAEF815AE1F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176FED90)
#define CLASS_1_40D39AAEF815AE1F_EQUALS_OFFSET UNITYSDK_OFFSET(0x176FECD0)
#define CLASS_1_40D39AAEF815AE1F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176FEE40)
#define CLASS_1_40D39AAEF815AE1F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176FF2D0)
#define CLASS_1_40D39AAEF815AE1F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176FF270)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176FEC80)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x176FEC70)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x176FECC0)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176FEC90)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x176FEC60)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x176FECB0)
#define CLASS_1_40D39AAEF815AE1F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x176FECA0)
#define CLASS_1_40D39AAEF815AE1F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176FEB30)
#define CLASS_1_40D39AAEF815AE1F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176FEF60)
#define CLASS_1_40D39AAEF815AE1F_WRITETO_OFFSET UNITYSDK_OFFSET(0x176FEFC0)
#define CLASS_1_40D39AAEF815AE1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x176FF3C0)
#define CLASS_1_40D39AAEF815AE1F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176FEB90)
#define CLASS_1_40D39AAEF815AE1F__CTOR_OFFSET UNITYSDK_OFFSET(0x176FEB40)

inline static constexpr unsigned int Class_1_40D39AAEF815AE1F_TypeDefinitionIndex = 24452;

class Class_1_40D39AAEF815AE1F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40D39AAEF815AE1F_TypeDefinitionIndex)->GetStaticField(0x32AF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::Enum_3_0A3761FE34514D6C_42 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_40D39AAEF815AE1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40D39AAEF815AE1F*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_40D39AAEF815AE1F* Clone()
	{
		return ((::Class_1_40D39AAEF815AE1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_42 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_42(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_42 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_42))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_40D39AAEF815AE1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_40D39AAEF815AE1F*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_40D39AAEF815AE1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40D39AAEF815AE1F*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_40D39AAEF815AE1F_MERGEFROM_1_OFFSET))(this, a1);
	}
};

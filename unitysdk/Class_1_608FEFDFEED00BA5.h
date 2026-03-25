#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_608FEFDFEED00BA5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4F5E0)
#define CLASS_1_608FEFDFEED00BA5_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4F0F0)
#define CLASS_1_608FEFDFEED00BA5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4F230)
#define CLASS_1_608FEFDFEED00BA5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4F1D0)
#define CLASS_1_608FEFDFEED00BA5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4F320)
#define CLASS_1_608FEFDFEED00BA5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4F8D0)
#define CLASS_1_608FEFDFEED00BA5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4F800)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E4F190)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E4F1B0)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E4F170)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E4F140)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E4F1A0)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E4F1C0)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E4F180)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E4F160)
#define CLASS_1_608FEFDFEED00BA5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E4F150)
#define CLASS_1_608FEFDFEED00BA5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4EFC0)
#define CLASS_1_608FEFDFEED00BA5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4F420)
#define CLASS_1_608FEFDFEED00BA5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4F480)
#define CLASS_1_608FEFDFEED00BA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4F9E0)
#define CLASS_1_608FEFDFEED00BA5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4F020)
#define CLASS_1_608FEFDFEED00BA5__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4EFD0)

inline static constexpr unsigned int Class_1_608FEFDFEED00BA5_TypeDefinitionIndex = 23737;

class Class_1_608FEFDFEED00BA5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_6*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_608FEFDFEED00BA5_TypeDefinitionIndex)->GetStaticField(0x3C9B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_6*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_608FEFDFEED00BA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_608FEFDFEED00BA5*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_608FEFDFEED00BA5* Clone()
	{
		return ((::Class_1_608FEFDFEED00BA5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_608FEFDFEED00BA5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_608FEFDFEED00BA5*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_608FEFDFEED00BA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_608FEFDFEED00BA5*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_608FEFDFEED00BA5_MERGEFROM_1_OFFSET))(this, a1);
	}
};

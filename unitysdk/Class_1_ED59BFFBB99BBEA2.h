#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_ED59BFFBB99BBEA2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175AE210)
#define CLASS_1_ED59BFFBB99BBEA2_CLONE_OFFSET UNITYSDK_OFFSET(0x175ADD20)
#define CLASS_1_ED59BFFBB99BBEA2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175ADE30)
#define CLASS_1_ED59BFFBB99BBEA2_EQUALS_OFFSET UNITYSDK_OFFSET(0x175ADE00)
#define CLASS_1_ED59BFFBB99BBEA2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175ADF30)
#define CLASS_1_ED59BFFBB99BBEA2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175AE4F0)
#define CLASS_1_ED59BFFBB99BBEA2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175AE420)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x175ADDB0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x175ADDD0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175ADD90)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x175ADDF0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x175ADD60)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x175ADD50)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x175ADDC0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x175ADDE0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175ADDA0)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x175ADD80)
#define CLASS_1_ED59BFFBB99BBEA2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x175ADD70)
#define CLASS_1_ED59BFFBB99BBEA2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175ADBF0)
#define CLASS_1_ED59BFFBB99BBEA2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175AE060)
#define CLASS_1_ED59BFFBB99BBEA2_WRITETO_OFFSET UNITYSDK_OFFSET(0x175AE0C0)
#define CLASS_1_ED59BFFBB99BBEA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x175AE680)
#define CLASS_1_ED59BFFBB99BBEA2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175ADC50)
#define CLASS_1_ED59BFFBB99BBEA2__CTOR_OFFSET UNITYSDK_OFFSET(0x175ADC00)

inline static constexpr unsigned int Class_1_ED59BFFBB99BBEA2_TypeDefinitionIndex = 26028;

class Class_1_ED59BFFBB99BBEA2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED59BFFBB99BBEA2_TypeDefinitionIndex)->GetStaticField(0x15CA0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::Boolean Field_1_4; // 0x30
	::System::UInt32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ED59BFFBB99BBEA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED59BFFBB99BBEA2*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ED59BFFBB99BBEA2* Clone()
	{
		return ((::Class_1_ED59BFFBB99BBEA2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ED59BFFBB99BBEA2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ED59BFFBB99BBEA2*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ED59BFFBB99BBEA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED59BFFBB99BBEA2*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED59BFFBB99BBEA2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

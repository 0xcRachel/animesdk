#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD570EF86E624FB1_3;
class Class_1_FA4F4A67B1C04320_657;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4A527E96BC15AA5A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174CE310)
#define CLASS_1_4A527E96BC15AA5A_CLONE_OFFSET UNITYSDK_OFFSET(0x174CDC00)
#define CLASS_1_4A527E96BC15AA5A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174CDD20)
#define CLASS_1_4A527E96BC15AA5A_EQUALS_OFFSET UNITYSDK_OFFSET(0x174CDCF0)
#define CLASS_1_4A527E96BC15AA5A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174CDE80)
#define CLASS_1_4A527E96BC15AA5A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174CE690)
#define CLASS_1_4A527E96BC15AA5A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174CE530)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x174CDC40)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x174CDC30)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174CDCB0)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174CDCA0)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x174CDC90)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174CDCC0)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x174CDCE0)
#define CLASS_1_4A527E96BC15AA5A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x174CDCD0)
#define CLASS_1_4A527E96BC15AA5A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174CDA20)
#define CLASS_1_4A527E96BC15AA5A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174CE110)
#define CLASS_1_4A527E96BC15AA5A_WRITETO_OFFSET UNITYSDK_OFFSET(0x174CE170)
#define CLASS_1_4A527E96BC15AA5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x174CE850)
#define CLASS_1_4A527E96BC15AA5A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174CDAB0)
#define CLASS_1_4A527E96BC15AA5A__CTOR_OFFSET UNITYSDK_OFFSET(0x174CDA30)

inline static constexpr unsigned int Class_1_4A527E96BC15AA5A_TypeDefinitionIndex = 26564;

class Class_1_4A527E96BC15AA5A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A527E96BC15AA5A_TypeDefinitionIndex)->GetStaticField(0x3C260);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_657*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_657*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A527E96BC15AA5A_TypeDefinitionIndex)->GetStaticField(0x3C268);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Class_1_BD570EF86E624FB1_3* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::String* Field_1_2; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_657*>* Field_1_5; // 0x30
	::System::Boolean Field_1_12; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4A527E96BC15AA5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A527E96BC15AA5A*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4A527E96BC15AA5A* Clone()
	{
		return ((::Class_1_4A527E96BC15AA5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_657*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_657*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_BD570EF86E624FB1_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4A527E96BC15AA5A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4A527E96BC15AA5A*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4A527E96BC15AA5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A527E96BC15AA5A*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4A527E96BC15AA5A_MERGEFROM_1_OFFSET))(this, a1);
	}
};

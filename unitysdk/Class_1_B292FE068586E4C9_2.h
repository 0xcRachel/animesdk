#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_36;
class Class_1_FA4F4A67B1C04320_339;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B292FE068586E4C9_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AD6240)
#define CLASS_1_B292FE068586E4C9_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17AD5DA0)
#define CLASS_1_B292FE068586E4C9_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AD5E70)
#define CLASS_1_B292FE068586E4C9_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AD5E10)
#define CLASS_1_B292FE068586E4C9_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AD5F50)
#define CLASS_1_B292FE068586E4C9_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AD6410)
#define CLASS_1_B292FE068586E4C9_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AD6320)
#define CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17AD5E00)
#define CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17AD5DF0)
#define CLASS_1_B292FE068586E4C9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AD5C20)
#define CLASS_1_B292FE068586E4C9_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AD60F0)
#define CLASS_1_B292FE068586E4C9_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AD6150)
#define CLASS_1_B292FE068586E4C9_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD6540)
#define CLASS_1_B292FE068586E4C9_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AD5CA0)
#define CLASS_1_B292FE068586E4C9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD5C30)

inline static constexpr unsigned int Class_1_B292FE068586E4C9_2_TypeDefinitionIndex = 24104;

class Class_1_B292FE068586E4C9_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_36*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_36*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_2_TypeDefinitionIndex)->GetStaticField(0x2D120);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_339*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_339*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_2_TypeDefinitionIndex)->GetStaticField(0x2D128);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_339*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_36*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9_2* Clone()
	{
		return ((::Class_1_B292FE068586E4C9_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_36*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_36*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_339*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_339*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

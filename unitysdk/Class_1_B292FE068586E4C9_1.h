#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_23;
class Class_1_FA4F4A67B1C04320_245;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B292FE068586E4C9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1818A140)
#define CLASS_1_B292FE068586E4C9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18189CA0)
#define CLASS_1_B292FE068586E4C9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18189D70)
#define CLASS_1_B292FE068586E4C9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18189D10)
#define CLASS_1_B292FE068586E4C9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18189E50)
#define CLASS_1_B292FE068586E4C9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1818A310)
#define CLASS_1_B292FE068586E4C9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1818A220)
#define CLASS_1_B292FE068586E4C9_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x18189D00)
#define CLASS_1_B292FE068586E4C9_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18189CF0)
#define CLASS_1_B292FE068586E4C9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18189B20)
#define CLASS_1_B292FE068586E4C9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18189FF0)
#define CLASS_1_B292FE068586E4C9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1818A050)
#define CLASS_1_B292FE068586E4C9_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818A440)
#define CLASS_1_B292FE068586E4C9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18189BA0)
#define CLASS_1_B292FE068586E4C9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18189B30)

inline static constexpr unsigned int Class_1_B292FE068586E4C9_1_TypeDefinitionIndex = 24180;

class Class_1_B292FE068586E4C9_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_23*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_1_TypeDefinitionIndex)->GetStaticField(0x7B50);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_245*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_245*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_1_TypeDefinitionIndex)->GetStaticField(0x7B58);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_23*>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_245*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B292FE068586E4C9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_1*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9_1* Clone()
	{
		return ((::Class_1_B292FE068586E4C9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_245*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_245*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_23*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B292FE068586E4C9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B292FE068586E4C9_1*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B292FE068586E4C9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_1*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

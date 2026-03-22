#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_28;
class Class_1_A291A0C2D65983FA;
class Class_1_FA4F4A67B1C04320_329;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0CE138302AEB5621_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173209E0)
#define CLASS_1_0CE138302AEB5621_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17320410)
#define CLASS_1_0CE138302AEB5621_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173204F0)
#define CLASS_1_0CE138302AEB5621_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17320490)
#define CLASS_1_0CE138302AEB5621_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17320600)
#define CLASS_1_0CE138302AEB5621_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17320C40)
#define CLASS_1_0CE138302AEB5621_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17320AF0)
#define CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17320470)
#define CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17320480)
#define CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17320460)
#define CLASS_1_0CE138302AEB5621_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173202A0)
#define CLASS_1_0CE138302AEB5621_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17320860)
#define CLASS_1_0CE138302AEB5621_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x173208C0)
#define CLASS_1_0CE138302AEB5621_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17320DD0)
#define CLASS_1_0CE138302AEB5621_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17320350)
#define CLASS_1_0CE138302AEB5621_1__CTOR_OFFSET UNITYSDK_OFFSET(0x173202B0)

inline static constexpr unsigned int Class_1_0CE138302AEB5621_1_TypeDefinitionIndex = 24076;

class Class_1_0CE138302AEB5621_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_28*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB_28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_1_TypeDefinitionIndex)->GetStaticField(0x2E1F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_A291A0C2D65983FA*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_A291A0C2D65983FA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_1_TypeDefinitionIndex)->GetStaticField(0x2E1F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_329*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_329*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_1_TypeDefinitionIndex)->GetStaticField(0x2E200);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_28*>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_329*>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A291A0C2D65983FA*>* Field_1_3; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0CE138302AEB5621_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_1*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0CE138302AEB5621_1* Clone()
	{
		return ((::Class_1_0CE138302AEB5621_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A291A0C2D65983FA*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A291A0C2D65983FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_329*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_329*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_28*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB_28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0CE138302AEB5621_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0CE138302AEB5621_1*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0CE138302AEB5621_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_1*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

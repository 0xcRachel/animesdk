#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_177;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182EFB10)
#define CLASS_1_E85FDBE62E39A5EA_6_CLONE_OFFSET UNITYSDK_OFFSET(0x182EF740)
#define CLASS_1_E85FDBE62E39A5EA_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182EF860)
#define CLASS_1_E85FDBE62E39A5EA_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x182EF780)
#define CLASS_1_E85FDBE62E39A5EA_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182EF910)
#define CLASS_1_E85FDBE62E39A5EA_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182EFC50)
#define CLASS_1_E85FDBE62E39A5EA_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182EFBB0)
#define CLASS_1_E85FDBE62E39A5EA_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x182EF770)
#define CLASS_1_E85FDBE62E39A5EA_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182EF660)
#define CLASS_1_E85FDBE62E39A5EA_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182EFA00)
#define CLASS_1_E85FDBE62E39A5EA_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x182EFA60)
#define CLASS_1_E85FDBE62E39A5EA_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x182EFD00)
#define CLASS_1_E85FDBE62E39A5EA_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182EF6B0)
#define CLASS_1_E85FDBE62E39A5EA_6__CTOR_OFFSET UNITYSDK_OFFSET(0x182EF670)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_6_TypeDefinitionIndex = 23818;

class Class_1_E85FDBE62E39A5EA_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_177*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_177*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_6_TypeDefinitionIndex)->GetStaticField(0x27C00);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_177*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_6*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_6* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_177*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_177*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_6*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_6*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_97;
class Class_1_285C0F86751F7560_10;
class Class_1_BD2C8496C23D4C2D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_72CF20F2C61BB51A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B15050)
#define CLASS_1_72CF20F2C61BB51A_CLONE_OFFSET UNITYSDK_OFFSET(0x17B14B30)
#define CLASS_1_72CF20F2C61BB51A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B14BD0)
#define CLASS_1_72CF20F2C61BB51A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B14BA0)
#define CLASS_1_72CF20F2C61BB51A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B14CF0)
#define CLASS_1_72CF20F2C61BB51A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B15310)
#define CLASS_1_72CF20F2C61BB51A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B15190)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B14B70)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17B14B90)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B14B60)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B14B80)
#define CLASS_1_72CF20F2C61BB51A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B14960)
#define CLASS_1_72CF20F2C61BB51A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B14EE0)
#define CLASS_1_72CF20F2C61BB51A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B14F40)
#define CLASS_1_72CF20F2C61BB51A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B15460)
#define CLASS_1_72CF20F2C61BB51A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B149D0)
#define CLASS_1_72CF20F2C61BB51A__CTOR_OFFSET UNITYSDK_OFFSET(0x17B14970)

inline static constexpr unsigned int Class_1_72CF20F2C61BB51A_TypeDefinitionIndex = 26515;

class Class_1_72CF20F2C61BB51A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_285C0F86751F7560_10*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_285C0F86751F7560_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72CF20F2C61BB51A_TypeDefinitionIndex)->GetStaticField(0x353B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_97*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72CF20F2C61BB51A_TypeDefinitionIndex)->GetStaticField(0x353B8);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>* Field_1_3; // 0x10
	::Class_1_BD2C8496C23D4C2D_2* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_285C0F86751F7560_10*>* Field_1_8; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_72CF20F2C61BB51A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72CF20F2C61BB51A*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_72CF20F2C61BB51A* Clone()
	{
		return ((::Class_1_72CF20F2C61BB51A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD2C8496C23D4C2D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD2C8496C23D4C2D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_285C0F86751F7560_10*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_285C0F86751F7560_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_72CF20F2C61BB51A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72CF20F2C61BB51A*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_72CF20F2C61BB51A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72CF20F2C61BB51A*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_MERGEFROM_1_OFFSET))(this, a1);
	}
};

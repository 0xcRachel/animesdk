#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_96;
class Class_1_7CA0EA4EB9C00A0E_2;
class Class_1_BD2C8496C23D4C2D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_72CF20F2C61BB51A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176356A0)
#define CLASS_1_72CF20F2C61BB51A_CLONE_OFFSET UNITYSDK_OFFSET(0x176351A0)
#define CLASS_1_72CF20F2C61BB51A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17635240)
#define CLASS_1_72CF20F2C61BB51A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17635210)
#define CLASS_1_72CF20F2C61BB51A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17635360)
#define CLASS_1_72CF20F2C61BB51A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17635940)
#define CLASS_1_72CF20F2C61BB51A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176357B0)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x176351F0)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x176351E0)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x176351D0)
#define CLASS_1_72CF20F2C61BB51A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17635200)
#define CLASS_1_72CF20F2C61BB51A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17634FE0)
#define CLASS_1_72CF20F2C61BB51A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17635530)
#define CLASS_1_72CF20F2C61BB51A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17635590)
#define CLASS_1_72CF20F2C61BB51A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17635AA0)
#define CLASS_1_72CF20F2C61BB51A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17635050)
#define CLASS_1_72CF20F2C61BB51A__CTOR_OFFSET UNITYSDK_OFFSET(0x17634FF0)

inline static constexpr unsigned int Class_1_72CF20F2C61BB51A_TypeDefinitionIndex = 25843;

class Class_1_72CF20F2C61BB51A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_96*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_96*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72CF20F2C61BB51A_TypeDefinitionIndex)->GetStaticField(0x24FA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7CA0EA4EB9C00A0E_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7CA0EA4EB9C00A0E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72CF20F2C61BB51A_TypeDefinitionIndex)->GetStaticField(0x24FA8);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_BD2C8496C23D4C2D_2* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_96*>* Field_1_6; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CA0EA4EB9C00A0E_2*>* Field_1_3; // 0x28

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

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CA0EA4EB9C00A0E_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CA0EA4EB9C00A0E_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_96*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD2C8496C23D4C2D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD2C8496C23D4C2D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + CLASS_1_72CF20F2C61BB51A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
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

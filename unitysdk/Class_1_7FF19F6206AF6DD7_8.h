#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_110;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ABAB680)
#define CLASS_1_7FF19F6206AF6DD7_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1ABAB200)
#define CLASS_1_7FF19F6206AF6DD7_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ABAB3A0)
#define CLASS_1_7FF19F6206AF6DD7_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ABAB280)
#define CLASS_1_7FF19F6206AF6DD7_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ABAB450)
#define CLASS_1_7FF19F6206AF6DD7_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ABAB850)
#define CLASS_1_7FF19F6206AF6DD7_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ABAB7B0)
#define CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ABAB260)
#define CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ABAB080)
#define CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1ABAB250)
#define CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ABAB270)
#define CLASS_1_7FF19F6206AF6DD7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ABAB0E0)
#define CLASS_1_7FF19F6206AF6DD7_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABAB540)
#define CLASS_1_7FF19F6206AF6DD7_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ABAB5A0)
#define CLASS_1_7FF19F6206AF6DD7_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABABA20)
#define CLASS_1_7FF19F6206AF6DD7_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABAB140)
#define CLASS_1_7FF19F6206AF6DD7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAB0F0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_8_TypeDefinitionIndex = 24867;

class Class_1_7FF19F6206AF6DD7_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_8_TypeDefinitionIndex)->GetStaticField(0x16E10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_110*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_110*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_8_TypeDefinitionIndex)->GetStaticField(0x16E18);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_110*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_8* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_110*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_110*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_41.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_66262131BBFFB2BD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B1A8FE0)
#define CLASS_1_66262131BBFFB2BD_CLONE_OFFSET UNITYSDK_OFFSET(0x1B1A8AD0)
#define CLASS_1_66262131BBFFB2BD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B1A8BC0)
#define CLASS_1_66262131BBFFB2BD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B1A8B60)
#define CLASS_1_66262131BBFFB2BD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1A8CB0)
#define CLASS_1_66262131BBFFB2BD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B1A9210)
#define CLASS_1_66262131BBFFB2BD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B1A9150)
#define CLASS_1_66262131BBFFB2BD_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1B1A8900)
#define CLASS_1_66262131BBFFB2BD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1B1A8B30)
#define CLASS_1_66262131BBFFB2BD_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1B1A8B40)
#define CLASS_1_66262131BBFFB2BD_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1B1A8B50)
#define CLASS_1_66262131BBFFB2BD_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1B1A8B20)
#define CLASS_1_66262131BBFFB2BD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B1A8960)
#define CLASS_1_66262131BBFFB2BD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B1A8E70)
#define CLASS_1_66262131BBFFB2BD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B1A8ED0)
#define CLASS_1_66262131BBFFB2BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1A9360)
#define CLASS_1_66262131BBFFB2BD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1A89E0)
#define CLASS_1_66262131BBFFB2BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A8970)

inline static constexpr unsigned int Class_1_66262131BBFFB2BD_TypeDefinitionIndex = 28978;

class Class_1_66262131BBFFB2BD : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66262131BBFFB2BD_TypeDefinitionIndex)->GetStaticField(0x315E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_66262131BBFFB2BD*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_66262131BBFFB2BD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66262131BBFFB2BD_TypeDefinitionIndex)->GetStaticField(0x315E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66262131BBFFB2BD_TypeDefinitionIndex)->GetStaticField(0x315F0);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_8; // 0x20
	::Enum_3_DB663931210BBC27_41 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_66262131BBFFB2BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66262131BBFFB2BD*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_66262131BBFFB2BD*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_66262131BBFFB2BD*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_66262131BBFFB2BD* Clone()
	{
		return ((::Class_1_66262131BBFFB2BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_41 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_41(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_41 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_41))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_66262131BBFFB2BD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66262131BBFFB2BD*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_66262131BBFFB2BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66262131BBFFB2BD*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66262131BBFFB2BD_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6FC4D75D938BC053_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19851F60)
#define CLASS_1_6FC4D75D938BC053_CLONE_OFFSET UNITYSDK_OFFSET(0x19851A10)
#define CLASS_1_6FC4D75D938BC053_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19851B20)
#define CLASS_1_6FC4D75D938BC053_EQUALS_OFFSET UNITYSDK_OFFSET(0x19851AC0)
#define CLASS_1_6FC4D75D938BC053_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19851BF0)
#define CLASS_1_6FC4D75D938BC053_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198521A0)
#define CLASS_1_6FC4D75D938BC053_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19852130)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19851AA0)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19851A80)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19851820)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19851A70)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19851A60)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19851AB0)
#define CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19851A90)
#define CLASS_1_6FC4D75D938BC053_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19851880)
#define CLASS_1_6FC4D75D938BC053_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19851DD0)
#define CLASS_1_6FC4D75D938BC053_WRITETO_OFFSET UNITYSDK_OFFSET(0x19851E30)
#define CLASS_1_6FC4D75D938BC053__CCTOR_OFFSET UNITYSDK_OFFSET(0x198522F0)
#define CLASS_1_6FC4D75D938BC053__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19851920)
#define CLASS_1_6FC4D75D938BC053__CTOR_OFFSET UNITYSDK_OFFSET(0x19851890)

inline static constexpr unsigned int Class_1_6FC4D75D938BC053_TypeDefinitionIndex = 23924;

class Class_1_6FC4D75D938BC053 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x5D8E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x5D8E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6FC4D75D938BC053_TypeDefinitionIndex)->GetStaticField(0x5D8F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6FC4D75D938BC053*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053* Clone()
	{
		return ((::Class_1_6FC4D75D938BC053*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6FC4D75D938BC053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6FC4D75D938BC053_MERGEFROM_1_OFFSET))(this, a1);
	}
};

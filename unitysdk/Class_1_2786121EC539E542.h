#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C706860DB902897;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2786121EC539E542_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D0E2E0)
#define CLASS_1_2786121EC539E542_CLONE_OFFSET UNITYSDK_OFFSET(0x19D0DE10)
#define CLASS_1_2786121EC539E542_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D0DF20)
#define CLASS_1_2786121EC539E542_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D0DEC0)
#define CLASS_1_2786121EC539E542_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D0E010)
#define CLASS_1_2786121EC539E542_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D0E580)
#define CLASS_1_2786121EC539E542_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D0E4B0)
#define CLASS_1_2786121EC539E542_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19D0DE90)
#define CLASS_1_2786121EC539E542_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19D0DE60)
#define CLASS_1_2786121EC539E542_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19D0DC20)
#define CLASS_1_2786121EC539E542_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19D0DE80)
#define CLASS_1_2786121EC539E542_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19D0DEA0)
#define CLASS_1_2786121EC539E542_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19D0DE70)
#define CLASS_1_2786121EC539E542_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x19D0DEB0)
#define CLASS_1_2786121EC539E542_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D0DC80)
#define CLASS_1_2786121EC539E542_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D0E130)
#define CLASS_1_2786121EC539E542_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D0E190)
#define CLASS_1_2786121EC539E542__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D0E6E0)
#define CLASS_1_2786121EC539E542__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D0DD00)
#define CLASS_1_2786121EC539E542__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0DC90)

inline static constexpr unsigned int Class_1_2786121EC539E542_TypeDefinitionIndex = 24291;

class Class_1_2786121EC539E542 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_TypeDefinitionIndex)->GetStaticField(0x602C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1C706860DB902897*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1C706860DB902897*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_TypeDefinitionIndex)->GetStaticField(0x602C8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2786121EC539E542_TypeDefinitionIndex)->GetStaticField(0x602D0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_11; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1C706860DB902897*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2786121EC539E542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2786121EC539E542*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2786121EC539E542* Clone()
	{
		return ((::Class_1_2786121EC539E542*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1C706860DB902897*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1C706860DB902897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2786121EC539E542* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2786121EC539E542*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2786121EC539E542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2786121EC539E542*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2786121EC539E542_MERGEFROM_1_OFFSET))(this, a1);
	}
};

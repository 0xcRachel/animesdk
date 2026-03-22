#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_70;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_73A4852E95B08DF7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17621910)
#define CLASS_1_73A4852E95B08DF7_CLONE_OFFSET UNITYSDK_OFFSET(0x176214C0)
#define CLASS_1_73A4852E95B08DF7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17621680)
#define CLASS_1_73A4852E95B08DF7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17621560)
#define CLASS_1_73A4852E95B08DF7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17621740)
#define CLASS_1_73A4852E95B08DF7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17621B20)
#define CLASS_1_73A4852E95B08DF7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17621AA0)
#define CLASS_1_73A4852E95B08DF7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17621540)
#define CLASS_1_73A4852E95B08DF7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17621510)
#define CLASS_1_73A4852E95B08DF7_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x17621530)
#define CLASS_1_73A4852E95B08DF7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17621550)
#define CLASS_1_73A4852E95B08DF7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17621520)
#define CLASS_1_73A4852E95B08DF7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176213A0)
#define CLASS_1_73A4852E95B08DF7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176217B0)
#define CLASS_1_73A4852E95B08DF7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17621810)
#define CLASS_1_73A4852E95B08DF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17621C00)
#define CLASS_1_73A4852E95B08DF7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17621400)
#define CLASS_1_73A4852E95B08DF7__CTOR_OFFSET UNITYSDK_OFFSET(0x176213B0)

inline static constexpr unsigned int Class_1_73A4852E95B08DF7_TypeDefinitionIndex = 25539;

class Class_1_73A4852E95B08DF7 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_6E708EAB438EC183_70*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_6E708EAB438EC183_70*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73A4852E95B08DF7_TypeDefinitionIndex)->GetStaticField(0x230B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_70*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_73A4852E95B08DF7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73A4852E95B08DF7*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_73A4852E95B08DF7* Clone()
	{
		return ((::Class_1_73A4852E95B08DF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_70*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_6E708EAB438EC183_70*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_73A4852E95B08DF7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_73A4852E95B08DF7*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_73A4852E95B08DF7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73A4852E95B08DF7*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_73A4852E95B08DF7_MERGEFROM_1_OFFSET))(this, a1);
	}
};

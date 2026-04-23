#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_65.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19939BE0)
#define CLASS_1_668FE281FA72D3E8_30_CLONE_OFFSET UNITYSDK_OFFSET(0x19939900)
#define CLASS_1_668FE281FA72D3E8_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19939A20)
#define CLASS_1_668FE281FA72D3E8_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x199399B0)
#define CLASS_1_668FE281FA72D3E8_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19939A90)
#define CLASS_1_668FE281FA72D3E8_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19939E00)
#define CLASS_1_668FE281FA72D3E8_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19939DB0)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19939970)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19939950)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x199399A0)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19939870)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19939980)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19939960)
#define CLASS_1_668FE281FA72D3E8_30_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19939990)
#define CLASS_1_668FE281FA72D3E8_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199398A0)
#define CLASS_1_668FE281FA72D3E8_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19939AC0)
#define CLASS_1_668FE281FA72D3E8_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x19939B20)
#define CLASS_1_668FE281FA72D3E8_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x19939E90)
#define CLASS_1_668FE281FA72D3E8_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199398C0)
#define CLASS_1_668FE281FA72D3E8_30__CTOR_OFFSET UNITYSDK_OFFSET(0x199398B0)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_30_TypeDefinitionIndex = 32812;

class Class_1_668FE281FA72D3E8_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_30*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_30_TypeDefinitionIndex)->GetStaticField(0x15D80);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DB663931210BBC27_65 Field_1_7; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_30*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_30* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_65 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_65(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_65))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_30*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_30*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};

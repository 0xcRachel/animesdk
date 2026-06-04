#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_67.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_668FE281FA72D3E8_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B170AB0)
#define CLASS_1_668FE281FA72D3E8_25_CLONE_OFFSET UNITYSDK_OFFSET(0x1B1707D0)
#define CLASS_1_668FE281FA72D3E8_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B1708F0)
#define CLASS_1_668FE281FA72D3E8_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B170880)
#define CLASS_1_668FE281FA72D3E8_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B170960)
#define CLASS_1_668FE281FA72D3E8_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B170CD0)
#define CLASS_1_668FE281FA72D3E8_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B170C80)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1B170860)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1B170820)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1B170850)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1B170740)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1B170870)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1B170830)
#define CLASS_1_668FE281FA72D3E8_25_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1B170840)
#define CLASS_1_668FE281FA72D3E8_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B170770)
#define CLASS_1_668FE281FA72D3E8_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B170990)
#define CLASS_1_668FE281FA72D3E8_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B1709F0)
#define CLASS_1_668FE281FA72D3E8_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B170E70)
#define CLASS_1_668FE281FA72D3E8_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B170790)
#define CLASS_1_668FE281FA72D3E8_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1B170780)

inline static constexpr unsigned int Class_1_668FE281FA72D3E8_25_TypeDefinitionIndex = 31563;

class Class_1_668FE281FA72D3E8_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_25*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668FE281FA72D3E8_25_TypeDefinitionIndex)->GetStaticField(0x3D40);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::Enum_3_0A3761FE34514D6C_67 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_668FE281FA72D3E8_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_25*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_668FE281FA72D3E8_25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_25* Clone()
	{
		return ((::Class_1_668FE281FA72D3E8_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_67 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_67(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_67 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_67))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_668FE281FA72D3E8_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_668FE281FA72D3E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_668FE281FA72D3E8_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_25*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_668FE281FA72D3E8_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_624_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6EDDB0)
#define CLASS_1_D17272E82AE804C2_624_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6EDB40)
#define CLASS_1_D17272E82AE804C2_624_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6EDC40)
#define CLASS_1_D17272E82AE804C2_624_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6EDBD0)
#define CLASS_1_D17272E82AE804C2_624_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6EDCA0)
#define CLASS_1_D17272E82AE804C2_624_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6EDF00)
#define CLASS_1_D17272E82AE804C2_624_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6EDEC0)
#define CLASS_1_D17272E82AE804C2_624_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A6EDBB0)
#define CLASS_1_D17272E82AE804C2_624_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6EDB90)
#define CLASS_1_D17272E82AE804C2_624_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A6EDAC0)
#define CLASS_1_D17272E82AE804C2_624_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A6EDBC0)
#define CLASS_1_D17272E82AE804C2_624_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6EDBA0)
#define CLASS_1_D17272E82AE804C2_624_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6EDAF0)
#define CLASS_1_D17272E82AE804C2_624_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6EDCD0)
#define CLASS_1_D17272E82AE804C2_624_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6EDD30)
#define CLASS_1_D17272E82AE804C2_624__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6EE080)
#define CLASS_1_D17272E82AE804C2_624__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6EDB10)
#define CLASS_1_D17272E82AE804C2_624__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EDB00)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_624_TypeDefinitionIndex = 29274;

class Class_1_D17272E82AE804C2_624 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_624*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_624*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_624_TypeDefinitionIndex)->GetStaticField(0xC920);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_624* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_624*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_624*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_624*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_624* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_624*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_624* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_624*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_624* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_624*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_624_MERGEFROM_1_OFFSET))(this, a1);
	}
};

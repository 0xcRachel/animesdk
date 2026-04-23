#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C35960)
#define CLASS_1_D17272E82AE804C2_CLONE_OFFSET UNITYSDK_OFFSET(0x19C355B0)
#define CLASS_1_D17272E82AE804C2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C35750)
#define CLASS_1_D17272E82AE804C2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C356A0)
#define CLASS_1_D17272E82AE804C2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C357C0)
#define CLASS_1_D17272E82AE804C2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C35BF0)
#define CLASS_1_D17272E82AE804C2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C35BA0)
#define CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C35680)
#define CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C35620)
#define CLASS_1_D17272E82AE804C2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C35500)
#define CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C35690)
#define CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C35630)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x19C35670)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x19C35650)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x19C35660)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19C35640)
#define CLASS_1_D17272E82AE804C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C35560)
#define CLASS_1_D17272E82AE804C2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C35800)
#define CLASS_1_D17272E82AE804C2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C35860)
#define CLASS_1_D17272E82AE804C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C35C90)
#define CLASS_1_D17272E82AE804C2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C35580)
#define CLASS_1_D17272E82AE804C2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C35570)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_TypeDefinitionIndex = 23858;

class Class_1_D17272E82AE804C2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_TypeDefinitionIndex)->GetStaticField(0x15CF0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Int32 Field_1_7; // 0x18
	::System::UInt32 Field_1_9; // 0x1C
	::System::Int32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2* Clone()
	{
		return ((::Class_1_D17272E82AE804C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

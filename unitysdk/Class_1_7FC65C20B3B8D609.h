#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_7FC65C20B3B8D609_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AE877B0)
#define CLASS_1_7FC65C20B3B8D609_CLONE_OFFSET UNITYSDK_OFFSET(0x1AE872D0)
#define CLASS_1_7FC65C20B3B8D609_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AE87500)
#define CLASS_1_7FC65C20B3B8D609_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AE87420)
#define CLASS_1_7FC65C20B3B8D609_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AE875D0)
#define CLASS_1_7FC65C20B3B8D609_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AE87B80)
#define CLASS_1_7FC65C20B3B8D609_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AE87AC0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AE873A0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AE873C0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1AE873E0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AE87360)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1AE87410)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AE87200)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1AE87390)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1AE87380)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AE873B0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AE873D0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1AE873F0)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AE87370)
#define CLASS_1_7FC65C20B3B8D609_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1AE87400)
#define CLASS_1_7FC65C20B3B8D609_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AE87230)
#define CLASS_1_7FC65C20B3B8D609_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE87630)
#define CLASS_1_7FC65C20B3B8D609_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AE87690)
#define CLASS_1_7FC65C20B3B8D609__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE87CB0)
#define CLASS_1_7FC65C20B3B8D609__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE87250)
#define CLASS_1_7FC65C20B3B8D609__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE87240)

inline static constexpr unsigned int Class_1_7FC65C20B3B8D609_TypeDefinitionIndex = 28348;

class Class_1_7FC65C20B3B8D609 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FC65C20B3B8D609_TypeDefinitionIndex)->GetStaticField(0x63EE0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Proto::ItemList* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt64 Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FC65C20B3B8D609*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FC65C20B3B8D609* Clone()
	{
		return ((::Class_1_7FC65C20B3B8D609*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FC65C20B3B8D609* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FC65C20B3B8D609*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FC65C20B3B8D609_MERGEFROM_1_OFFSET))(this, a1);
	}
};

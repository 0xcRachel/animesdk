#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A6966306FF2F3016_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17474770)
#define CLASS_1_A6966306FF2F3016_CLONE_OFFSET UNITYSDK_OFFSET(0x174743C0)
#define CLASS_1_A6966306FF2F3016_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17474490)
#define CLASS_1_A6966306FF2F3016_EQUALS_OFFSET UNITYSDK_OFFSET(0x17474460)
#define CLASS_1_A6966306FF2F3016_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17474560)
#define CLASS_1_A6966306FF2F3016_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17474A10)
#define CLASS_1_A6966306FF2F3016_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17474980)
#define CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17474410)
#define CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17474440)
#define CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174743F0)
#define CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17474420)
#define CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17474450)
#define CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17474400)
#define CLASS_1_A6966306FF2F3016_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x17474430)
#define CLASS_1_A6966306FF2F3016_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174742D0)
#define CLASS_1_A6966306FF2F3016_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174745E0)
#define CLASS_1_A6966306FF2F3016_WRITETO_OFFSET UNITYSDK_OFFSET(0x17474640)
#define CLASS_1_A6966306FF2F3016__CCTOR_OFFSET UNITYSDK_OFFSET(0x17474B00)
#define CLASS_1_A6966306FF2F3016__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17474320)
#define CLASS_1_A6966306FF2F3016__CTOR_OFFSET UNITYSDK_OFFSET(0x174742E0)

inline static constexpr unsigned int Class_1_A6966306FF2F3016_TypeDefinitionIndex = 26372;

class Class_1_A6966306FF2F3016 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6966306FF2F3016_TypeDefinitionIndex)->GetStaticField(0x357A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A6966306FF2F3016* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6966306FF2F3016*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A6966306FF2F3016* Clone()
	{
		return ((::Class_1_A6966306FF2F3016*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A6966306FF2F3016* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A6966306FF2F3016*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A6966306FF2F3016* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6966306FF2F3016*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6966306FF2F3016_MERGEFROM_1_OFFSET))(this, a1);
	}
};

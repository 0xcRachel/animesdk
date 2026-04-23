#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_72D7D42D911D1CD9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A39ED50)
#define CLASS_1_72D7D42D911D1CD9_CLONE_OFFSET UNITYSDK_OFFSET(0x1A39E960)
#define CLASS_1_72D7D42D911D1CD9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A39EB00)
#define CLASS_1_72D7D42D911D1CD9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A39E9E0)
#define CLASS_1_72D7D42D911D1CD9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A39EBB0)
#define CLASS_1_72D7D42D911D1CD9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A39EEE0)
#define CLASS_1_72D7D42D911D1CD9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A39EE60)
#define CLASS_1_72D7D42D911D1CD9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A39E9B0)
#define CLASS_1_72D7D42D911D1CD9_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1A39E9D0)
#define CLASS_1_72D7D42D911D1CD9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A39E7E0)
#define CLASS_1_72D7D42D911D1CD9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A39E9C0)
#define CLASS_1_72D7D42D911D1CD9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A39E840)
#define CLASS_1_72D7D42D911D1CD9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A39EC20)
#define CLASS_1_72D7D42D911D1CD9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A39EC80)
#define CLASS_1_72D7D42D911D1CD9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A39EFC0)
#define CLASS_1_72D7D42D911D1CD9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A39E8A0)
#define CLASS_1_72D7D42D911D1CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39E850)

inline static constexpr unsigned int Class_1_72D7D42D911D1CD9_TypeDefinitionIndex = 24247;

class Class_1_72D7D42D911D1CD9 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72D7D42D911D1CD9_TypeDefinitionIndex)->GetStaticField(0x36B60);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_72D7D42D911D1CD9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_72D7D42D911D1CD9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72D7D42D911D1CD9_TypeDefinitionIndex)->GetStaticField(0x36B68);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_72D7D42D911D1CD9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72D7D42D911D1CD9*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_72D7D42D911D1CD9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_72D7D42D911D1CD9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_72D7D42D911D1CD9* Clone()
	{
		return ((::Class_1_72D7D42D911D1CD9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_72D7D42D911D1CD9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72D7D42D911D1CD9*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_72D7D42D911D1CD9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72D7D42D911D1CD9*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72D7D42D911D1CD9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DBE1913405A6C120_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FFE26F0A05349163_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174A8E20)
#define CLASS_1_FFE26F0A05349163_CLONE_OFFSET UNITYSDK_OFFSET(0x174A8A10)
#define CLASS_1_FFE26F0A05349163_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174A8AD0)
#define CLASS_1_FFE26F0A05349163_EQUALS_OFFSET UNITYSDK_OFFSET(0x174A8AA0)
#define CLASS_1_FFE26F0A05349163_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174A8BD0)
#define CLASS_1_FFE26F0A05349163_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174A9070)
#define CLASS_1_FFE26F0A05349163_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174A8FD0)
#define CLASS_1_FFE26F0A05349163_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x174A8A60)
#define CLASS_1_FFE26F0A05349163_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174A8A40)
#define CLASS_1_FFE26F0A05349163_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x174A8A80)
#define CLASS_1_FFE26F0A05349163_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x174A8A70)
#define CLASS_1_FFE26F0A05349163_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174A8A50)
#define CLASS_1_FFE26F0A05349163_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x174A8A90)
#define CLASS_1_FFE26F0A05349163_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174A88E0)
#define CLASS_1_FFE26F0A05349163_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174A8C60)
#define CLASS_1_FFE26F0A05349163_WRITETO_OFFSET UNITYSDK_OFFSET(0x174A8CC0)
#define CLASS_1_FFE26F0A05349163__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A91A0)
#define CLASS_1_FFE26F0A05349163__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174A8940)
#define CLASS_1_FFE26F0A05349163__CTOR_OFFSET UNITYSDK_OFFSET(0x174A88F0)

inline static constexpr unsigned int Class_1_FFE26F0A05349163_TypeDefinitionIndex = 26767;

class Class_1_FFE26F0A05349163 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_DBE1913405A6C120_1*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_DBE1913405A6C120_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFE26F0A05349163_TypeDefinitionIndex)->GetStaticField(0x38030);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFE26F0A05349163_TypeDefinitionIndex)->GetStaticField(0x38038);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_10; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DBE1913405A6C120_1*>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FFE26F0A05349163* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE26F0A05349163*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FFE26F0A05349163* Clone()
	{
		return ((::Class_1_FFE26F0A05349163*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DBE1913405A6C120_1*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DBE1913405A6C120_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FFE26F0A05349163* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FFE26F0A05349163*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FFE26F0A05349163* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE26F0A05349163*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FFE26F0A05349163_MERGEFROM_1_OFFSET))(this, a1);
	}
};

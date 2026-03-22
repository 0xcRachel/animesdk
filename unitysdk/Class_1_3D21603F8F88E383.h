#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3D21603F8F88E383_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1765E980)
#define CLASS_1_3D21603F8F88E383_CLONE_OFFSET UNITYSDK_OFFSET(0x1765E520)
#define CLASS_1_3D21603F8F88E383_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1765E640)
#define CLASS_1_3D21603F8F88E383_EQUALS_OFFSET UNITYSDK_OFFSET(0x1765E5E0)
#define CLASS_1_3D21603F8F88E383_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1765E750)
#define CLASS_1_3D21603F8F88E383_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1765EC80)
#define CLASS_1_3D21603F8F88E383_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1765EB90)
#define CLASS_1_3D21603F8F88E383_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1765E5C0)
#define CLASS_1_3D21603F8F88E383_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1765E590)
#define CLASS_1_3D21603F8F88E383_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1765E570)
#define CLASS_1_3D21603F8F88E383_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1765E5D0)
#define CLASS_1_3D21603F8F88E383_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1765E580)
#define CLASS_1_3D21603F8F88E383_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1765E5B0)
#define CLASS_1_3D21603F8F88E383_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1765E5A0)
#define CLASS_1_3D21603F8F88E383_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1765E3B0)
#define CLASS_1_3D21603F8F88E383_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1765E7E0)
#define CLASS_1_3D21603F8F88E383_WRITETO_OFFSET UNITYSDK_OFFSET(0x1765E840)
#define CLASS_1_3D21603F8F88E383__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765EDE0)
#define CLASS_1_3D21603F8F88E383__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1765E410)
#define CLASS_1_3D21603F8F88E383__CTOR_OFFSET UNITYSDK_OFFSET(0x1765E3C0)

inline static constexpr unsigned int Class_1_3D21603F8F88E383_TypeDefinitionIndex = 25980;

class Class_1_3D21603F8F88E383 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_4D5D53619B020DDD*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_4D5D53619B020DDD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D21603F8F88E383_TypeDefinitionIndex)->GetStaticField(0x28C80);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_4D5D53619B020DDD*>* Field_1_5; // 0x18
	::Class_1_4D5D53619B020DDD* Field_1_2; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3D21603F8F88E383* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D21603F8F88E383*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3D21603F8F88E383* Clone()
	{
		return ((::Class_1_3D21603F8F88E383*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_CLONE_OFFSET))(this);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_4D5D53619B020DDD*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_4D5D53619B020DDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3D21603F8F88E383* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3D21603F8F88E383*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3D21603F8F88E383* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D21603F8F88E383*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D21603F8F88E383_MERGEFROM_1_OFFSET))(this, a1);
	}
};

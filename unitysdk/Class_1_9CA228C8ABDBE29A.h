#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9CA228C8ABDBE29A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D2B5E0)
#define CLASS_1_9CA228C8ABDBE29A_CLONE_OFFSET UNITYSDK_OFFSET(0x17D2B1D0)
#define CLASS_1_9CA228C8ABDBE29A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D2B350)
#define CLASS_1_9CA228C8ABDBE29A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D2B250)
#define CLASS_1_9CA228C8ABDBE29A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D2B420)
#define CLASS_1_9CA228C8ABDBE29A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D2B7A0)
#define CLASS_1_9CA228C8ABDBE29A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D2B6C0)
#define CLASS_1_9CA228C8ABDBE29A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D2B220)
#define CLASS_1_9CA228C8ABDBE29A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D2B230)
#define CLASS_1_9CA228C8ABDBE29A_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x17D2B240)
#define CLASS_1_9CA228C8ABDBE29A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D2B080)
#define CLASS_1_9CA228C8ABDBE29A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D2B4A0)
#define CLASS_1_9CA228C8ABDBE29A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D2B500)
#define CLASS_1_9CA228C8ABDBE29A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D2B890)
#define CLASS_1_9CA228C8ABDBE29A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D2B0E0)
#define CLASS_1_9CA228C8ABDBE29A__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2B090)

inline static constexpr unsigned int Class_1_9CA228C8ABDBE29A_TypeDefinitionIndex = 24371;

class Class_1_9CA228C8ABDBE29A : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CA228C8ABDBE29A_TypeDefinitionIndex)->GetStaticField(0x389A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_352A8B3482C80E7D_15* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9CA228C8ABDBE29A* Clone()
	{
		return ((::Class_1_9CA228C8ABDBE29A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_CLONE_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_15* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_352A8B3482C80E7D_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_15*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9CA228C8ABDBE29A_MERGEFROM_1_OFFSET))(this, a1);
	}
};

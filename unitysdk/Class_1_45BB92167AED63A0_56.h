#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_45BB92167AED63A0_56_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ABB0B40)
#define CLASS_1_45BB92167AED63A0_56_CLONE_OFFSET UNITYSDK_OFFSET(0x1ABB0640)
#define CLASS_1_45BB92167AED63A0_56_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ABB0790)
#define CLASS_1_45BB92167AED63A0_56_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ABB06B0)
#define CLASS_1_45BB92167AED63A0_56_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ABB0840)
#define CLASS_1_45BB92167AED63A0_56_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ABB0C70)
#define CLASS_1_45BB92167AED63A0_56_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ABB0C10)
#define CLASS_1_45BB92167AED63A0_56_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ABB0460)
#define CLASS_1_45BB92167AED63A0_56_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1ABB06A0)
#define CLASS_1_45BB92167AED63A0_56_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ABB0690)
#define CLASS_1_45BB92167AED63A0_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ABB04C0)
#define CLASS_1_45BB92167AED63A0_56_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABB0A00)
#define CLASS_1_45BB92167AED63A0_56_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ABB0A60)
#define CLASS_1_45BB92167AED63A0_56__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABB0DB0)
#define CLASS_1_45BB92167AED63A0_56__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABB0560)
#define CLASS_1_45BB92167AED63A0_56__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB04D0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_56_TypeDefinitionIndex = 29167;

class Class_1_45BB92167AED63A0_56 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_56_TypeDefinitionIndex)->GetStaticField(0x17410);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_56*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_56_TypeDefinitionIndex)->GetStaticField(0x17418);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_56_TypeDefinitionIndex)->GetStaticField(0x17420);
	}
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_56*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_56*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_56*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_56* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_56* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_56*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_56*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_56_MERGEFROM_1_OFFSET))(this, a1);
	}
};

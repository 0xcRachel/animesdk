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

#define CLASS_1_45BB92167AED63A0_53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B2752A0)
#define CLASS_1_45BB92167AED63A0_53_CLONE_OFFSET UNITYSDK_OFFSET(0x1B274E20)
#define CLASS_1_45BB92167AED63A0_53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B274F30)
#define CLASS_1_45BB92167AED63A0_53_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B274E70)
#define CLASS_1_45BB92167AED63A0_53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B274FE0)
#define CLASS_1_45BB92167AED63A0_53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B275390)
#define CLASS_1_45BB92167AED63A0_53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B275330)
#define CLASS_1_45BB92167AED63A0_53_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1B274E60)
#define CLASS_1_45BB92167AED63A0_53_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1B274E50)
#define CLASS_1_45BB92167AED63A0_53_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1B274C70)
#define CLASS_1_45BB92167AED63A0_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B274CA0)
#define CLASS_1_45BB92167AED63A0_53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2751A0)
#define CLASS_1_45BB92167AED63A0_53_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B275200)
#define CLASS_1_45BB92167AED63A0_53__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2754C0)
#define CLASS_1_45BB92167AED63A0_53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B274D40)
#define CLASS_1_45BB92167AED63A0_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1B274CB0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_53_TypeDefinitionIndex = 28911;

class Class_1_45BB92167AED63A0_53 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_53_TypeDefinitionIndex)->GetStaticField(0x6C80);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_53*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_53_TypeDefinitionIndex)->GetStaticField(0x6C88);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_53_TypeDefinitionIndex)->GetStaticField(0x6C90);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_53*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_53*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_53*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_53* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_53*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_53*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_53_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_81;
class Class_1_D17272E82AE804C2_705;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B239F60)
#define CLASS_1_752A428518BC8100_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1B2398D0)
#define CLASS_1_752A428518BC8100_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2399D0)
#define CLASS_1_752A428518BC8100_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B239970)
#define CLASS_1_752A428518BC8100_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B239B10)
#define CLASS_1_752A428518BC8100_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B23A250)
#define CLASS_1_752A428518BC8100_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B23A060)
#define CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1B239940)
#define CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1B239920)
#define CLASS_1_752A428518BC8100_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1B239690)
#define CLASS_1_752A428518BC8100_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1B239960)
#define CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1B239950)
#define CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1B239930)
#define CLASS_1_752A428518BC8100_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B2396F0)
#define CLASS_1_752A428518BC8100_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B239E00)
#define CLASS_1_752A428518BC8100_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B239E60)
#define CLASS_1_752A428518BC8100_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B23A500)
#define CLASS_1_752A428518BC8100_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B239750)
#define CLASS_1_752A428518BC8100_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B239700)

inline static constexpr unsigned int Class_1_752A428518BC8100_5_TypeDefinitionIndex = 29844;

class Class_1_752A428518BC8100_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_5_TypeDefinitionIndex)->GetStaticField(0x50D30);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_705*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_705*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_5_TypeDefinitionIndex)->GetStaticField(0x50D38);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_705*>* Field_1_5; // 0x10
	::Class_1_075C34D03AFA1215_81* Field_1_6; // 0x18
	::Class_1_075C34D03AFA1215_81* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100_5* Clone()
	{
		return ((::Class_1_752A428518BC8100_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_CLONE_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_81* Method_1_24748FC20F375725()
	{
		return ((::Class_1_075C34D03AFA1215_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_81* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_075C34D03AFA1215_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_075C34D03AFA1215_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_705*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_705*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_5*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};

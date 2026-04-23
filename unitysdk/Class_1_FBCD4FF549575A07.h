#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00BAB2C33D444F88_6;
class Class_1_075C34D03AFA1215_23;
class Class_1_455CA3FD2409BEB7_3;
class Class_1_49E6D1DAFF77A936;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FBCD4FF549575A07_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D418E0)
#define CLASS_1_FBCD4FF549575A07_CLONE_OFFSET UNITYSDK_OFFSET(0x19D411F0)
#define CLASS_1_FBCD4FF549575A07_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D412F0)
#define CLASS_1_FBCD4FF549575A07_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D412C0)
#define CLASS_1_FBCD4FF549575A07_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D414A0)
#define CLASS_1_FBCD4FF549575A07_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D41C50)
#define CLASS_1_FBCD4FF549575A07_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D41A70)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19D41240)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x19D41270)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x19D412A0)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19D41220)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19D41290)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19D41260)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19D40E80)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19D41250)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x19D41280)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x19D412B0)
#define CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19D41230)
#define CLASS_1_FBCD4FF549575A07_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D40EB0)
#define CLASS_1_FBCD4FF549575A07_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D41710)
#define CLASS_1_FBCD4FF549575A07_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D41770)
#define CLASS_1_FBCD4FF549575A07__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D41EA0)
#define CLASS_1_FBCD4FF549575A07__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D40F50)
#define CLASS_1_FBCD4FF549575A07__CTOR_OFFSET UNITYSDK_OFFSET(0x19D40EC0)

inline static constexpr unsigned int Class_1_FBCD4FF549575A07_TypeDefinitionIndex = 25712;

class Class_1_FBCD4FF549575A07 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FBCD4FF549575A07*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FBCD4FF549575A07*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBCD4FF549575A07_TypeDefinitionIndex)->GetStaticField(0x369B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBCD4FF549575A07_TypeDefinitionIndex)->GetStaticField(0x369B8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBCD4FF549575A07_TypeDefinitionIndex)->GetStaticField(0x369C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xD; // 0x0
	::Class_1_455CA3FD2409BEB7_3* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::Class_1_49E6D1DAFF77A936* Field_1_15; // 0x30
	::Class_1_00BAB2C33D444F88_6* Field_1_3; // 0x38
	::Class_1_075C34D03AFA1215_23* Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FBCD4FF549575A07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FBCD4FF549575A07*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FBCD4FF549575A07*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FBCD4FF549575A07* Clone()
	{
		return ((::Class_1_FBCD4FF549575A07*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_CLONE_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_00BAB2C33D444F88_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_00BAB2C33D444F88_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_6*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_455CA3FD2409BEB7_3* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_455CA3FD2409BEB7_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_455CA3FD2409BEB7_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_3*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_23* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_075C34D03AFA1215_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_075C34D03AFA1215_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Class_1_49E6D1DAFF77A936* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_49E6D1DAFF77A936*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_49E6D1DAFF77A936* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49E6D1DAFF77A936*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FBCD4FF549575A07* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FBCD4FF549575A07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FBCD4FF549575A07_MERGEFROM_1_OFFSET))(this, a1);
	}
};

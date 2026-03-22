#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_64;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17694760)
#define CLASS_1_99BD961747420BEB_44_CLONE_OFFSET UNITYSDK_OFFSET(0x17694200)
#define CLASS_1_99BD961747420BEB_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17694320)
#define CLASS_1_99BD961747420BEB_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x176942C0)
#define CLASS_1_99BD961747420BEB_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17694470)
#define CLASS_1_99BD961747420BEB_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17694AF0)
#define CLASS_1_99BD961747420BEB_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17694890)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17694270)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x176942A0)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17694250)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17694290)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17694280)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x176942B0)
#define CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17694260)
#define CLASS_1_99BD961747420BEB_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17694000)
#define CLASS_1_99BD961747420BEB_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176945C0)
#define CLASS_1_99BD961747420BEB_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x17694620)
#define CLASS_1_99BD961747420BEB_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x17694D20)
#define CLASS_1_99BD961747420BEB_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17694060)
#define CLASS_1_99BD961747420BEB_44__CTOR_OFFSET UNITYSDK_OFFSET(0x17694010)

inline static constexpr unsigned int Class_1_99BD961747420BEB_44_TypeDefinitionIndex = 25169;

class Class_1_99BD961747420BEB_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_44_TypeDefinitionIndex)->GetStaticField(0x348C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	::Class_1_6E708EAB438EC183_64* Field_1_4; // 0x10
	::Class_1_6E708EAB438EC183_64* Field_1_9; // 0x18
	::Class_1_6E708EAB438EC183_64* Field_1_2; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_44*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_44* Clone()
	{
		return ((::Class_1_99BD961747420BEB_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_CLONE_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_44*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_44*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_64;
class Class_1_FA4F4A67B1C04320_613;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CEB0D1FB248C9C52_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17438B70)
#define CLASS_1_CEB0D1FB248C9C52_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17438690)
#define CLASS_1_CEB0D1FB248C9C52_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17438790)
#define CLASS_1_CEB0D1FB248C9C52_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17438730)
#define CLASS_1_CEB0D1FB248C9C52_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174388D0)
#define CLASS_1_CEB0D1FB248C9C52_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17438EA0)
#define CLASS_1_CEB0D1FB248C9C52_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17438CA0)
#define CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17438710)
#define CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x174386E0)
#define CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17438700)
#define CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17438720)
#define CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x174386F0)
#define CLASS_1_CEB0D1FB248C9C52_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174384C0)
#define CLASS_1_CEB0D1FB248C9C52_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17438A10)
#define CLASS_1_CEB0D1FB248C9C52_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17438A70)
#define CLASS_1_CEB0D1FB248C9C52_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17439060)
#define CLASS_1_CEB0D1FB248C9C52_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17438520)
#define CLASS_1_CEB0D1FB248C9C52_5__CTOR_OFFSET UNITYSDK_OFFSET(0x174384D0)

inline static constexpr unsigned int Class_1_CEB0D1FB248C9C52_5_TypeDefinitionIndex = 25149;

class Class_1_CEB0D1FB248C9C52_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_613*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEB0D1FB248C9C52_5_TypeDefinitionIndex)->GetStaticField(0x2E320);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	::Class_1_6E708EAB438EC183_64* Field_1_2; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_6E708EAB438EC183_64* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CEB0D1FB248C9C52_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_5*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CEB0D1FB248C9C52_5* Clone()
	{
		return ((::Class_1_CEB0D1FB248C9C52_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_CLONE_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_613*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_64* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_6E708EAB438EC183_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_6E708EAB438EC183_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_64*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CEB0D1FB248C9C52_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_5*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CEB0D1FB248C9C52_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_5*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};

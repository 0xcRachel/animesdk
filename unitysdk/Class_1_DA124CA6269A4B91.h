#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28AF0C7D8FD87E9F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DA124CA6269A4B91_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA9D690)
#define CLASS_1_DA124CA6269A4B91_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA9D160)
#define CLASS_1_DA124CA6269A4B91_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA9D250)
#define CLASS_1_DA124CA6269A4B91_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA9D1F0)
#define CLASS_1_DA124CA6269A4B91_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA9D340)
#define CLASS_1_DA124CA6269A4B91_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA9D820)
#define CLASS_1_DA124CA6269A4B91_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA9D760)
#define CLASS_1_DA124CA6269A4B91_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA9CF30)
#define CLASS_1_DA124CA6269A4B91_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AA9D1D0)
#define CLASS_1_DA124CA6269A4B91_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AA9D1E0)
#define CLASS_1_DA124CA6269A4B91_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AA9D1C0)
#define CLASS_1_DA124CA6269A4B91_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AA9D1B0)
#define CLASS_1_DA124CA6269A4B91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA9CF90)
#define CLASS_1_DA124CA6269A4B91_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA9D4F0)
#define CLASS_1_DA124CA6269A4B91_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA9D550)
#define CLASS_1_DA124CA6269A4B91__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA9D960)
#define CLASS_1_DA124CA6269A4B91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA9D030)
#define CLASS_1_DA124CA6269A4B91__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9CFA0)

inline static constexpr unsigned int Class_1_DA124CA6269A4B91_TypeDefinitionIndex = 26351;

class Class_1_DA124CA6269A4B91 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA124CA6269A4B91_TypeDefinitionIndex)->GetStaticField(0x289C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_DA124CA6269A4B91*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DA124CA6269A4B91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA124CA6269A4B91_TypeDefinitionIndex)->GetStaticField(0x289C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_28AF0C7D8FD87E9F*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_28AF0C7D8FD87E9F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA124CA6269A4B91_TypeDefinitionIndex)->GetStaticField(0x289D0);
	}
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_28AF0C7D8FD87E9F*>* Field_1_8; // 0x20
	::System::Boolean Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DA124CA6269A4B91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA124CA6269A4B91*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DA124CA6269A4B91*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DA124CA6269A4B91*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DA124CA6269A4B91* Clone()
	{
		return ((::Class_1_DA124CA6269A4B91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_28AF0C7D8FD87E9F*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_28AF0C7D8FD87E9F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DA124CA6269A4B91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DA124CA6269A4B91*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DA124CA6269A4B91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA124CA6269A4B91*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DA124CA6269A4B91_MERGEFROM_1_OFFSET))(this, a1);
	}
};

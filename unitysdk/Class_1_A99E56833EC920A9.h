#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A99E56833EC920A9_Enum_3_2E741879C8CDBAFC_18.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_22.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_A99E56833EC920A9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D25340)
#define CLASS_1_A99E56833EC920A9_CLONE_OFFSET UNITYSDK_OFFSET(0x17D24E20)
#define CLASS_1_A99E56833EC920A9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D24F20)
#define CLASS_1_A99E56833EC920A9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D24EC0)
#define CLASS_1_A99E56833EC920A9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D25070)
#define CLASS_1_A99E56833EC920A9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D25600)
#define CLASS_1_A99E56833EC920A9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D254F0)
#define CLASS_1_A99E56833EC920A9_METHOD_1_2257AFAE479FF91C_OFFSET UNITYSDK_OFFSET(0x17D24DC0)
#define CLASS_1_A99E56833EC920A9_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17D24EA0)
#define CLASS_1_A99E56833EC920A9_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D24E90)
#define CLASS_1_A99E56833EC920A9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17D24E70)
#define CLASS_1_A99E56833EC920A9_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17D24E00)
#define CLASS_1_A99E56833EC920A9_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17D24EB0)
#define CLASS_1_A99E56833EC920A9_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D24E80)
#define CLASS_1_A99E56833EC920A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D24C70)
#define CLASS_1_A99E56833EC920A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D251A0)
#define CLASS_1_A99E56833EC920A9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D25200)
#define CLASS_1_A99E56833EC920A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D25770)
#define CLASS_1_A99E56833EC920A9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D24CD0)
#define CLASS_1_A99E56833EC920A9__CTOR_OFFSET UNITYSDK_OFFSET(0x17D24C80)

inline static constexpr unsigned int Class_1_A99E56833EC920A9_TypeDefinitionIndex = 26315;

class Class_1_A99E56833EC920A9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A99E56833EC920A9_TypeDefinitionIndex)->GetStaticField(0x38780);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::Enum_3_ED790DAC948A65A9_22 Field_1_5; // 0x28
	::Class_1_A99E56833EC920A9_Enum_3_2E741879C8CDBAFC_18 Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A99E56833EC920A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A99E56833EC920A9*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A99E56833EC920A9* Clone()
	{
		return ((::Class_1_A99E56833EC920A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_22 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_22 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_22))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_2257AFAE479FF91C()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_2257AFAE479FF91C_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_A99E56833EC920A9_Enum_3_2E741879C8CDBAFC_18 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_A99E56833EC920A9_Enum_3_2E741879C8CDBAFC_18(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A99E56833EC920A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A99E56833EC920A9*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A99E56833EC920A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A99E56833EC920A9*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A99E56833EC920A9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

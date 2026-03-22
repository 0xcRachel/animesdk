#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

class Class_1_E336D98DD86E4ECB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6949CBEE02AA8B1E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176390A0)
#define CLASS_1_6949CBEE02AA8B1E_CLONE_OFFSET UNITYSDK_OFFSET(0x17638B00)
#define CLASS_1_6949CBEE02AA8B1E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17638C60)
#define CLASS_1_6949CBEE02AA8B1E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17638C00)
#define CLASS_1_6949CBEE02AA8B1E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17638D50)
#define CLASS_1_6949CBEE02AA8B1E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17639500)
#define CLASS_1_6949CBEE02AA8B1E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17639430)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17638BC0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17638B70)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17638BA0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17638BB0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17638BD0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17638B80)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17638B90)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x17638BF0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17638B60)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x17638BE0)
#define CLASS_1_6949CBEE02AA8B1E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17638B50)
#define CLASS_1_6949CBEE02AA8B1E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176389D0)
#define CLASS_1_6949CBEE02AA8B1E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17638E70)
#define CLASS_1_6949CBEE02AA8B1E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17638ED0)
#define CLASS_1_6949CBEE02AA8B1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17639640)
#define CLASS_1_6949CBEE02AA8B1E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17638A30)
#define CLASS_1_6949CBEE02AA8B1E__CTOR_OFFSET UNITYSDK_OFFSET(0x176389E0)

inline static constexpr unsigned int Class_1_6949CBEE02AA8B1E_TypeDefinitionIndex = 23622;

class Class_1_6949CBEE02AA8B1E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E336D98DD86E4ECB*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E336D98DD86E4ECB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6949CBEE02AA8B1E_TypeDefinitionIndex)->GetStaticField(0x25550);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB*>* Field_1_9; // 0x18
	::Enum_3_DB663931210BBC27_28 Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_13; // 0x2C
	::System::UInt32 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6949CBEE02AA8B1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6949CBEE02AA8B1E* Clone()
	{
		return ((::Class_1_6949CBEE02AA8B1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E336D98DD86E4ECB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6949CBEE02AA8B1E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6949CBEE02AA8B1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6949CBEE02AA8B1E_MERGEFROM_1_OFFSET))(this, a1);
	}
};

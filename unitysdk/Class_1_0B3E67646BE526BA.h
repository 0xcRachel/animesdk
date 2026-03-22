#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_4;
class Class_1_FA4F4A67B1C04320_850;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0B3E67646BE526BA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1783B2D0)
#define CLASS_1_0B3E67646BE526BA_CLONE_OFFSET UNITYSDK_OFFSET(0x1783AE30)
#define CLASS_1_0B3E67646BE526BA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1783AF00)
#define CLASS_1_0B3E67646BE526BA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1783AED0)
#define CLASS_1_0B3E67646BE526BA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1783B010)
#define CLASS_1_0B3E67646BE526BA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1783B5A0)
#define CLASS_1_0B3E67646BE526BA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1783B420)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1783AEB0)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1783AE60)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1783AEA0)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1783AEC0)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1783AE70)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1783AE90)
#define CLASS_1_0B3E67646BE526BA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1783AE80)
#define CLASS_1_0B3E67646BE526BA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1783AD10)
#define CLASS_1_0B3E67646BE526BA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1783B130)
#define CLASS_1_0B3E67646BE526BA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1783B190)
#define CLASS_1_0B3E67646BE526BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1783B750)
#define CLASS_1_0B3E67646BE526BA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1783AD60)
#define CLASS_1_0B3E67646BE526BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1783AD20)

inline static constexpr unsigned int Class_1_0B3E67646BE526BA_TypeDefinitionIndex = 26425;

class Class_1_0B3E67646BE526BA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_850*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_850*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3E67646BE526BA_TypeDefinitionIndex)->GetStaticField(0x42740);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_850*>* Field_1_7; // 0x18
	::Class_1_53763D498DB8321D_4* Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0B3E67646BE526BA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B3E67646BE526BA*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0B3E67646BE526BA* Clone()
	{
		return ((::Class_1_0B3E67646BE526BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_CLONE_OFFSET))(this);
	}

	::Class_1_53763D498DB8321D_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_53763D498DB8321D_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_53763D498DB8321D_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_4*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_850*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_850*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0B3E67646BE526BA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0B3E67646BE526BA*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0B3E67646BE526BA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B3E67646BE526BA*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_MERGEFROM_1_OFFSET))(this, a1);
	}
};

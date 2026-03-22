#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BB4B99DE4C2501EC_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A5D4A0)
#define CLASS_1_BB4B99DE4C2501EC_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17A5CCF0)
#define CLASS_1_BB4B99DE4C2501EC_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A5CF10)
#define CLASS_1_BB4B99DE4C2501EC_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A5CEB0)
#define CLASS_1_BB4B99DE4C2501EC_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A5D020)
#define CLASS_1_BB4B99DE4C2501EC_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A5DB60)
#define CLASS_1_BB4B99DE4C2501EC_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A5DAA0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17A5CD80)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17A5CDA0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17A5CDE0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17A5CE00)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17A5CE40)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17A5CE60)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17A5CE90)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17A5CD40)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17A5CE30)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17A5CD70)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17A5CE80)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17A5CD90)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17A5CDB0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17A5CDF0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17A5CE10)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17A5CE50)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17A5CE70)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17A5CEA0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17A5CD50)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17A5CDD0)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17A5CE20)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17A5CD60)
#define CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17A5CDC0)
#define CLASS_1_BB4B99DE4C2501EC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A5CBD0)
#define CLASS_1_BB4B99DE4C2501EC_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A5D1C0)
#define CLASS_1_BB4B99DE4C2501EC_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A5D220)
#define CLASS_1_BB4B99DE4C2501EC_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5DD60)
#define CLASS_1_BB4B99DE4C2501EC_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A5CC30)
#define CLASS_1_BB4B99DE4C2501EC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5CBE0)

inline static constexpr unsigned int Class_1_BB4B99DE4C2501EC_1_TypeDefinitionIndex = 22326;

class Class_1_BB4B99DE4C2501EC_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_22()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_1_TypeDefinitionIndex)->GetStaticField(0x18E30);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_23; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt64 Field_1_4; // 0x20
	::System::UInt32 Field_1_14; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::UInt32 Field_1_2; // 0x30
	::System::UInt32 Field_1_18; // 0x34
	::System::UInt64 Field_1_16; // 0x38
	::System::Boolean Field_1_10; // 0x40
	::System::UInt32 Field_1_12; // 0x44
	::System::UInt32 Field_1_25; // 0x48
	::System::UInt32 Field_1_20; // 0x4C
	::System::UInt32 Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_1* Clone()
	{
		return ((::Class_1_BB4B99DE4C2501EC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BB4B99DE4C2501EC_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BB4B99DE4C2501EC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_1*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

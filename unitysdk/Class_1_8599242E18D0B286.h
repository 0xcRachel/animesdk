#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8599242E18D0B286_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173C2640)
#define CLASS_1_8599242E18D0B286_CLONE_OFFSET UNITYSDK_OFFSET(0x173C2170)
#define CLASS_1_8599242E18D0B286_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173C2260)
#define CLASS_1_8599242E18D0B286_EQUALS_OFFSET UNITYSDK_OFFSET(0x173C2230)
#define CLASS_1_8599242E18D0B286_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173C2390)
#define CLASS_1_8599242E18D0B286_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173C2890)
#define CLASS_1_8599242E18D0B286_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173C27A0)
#define CLASS_1_8599242E18D0B286_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x173C21F0)
#define CLASS_1_8599242E18D0B286_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x173C2210)
#define CLASS_1_8599242E18D0B286_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x173C21D0)
#define CLASS_1_8599242E18D0B286_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x173C21A0)
#define CLASS_1_8599242E18D0B286_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x173C2200)
#define CLASS_1_8599242E18D0B286_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x173C2220)
#define CLASS_1_8599242E18D0B286_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x173C21E0)
#define CLASS_1_8599242E18D0B286_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x173C21C0)
#define CLASS_1_8599242E18D0B286_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x173C21B0)
#define CLASS_1_8599242E18D0B286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C2010)
#define CLASS_1_8599242E18D0B286_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173C24C0)
#define CLASS_1_8599242E18D0B286_WRITETO_OFFSET UNITYSDK_OFFSET(0x173C2520)
#define CLASS_1_8599242E18D0B286__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C29F0)
#define CLASS_1_8599242E18D0B286__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173C2070)
#define CLASS_1_8599242E18D0B286__CTOR_OFFSET UNITYSDK_OFFSET(0x173C2020)

inline static constexpr unsigned int Class_1_8599242E18D0B286_TypeDefinitionIndex = 23071;

class Class_1_8599242E18D0B286 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8599242E18D0B286_TypeDefinitionIndex)->GetStaticField(0x388E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xD; // 0x0
	::Class_1_2E57B88467AF63C8_2* Field_1_7; // 0x10
	::Class_1_2E57B88467AF63C8_2* Field_1_11; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::UInt32 Field_1_9; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8599242E18D0B286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8599242E18D0B286*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8599242E18D0B286* Clone()
	{
		return ((::Class_1_8599242E18D0B286*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_2E57B88467AF63C8_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2E57B88467AF63C8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2E57B88467AF63C8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_2E57B88467AF63C8_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_2E57B88467AF63C8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_2E57B88467AF63C8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8599242E18D0B286* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8599242E18D0B286*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8599242E18D0B286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8599242E18D0B286*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8599242E18D0B286_MERGEFROM_1_OFFSET))(this, a1);
	}
};

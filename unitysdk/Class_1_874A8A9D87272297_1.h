#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_39;
class Class_1_FF03248024BAA97A_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_874A8A9D87272297_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A44BE30)
#define CLASS_1_874A8A9D87272297_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A44B980)
#define CLASS_1_874A8A9D87272297_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A44BA80)
#define CLASS_1_874A8A9D87272297_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A44BA50)
#define CLASS_1_874A8A9D87272297_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A44BBF0)
#define CLASS_1_874A8A9D87272297_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A44C120)
#define CLASS_1_874A8A9D87272297_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A44BFA0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A44BA10)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A44BA30)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A44B9F0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A44B830)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1A44B9E0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A44B9C0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1A44B9D0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A44B9B0)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A44BA20)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A44BA40)
#define CLASS_1_874A8A9D87272297_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A44BA00)
#define CLASS_1_874A8A9D87272297_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A44B860)
#define CLASS_1_874A8A9D87272297_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A44BCD0)
#define CLASS_1_874A8A9D87272297_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A44BD30)
#define CLASS_1_874A8A9D87272297_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A44C2C0)
#define CLASS_1_874A8A9D87272297_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A44B880)
#define CLASS_1_874A8A9D87272297_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44B870)

inline static constexpr unsigned int Class_1_874A8A9D87272297_1_TypeDefinitionIndex = 31910;

class Class_1_874A8A9D87272297_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_874A8A9D87272297_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_874A8A9D87272297_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_874A8A9D87272297_1_TypeDefinitionIndex)->GetStaticField(0xD820);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	::Class_1_FF03248024BAA97A_3* Field_1_11; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::Proto::ItemList* Field_1_3; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::Class_1_21DCD4640D389503_39* Field_1_7; // 0x30
	::System::UInt32 Field_1_9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_874A8A9D87272297_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_874A8A9D87272297_1*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_874A8A9D87272297_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_874A8A9D87272297_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_874A8A9D87272297_1* Clone()
	{
		return ((::Class_1_874A8A9D87272297_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_39* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_39*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_FF03248024BAA97A_3* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FF03248024BAA97A_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FF03248024BAA97A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_3*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_874A8A9D87272297_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_874A8A9D87272297_1*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_874A8A9D87272297_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_874A8A9D87272297_1*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_874A8A9D87272297_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

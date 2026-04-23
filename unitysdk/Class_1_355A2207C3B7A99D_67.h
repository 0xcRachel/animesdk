#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19E30390)
#define CLASS_1_355A2207C3B7A99D_67_CLONE_OFFSET UNITYSDK_OFFSET(0x19E30020)
#define CLASS_1_355A2207C3B7A99D_67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19E301D0)
#define CLASS_1_355A2207C3B7A99D_67_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E30100)
#define CLASS_1_355A2207C3B7A99D_67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E30270)
#define CLASS_1_355A2207C3B7A99D_67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19E30480)
#define CLASS_1_355A2207C3B7A99D_67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19E303F0)
#define CLASS_1_355A2207C3B7A99D_67_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19E300E0)
#define CLASS_1_355A2207C3B7A99D_67_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19E2FF20)
#define CLASS_1_355A2207C3B7A99D_67_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19E300F0)
#define CLASS_1_355A2207C3B7A99D_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19E2FF80)
#define CLASS_1_355A2207C3B7A99D_67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E302D0)
#define CLASS_1_355A2207C3B7A99D_67_WRITETO_OFFSET UNITYSDK_OFFSET(0x19E30330)
#define CLASS_1_355A2207C3B7A99D_67__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E30510)
#define CLASS_1_355A2207C3B7A99D_67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E2FFA0)
#define CLASS_1_355A2207C3B7A99D_67__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2FF90)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_67_TypeDefinitionIndex = 30296;

class Class_1_355A2207C3B7A99D_67 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_67*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_67_TypeDefinitionIndex)->GetStaticField(0x48F70);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Class_1_D17272E82AE804C2_9* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_67*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_67*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_67*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_67* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_9*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_67*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_67*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_67_MERGEFROM_1_OFFSET))(this, a1);
	}
};

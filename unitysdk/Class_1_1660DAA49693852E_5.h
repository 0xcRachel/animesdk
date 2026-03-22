#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_55;
class Class_1_81EEA3F759B06252;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1660DAA49693852E_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x172EA280)
#define CLASS_1_1660DAA49693852E_5_CLONE_OFFSET UNITYSDK_OFFSET(0x172E9E20)
#define CLASS_1_1660DAA49693852E_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172EA050)
#define CLASS_1_1660DAA49693852E_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x172E9F60)
#define CLASS_1_1660DAA49693852E_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172EA130)
#define CLASS_1_1660DAA49693852E_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x172EA410)
#define CLASS_1_1660DAA49693852E_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x172EA310)
#define CLASS_1_1660DAA49693852E_5_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x172E9F40)
#define CLASS_1_1660DAA49693852E_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x172E9F20)
#define CLASS_1_1660DAA49693852E_5_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x172E9F50)
#define CLASS_1_1660DAA49693852E_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x172E9F30)
#define CLASS_1_1660DAA49693852E_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x172E9D10)
#define CLASS_1_1660DAA49693852E_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172EA1A0)
#define CLASS_1_1660DAA49693852E_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x172EA200)
#define CLASS_1_1660DAA49693852E_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172E9D30)
#define CLASS_1_1660DAA49693852E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x172E9D20)

inline static constexpr unsigned int Class_1_1660DAA49693852E_5_TypeDefinitionIndex = 24912;

class Class_1_1660DAA49693852E_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Class_1_81EEA3F759B06252* Field_1_4; // 0x10
	::Class_1_4CF8088A158DCE25_55* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1660DAA49693852E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_5*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1660DAA49693852E_5* Clone()
	{
		return ((::Class_1_1660DAA49693852E_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_CLONE_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_55* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4CF8088A158DCE25_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4CF8088A158DCE25_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_55*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_81EEA3F759B06252* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_81EEA3F759B06252*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_81EEA3F759B06252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_81EEA3F759B06252*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1660DAA49693852E_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1660DAA49693852E_5*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1660DAA49693852E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E_5*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1660DAA49693852E_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51AD4A996C8C1E92_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AADD330)
#define CLASS_1_9BA36423EA524C40_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1AADCFE0)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AADD180)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AADD0B0)
#define CLASS_1_9BA36423EA524C40_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AADD220)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AADD470)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AADD390)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AADD090)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AADCEF0)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AADD0A0)
#define CLASS_1_9BA36423EA524C40_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AADCF50)
#define CLASS_1_9BA36423EA524C40_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AADD270)
#define CLASS_1_9BA36423EA524C40_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AADD2D0)
#define CLASS_1_9BA36423EA524C40_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AADD670)
#define CLASS_1_9BA36423EA524C40_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AADCF70)
#define CLASS_1_9BA36423EA524C40_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADCF60)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_8_TypeDefinitionIndex = 29573;

class Class_1_9BA36423EA524C40_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_8_TypeDefinitionIndex)->GetStaticField(0x48540);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_51AD4A996C8C1E92_2* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_8* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_CLONE_OFFSET))(this);
	}

	::Class_1_51AD4A996C8C1E92_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_51AD4A996C8C1E92_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_51AD4A996C8C1E92_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_51AD4A996C8C1E92_2*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};

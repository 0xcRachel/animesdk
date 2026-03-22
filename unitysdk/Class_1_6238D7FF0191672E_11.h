#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E591DF54310AABF5;
class Class_1_EBB10EC01CCC4716_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6238D7FF0191672E_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17406930)
#define CLASS_1_6238D7FF0191672E_11_CLONE_OFFSET UNITYSDK_OFFSET(0x17406470)
#define CLASS_1_6238D7FF0191672E_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174066B0)
#define CLASS_1_6238D7FF0191672E_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x174065C0)
#define CLASS_1_6238D7FF0191672E_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174067A0)
#define CLASS_1_6238D7FF0191672E_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17406B80)
#define CLASS_1_6238D7FF0191672E_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17406A30)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17406560)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x174065A0)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17406580)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17406570)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x174065B0)
#define CLASS_1_6238D7FF0191672E_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17406590)
#define CLASS_1_6238D7FF0191672E_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17406370)
#define CLASS_1_6238D7FF0191672E_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17406830)
#define CLASS_1_6238D7FF0191672E_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x17406890)
#define CLASS_1_6238D7FF0191672E_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17406390)
#define CLASS_1_6238D7FF0191672E_11__CTOR_OFFSET UNITYSDK_OFFSET(0x17406380)

inline static constexpr unsigned int Class_1_6238D7FF0191672E_11_TypeDefinitionIndex = 26025;

class Class_1_6238D7FF0191672E_11 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Class_1_E591DF54310AABF5* Field_1_4; // 0x10
	::Class_1_EBB10EC01CCC4716_15* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6238D7FF0191672E_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_11*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6238D7FF0191672E_11* Clone()
	{
		return ((::Class_1_6238D7FF0191672E_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E591DF54310AABF5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E591DF54310AABF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E591DF54310AABF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_15* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_EBB10EC01CCC4716_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_EBB10EC01CCC4716_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6238D7FF0191672E_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6238D7FF0191672E_11*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6238D7FF0191672E_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_11*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6238D7FF0191672E_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C09BF55E595BAC4D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E7DEA0)
#define CLASS_1_C09BF55E595BAC4D_CLONE_OFFSET UNITYSDK_OFFSET(0x17E7D9C0)
#define CLASS_1_C09BF55E595BAC4D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E7DB50)
#define CLASS_1_C09BF55E595BAC4D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E7DAF0)
#define CLASS_1_C09BF55E595BAC4D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E7DC70)
#define CLASS_1_C09BF55E595BAC4D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E7E0F0)
#define CLASS_1_C09BF55E595BAC4D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E7E080)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E7DA70)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E7DA50)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17E7DA90)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E7DA80)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E7DA60)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17E7DAE0)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E7DAD0)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E7DAC0)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17E7DAA0)
#define CLASS_1_C09BF55E595BAC4D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E7DAB0)
#define CLASS_1_C09BF55E595BAC4D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E7D950)
#define CLASS_1_C09BF55E595BAC4D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E7DD20)
#define CLASS_1_C09BF55E595BAC4D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E7DD80)
#define CLASS_1_C09BF55E595BAC4D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E7D970)
#define CLASS_1_C09BF55E595BAC4D__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7D960)

inline static constexpr unsigned int Class_1_C09BF55E595BAC4D_TypeDefinitionIndex = 26313;

class Class_1_C09BF55E595BAC4D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::Single Field_1_6; // 0x20
	::System::Int32 Field_1_10; // 0x24
	::System::Boolean Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C09BF55E595BAC4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C09BF55E595BAC4D*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C09BF55E595BAC4D* Clone()
	{
		return ((::Class_1_C09BF55E595BAC4D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C09BF55E595BAC4D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C09BF55E595BAC4D*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C09BF55E595BAC4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C09BF55E595BAC4D*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C09BF55E595BAC4D_MERGEFROM_1_OFFSET))(this, a1);
	}
};

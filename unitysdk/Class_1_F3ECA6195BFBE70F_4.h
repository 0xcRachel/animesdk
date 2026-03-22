#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3ECA6195BFBE70F_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1780FED0)
#define CLASS_1_F3ECA6195BFBE70F_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1780FB10)
#define CLASS_1_F3ECA6195BFBE70F_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1780FC90)
#define CLASS_1_F3ECA6195BFBE70F_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1780FBF0)
#define CLASS_1_F3ECA6195BFBE70F_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1780FD20)
#define CLASS_1_F3ECA6195BFBE70F_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178100C0)
#define CLASS_1_F3ECA6195BFBE70F_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17810070)
#define CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1780FBA0)
#define CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1780FB90)
#define CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1780FB80)
#define CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1780FB70)
#define CLASS_1_F3ECA6195BFBE70F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1780FAB0)
#define CLASS_1_F3ECA6195BFBE70F_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1780FDD0)
#define CLASS_1_F3ECA6195BFBE70F_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1780FE30)
#define CLASS_1_F3ECA6195BFBE70F_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1780FAD0)
#define CLASS_1_F3ECA6195BFBE70F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1780FAC0)

inline static constexpr unsigned int Class_1_F3ECA6195BFBE70F_4_TypeDefinitionIndex = 22477;

class Class_1_F3ECA6195BFBE70F_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3ECA6195BFBE70F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_4*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3ECA6195BFBE70F_4* Clone()
	{
		return ((::Class_1_F3ECA6195BFBE70F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3ECA6195BFBE70F_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_4*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3ECA6195BFBE70F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3ECA6195BFBE70F_4*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3ECA6195BFBE70F_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

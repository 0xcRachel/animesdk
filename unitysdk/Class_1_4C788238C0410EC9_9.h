#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F8AB4CD8CD203268;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4C788238C0410EC9_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C1F850)
#define CLASS_1_4C788238C0410EC9_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17C1F4E0)
#define CLASS_1_4C788238C0410EC9_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C1F670)
#define CLASS_1_4C788238C0410EC9_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C1F5C0)
#define CLASS_1_4C788238C0410EC9_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C1F720)
#define CLASS_1_4C788238C0410EC9_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C1F9F0)
#define CLASS_1_4C788238C0410EC9_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C1F920)
#define CLASS_1_4C788238C0410EC9_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C1F5A0)
#define CLASS_1_4C788238C0410EC9_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C1F580)
#define CLASS_1_4C788238C0410EC9_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C1F5B0)
#define CLASS_1_4C788238C0410EC9_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C1F590)
#define CLASS_1_4C788238C0410EC9_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C1F430)
#define CLASS_1_4C788238C0410EC9_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C1F770)
#define CLASS_1_4C788238C0410EC9_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C1F7D0)
#define CLASS_1_4C788238C0410EC9_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C1F450)
#define CLASS_1_4C788238C0410EC9_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1F440)

inline static constexpr unsigned int Class_1_4C788238C0410EC9_9_TypeDefinitionIndex = 27221;

class Class_1_4C788238C0410EC9_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_F8AB4CD8CD203268* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4C788238C0410EC9_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C788238C0410EC9_9*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4C788238C0410EC9_9* Clone()
	{
		return ((::Class_1_4C788238C0410EC9_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_CLONE_OFFSET))(this);
	}

	::Class_1_F8AB4CD8CD203268* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F8AB4CD8CD203268*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F8AB4CD8CD203268* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4C788238C0410EC9_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4C788238C0410EC9_9*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4C788238C0410EC9_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C788238C0410EC9_9*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_82_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A622220)
#define CLASS_1_21C7581DFE99F091_82_CLONE_OFFSET UNITYSDK_OFFSET(0x1A621EE0)
#define CLASS_1_21C7581DFE99F091_82_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A622080)
#define CLASS_1_21C7581DFE99F091_82_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A621FC0)
#define CLASS_1_21C7581DFE99F091_82_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6220F0)
#define CLASS_1_21C7581DFE99F091_82_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A622390)
#define CLASS_1_21C7581DFE99F091_82_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A622340)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A621F80)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A621F60)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A621E20)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A621F90)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A621F70)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A621FB0)
#define CLASS_1_21C7581DFE99F091_82_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A621FA0)
#define CLASS_1_21C7581DFE99F091_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A621E80)
#define CLASS_1_21C7581DFE99F091_82_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A622120)
#define CLASS_1_21C7581DFE99F091_82_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A622180)
#define CLASS_1_21C7581DFE99F091_82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A622530)
#define CLASS_1_21C7581DFE99F091_82__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A621EA0)
#define CLASS_1_21C7581DFE99F091_82__CTOR_OFFSET UNITYSDK_OFFSET(0x1A621E90)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_82_TypeDefinitionIndex = 30782;

class Class_1_21C7581DFE99F091_82 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_82*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_82_TypeDefinitionIndex)->GetStaticField(0x33000);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_82*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_82*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_82*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_82* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_82* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_82*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_82*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_82_MERGEFROM_1_OFFSET))(this, a1);
	}
};

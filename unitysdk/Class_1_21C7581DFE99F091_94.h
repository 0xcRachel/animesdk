#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A449030)
#define CLASS_1_21C7581DFE99F091_94_CLONE_OFFSET UNITYSDK_OFFSET(0x1A448C30)
#define CLASS_1_21C7581DFE99F091_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A448DE0)
#define CLASS_1_21C7581DFE99F091_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A448D20)
#define CLASS_1_21C7581DFE99F091_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A448E90)
#define CLASS_1_21C7581DFE99F091_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A449150)
#define CLASS_1_21C7581DFE99F091_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4490F0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A448CC0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A448BA0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A448CD0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A448CB0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A448CF0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1A448D10)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A448C90)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A448CA0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A448CE0)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1A448D00)
#define CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A448C80)
#define CLASS_1_21C7581DFE99F091_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A448BD0)
#define CLASS_1_21C7581DFE99F091_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A448ED0)
#define CLASS_1_21C7581DFE99F091_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A448F30)
#define CLASS_1_21C7581DFE99F091_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A449210)
#define CLASS_1_21C7581DFE99F091_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A448BF0)
#define CLASS_1_21C7581DFE99F091_94__CTOR_OFFSET UNITYSDK_OFFSET(0x1A448BE0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_94_TypeDefinitionIndex = 31790;

class Class_1_21C7581DFE99F091_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_94*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_94_TypeDefinitionIndex)->GetStaticField(0xD5D0);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_7; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_11; // 0x1D
	::System::Boolean Field_1_9; // 0x1E
	::System::Boolean Field_1_5; // 0x1F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_94*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_94*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_94*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_94* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_94*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_94*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};

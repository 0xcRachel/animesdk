#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_74BB263EAAA71EF1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D64ED0)
#define CLASS_1_74BB263EAAA71EF1_CLONE_OFFSET UNITYSDK_OFFSET(0x17D64B80)
#define CLASS_1_74BB263EAAA71EF1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D64CF0)
#define CLASS_1_74BB263EAAA71EF1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D64C40)
#define CLASS_1_74BB263EAAA71EF1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D64DA0)
#define CLASS_1_74BB263EAAA71EF1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D65030)
#define CLASS_1_74BB263EAAA71EF1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D64FA0)
#define CLASS_1_74BB263EAAA71EF1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D64C20)
#define CLASS_1_74BB263EAAA71EF1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17D64C10)
#define CLASS_1_74BB263EAAA71EF1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17D64C00)
#define CLASS_1_74BB263EAAA71EF1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D64C30)
#define CLASS_1_74BB263EAAA71EF1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D64AF0)
#define CLASS_1_74BB263EAAA71EF1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D64DF0)
#define CLASS_1_74BB263EAAA71EF1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D64E50)
#define CLASS_1_74BB263EAAA71EF1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D64B10)
#define CLASS_1_74BB263EAAA71EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64B00)

inline static constexpr unsigned int Class_1_74BB263EAAA71EF1_TypeDefinitionIndex = 23409;

class Class_1_74BB263EAAA71EF1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Proto::ItemList* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_74BB263EAAA71EF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74BB263EAAA71EF1*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_74BB263EAAA71EF1* Clone()
	{
		return ((::Class_1_74BB263EAAA71EF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_74BB263EAAA71EF1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_74BB263EAAA71EF1*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_74BB263EAAA71EF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_74BB263EAAA71EF1*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_74BB263EAAA71EF1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

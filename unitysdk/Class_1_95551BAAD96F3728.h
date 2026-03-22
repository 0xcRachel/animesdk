#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_95551BAAD96F3728_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176A56B0)
#define CLASS_1_95551BAAD96F3728_CLONE_OFFSET UNITYSDK_OFFSET(0x176A5190)
#define CLASS_1_95551BAAD96F3728_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176A53D0)
#define CLASS_1_95551BAAD96F3728_EQUALS_OFFSET UNITYSDK_OFFSET(0x176A5260)
#define CLASS_1_95551BAAD96F3728_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176A54F0)
#define CLASS_1_95551BAAD96F3728_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176A5900)
#define CLASS_1_95551BAAD96F3728_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x176A5780)
#define CLASS_1_95551BAAD96F3728_METHOD_1_05C52192594385BB_OFFSET UNITYSDK_OFFSET(0x176A5240)
#define CLASS_1_95551BAAD96F3728_METHOD_1_246E6D0E25F98E80_OFFSET UNITYSDK_OFFSET(0x176A5250)
#define CLASS_1_95551BAAD96F3728_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x176A5210)
#define CLASS_1_95551BAAD96F3728_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x176A51F0)
#define CLASS_1_95551BAAD96F3728_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x176A5200)
#define CLASS_1_95551BAAD96F3728_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x176A51E0)
#define CLASS_1_95551BAAD96F3728_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x176A5230)
#define CLASS_1_95551BAAD96F3728_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x176A5220)
#define CLASS_1_95551BAAD96F3728_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176A5080)
#define CLASS_1_95551BAAD96F3728_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176A5580)
#define CLASS_1_95551BAAD96F3728_WRITETO_OFFSET UNITYSDK_OFFSET(0x176A55E0)
#define CLASS_1_95551BAAD96F3728__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176A50A0)
#define CLASS_1_95551BAAD96F3728__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5090)

inline static constexpr unsigned int Class_1_95551BAAD96F3728_TypeDefinitionIndex = 24028;

class Class_1_95551BAAD96F3728 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Proto::Item* Field_1_8; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Proto::ItemList* Field_1_2; // 0x28
	::System::Boolean Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_95551BAAD96F3728* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95551BAAD96F3728*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_95551BAAD96F3728* Clone()
	{
		return ((::Class_1_95551BAAD96F3728*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::Item* Method_1_05C52192594385BB()
	{
		return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_05C52192594385BB_OFFSET))(this);
	}

	::System::Void Method_1_246E6D0E25F98E80(::Proto::Item* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_METHOD_1_246E6D0E25F98E80_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_95551BAAD96F3728* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95551BAAD96F3728*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_95551BAAD96F3728* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95551BAAD96F3728*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_95551BAAD96F3728_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6389873A9832B520_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C23AB0)
#define CLASS_1_6389873A9832B520_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C236B0)
#define CLASS_1_6389873A9832B520_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C23790)
#define CLASS_1_6389873A9832B520_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C23760)
#define CLASS_1_6389873A9832B520_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C23900)
#define CLASS_1_6389873A9832B520_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C23D20)
#define CLASS_1_6389873A9832B520_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C23BA0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17C23710)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_2_OFFSET UNITYSDK_OFFSET(0x17C23730)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_3_OFFSET UNITYSDK_OFFSET(0x17C23750)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17C236F0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17C23700)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET UNITYSDK_OFFSET(0x17C23720)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET UNITYSDK_OFFSET(0x17C23740)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17C236E0)
#define CLASS_1_6389873A9832B520_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C23580)
#define CLASS_1_6389873A9832B520_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C23980)
#define CLASS_1_6389873A9832B520_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C239E0)
#define CLASS_1_6389873A9832B520_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C235A0)
#define CLASS_1_6389873A9832B520_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C23590)

inline static constexpr unsigned int Class_1_6389873A9832B520_1_TypeDefinitionIndex = 27094;

class Class_1_6389873A9832B520_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_8; // 0x18
	::Proto::ItemList* Field_1_4; // 0x20
	::Proto::ItemList* Field_1_2; // 0x28
	::Proto::ItemList* Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6389873A9832B520_1* Clone()
	{
		return ((::Class_1_6389873A9832B520_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_2()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_2(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_2_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_3(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

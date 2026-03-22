#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B139B98AF2D803D6_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17667400)
#define CLASS_1_B139B98AF2D803D6_22_CLONE_OFFSET UNITYSDK_OFFSET(0x17666FF0)
#define CLASS_1_B139B98AF2D803D6_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x176671B0)
#define CLASS_1_B139B98AF2D803D6_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x176670E0)
#define CLASS_1_B139B98AF2D803D6_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17667240)
#define CLASS_1_B139B98AF2D803D6_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x176675E0)
#define CLASS_1_B139B98AF2D803D6_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17667590)
#define CLASS_1_B139B98AF2D803D6_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x176670C0)
#define CLASS_1_B139B98AF2D803D6_22_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17667070)
#define CLASS_1_B139B98AF2D803D6_22_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17667060)
#define CLASS_1_B139B98AF2D803D6_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x176670D0)
#define CLASS_1_B139B98AF2D803D6_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17666F90)
#define CLASS_1_B139B98AF2D803D6_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17667310)
#define CLASS_1_B139B98AF2D803D6_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x17667370)
#define CLASS_1_B139B98AF2D803D6_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17666FB0)
#define CLASS_1_B139B98AF2D803D6_22__CTOR_OFFSET UNITYSDK_OFFSET(0x17666FA0)

inline static constexpr unsigned int Class_1_B139B98AF2D803D6_22_TypeDefinitionIndex = 26183;

class Class_1_B139B98AF2D803D6_22 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B139B98AF2D803D6_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_22*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B139B98AF2D803D6_22* Clone()
	{
		return ((::Class_1_B139B98AF2D803D6_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B139B98AF2D803D6_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B139B98AF2D803D6_22*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B139B98AF2D803D6_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_22*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B139B98AF2D803D6_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};

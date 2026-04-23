#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AD828BA811E7C7A_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A21B6E0)
#define CLASS_1_9AD828BA811E7C7A_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A21B1E0)
#define CLASS_1_9AD828BA811E7C7A_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A21B3E0)
#define CLASS_1_9AD828BA811E7C7A_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A21B310)
#define CLASS_1_9AD828BA811E7C7A_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A21B4A0)
#define CLASS_1_9AD828BA811E7C7A_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A21B8A0)
#define CLASS_1_9AD828BA811E7C7A_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A21B830)
#define CLASS_1_9AD828BA811E7C7A_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A21B2F0)
#define CLASS_1_9AD828BA811E7C7A_4_METHOD_1_24B765795E512402_OFFSET UNITYSDK_OFFSET(0x1A21B280)
#define CLASS_1_9AD828BA811E7C7A_4_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A21B270)
#define CLASS_1_9AD828BA811E7C7A_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A21B0D0)
#define CLASS_1_9AD828BA811E7C7A_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A21B300)
#define CLASS_1_9AD828BA811E7C7A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A21B100)
#define CLASS_1_9AD828BA811E7C7A_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A21B5D0)
#define CLASS_1_9AD828BA811E7C7A_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A21B630)
#define CLASS_1_9AD828BA811E7C7A_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A21B980)
#define CLASS_1_9AD828BA811E7C7A_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A21B160)
#define CLASS_1_9AD828BA811E7C7A_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A21B110)

inline static constexpr unsigned int Class_1_9AD828BA811E7C7A_4_TypeDefinitionIndex = 32264;

class Class_1_9AD828BA811E7C7A_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD828BA811E7C7A_4_TypeDefinitionIndex)->GetStaticField(0x1D340);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::ByteString* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AD828BA811E7C7A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_4* Clone()
	{
		return ((::Class_1_9AD828BA811E7C7A_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_24B765795E512402(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_METHOD_1_24B765795E512402_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AD828BA811E7C7A_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AD828BA811E7C7A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

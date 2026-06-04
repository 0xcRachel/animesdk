#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D1E0AD3915BCCF29_79_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AC69E20)
#define CLASS_1_D1E0AD3915BCCF29_79_CLONE_OFFSET UNITYSDK_OFFSET(0x1AC69B60)
#define CLASS_1_D1E0AD3915BCCF29_79_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AC69C80)
#define CLASS_1_D1E0AD3915BCCF29_79_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC69C10)
#define CLASS_1_D1E0AD3915BCCF29_79_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC69CF0)
#define CLASS_1_D1E0AD3915BCCF29_79_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AC6A000)
#define CLASS_1_D1E0AD3915BCCF29_79_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AC69FB0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AC69BD0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AC69BF0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AC69BB0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AC69AD0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AC69BE0)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AC69C00)
#define CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AC69BC0)
#define CLASS_1_D1E0AD3915BCCF29_79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AC69B00)
#define CLASS_1_D1E0AD3915BCCF29_79_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC69D20)
#define CLASS_1_D1E0AD3915BCCF29_79_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AC69D80)
#define CLASS_1_D1E0AD3915BCCF29_79__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC6A1A0)
#define CLASS_1_D1E0AD3915BCCF29_79__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC69B20)
#define CLASS_1_D1E0AD3915BCCF29_79__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC69B10)

inline static constexpr unsigned int Class_1_D1E0AD3915BCCF29_79_TypeDefinitionIndex = 29537;

class Class_1_D1E0AD3915BCCF29_79 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_79*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_79*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1E0AD3915BCCF29_79_TypeDefinitionIndex)->GetStaticField(0x65C20);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D1E0AD3915BCCF29_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_79*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_79*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_79*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D1E0AD3915BCCF29_79* Clone()
	{
		return ((::Class_1_D1E0AD3915BCCF29_79*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D1E0AD3915BCCF29_79* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_79*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D1E0AD3915BCCF29_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_79*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_79_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53E10B0C21BFBB25;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_34A67A60E0FAC469_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194BC840)
#define CLASS_1_34A67A60E0FAC469_1_CLONE_OFFSET UNITYSDK_OFFSET(0x194BC480)
#define CLASS_1_34A67A60E0FAC469_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194BC670)
#define CLASS_1_34A67A60E0FAC469_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x194BC590)
#define CLASS_1_34A67A60E0FAC469_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194BC720)
#define CLASS_1_34A67A60E0FAC469_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194BC960)
#define CLASS_1_34A67A60E0FAC469_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194BC8A0)
#define CLASS_1_34A67A60E0FAC469_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x194BC550)
#define CLASS_1_34A67A60E0FAC469_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x194BC370)
#define CLASS_1_34A67A60E0FAC469_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x194BC560)
#define CLASS_1_34A67A60E0FAC469_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x194BC580)
#define CLASS_1_34A67A60E0FAC469_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x194BC570)
#define CLASS_1_34A67A60E0FAC469_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194BC3D0)
#define CLASS_1_34A67A60E0FAC469_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194BC760)
#define CLASS_1_34A67A60E0FAC469_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x194BC7C0)
#define CLASS_1_34A67A60E0FAC469_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x194BCA40)
#define CLASS_1_34A67A60E0FAC469_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194BC3F0)
#define CLASS_1_34A67A60E0FAC469_1__CTOR_OFFSET UNITYSDK_OFFSET(0x194BC3E0)

inline static constexpr unsigned int Class_1_34A67A60E0FAC469_1_TypeDefinitionIndex = 30139;

class Class_1_34A67A60E0FAC469_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34A67A60E0FAC469_1_TypeDefinitionIndex)->GetStaticField(0x50670);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Class_1_53E10B0C21BFBB25* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_34A67A60E0FAC469_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469_1*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_34A67A60E0FAC469_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_34A67A60E0FAC469_1* Clone()
	{
		return ((::Class_1_34A67A60E0FAC469_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_CLONE_OFFSET))(this);
	}

	::Class_1_53E10B0C21BFBB25* Method_1_24748FC20F375725()
	{
		return ((::Class_1_53E10B0C21BFBB25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_53E10B0C21BFBB25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53E10B0C21BFBB25*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_34A67A60E0FAC469_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_34A67A60E0FAC469_1*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_34A67A60E0FAC469_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34A67A60E0FAC469_1*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34A67A60E0FAC469_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_46;
class Class_1_8AFE572D3B5BA107;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D0DA500DC3BEAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19F21EB0)
#define CLASS_1_20D0DA500DC3BEAC_CLONE_OFFSET UNITYSDK_OFFSET(0x19F21AB0)
#define CLASS_1_20D0DA500DC3BEAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19F21C90)
#define CLASS_1_20D0DA500DC3BEAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F21BA0)
#define CLASS_1_20D0DA500DC3BEAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F21D70)
#define CLASS_1_20D0DA500DC3BEAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19F220E0)
#define CLASS_1_20D0DA500DC3BEAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19F21F40)
#define CLASS_1_20D0DA500DC3BEAC_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19F21B80)
#define CLASS_1_20D0DA500DC3BEAC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19F21B60)
#define CLASS_1_20D0DA500DC3BEAC_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19F219C0)
#define CLASS_1_20D0DA500DC3BEAC_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19F21B90)
#define CLASS_1_20D0DA500DC3BEAC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19F21B70)
#define CLASS_1_20D0DA500DC3BEAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19F219F0)
#define CLASS_1_20D0DA500DC3BEAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F21DD0)
#define CLASS_1_20D0DA500DC3BEAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F21E30)
#define CLASS_1_20D0DA500DC3BEAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F22230)
#define CLASS_1_20D0DA500DC3BEAC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F21A10)
#define CLASS_1_20D0DA500DC3BEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F21A00)

inline static constexpr unsigned int Class_1_20D0DA500DC3BEAC_TypeDefinitionIndex = 27882;

class Class_1_20D0DA500DC3BEAC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D0DA500DC3BEAC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D0DA500DC3BEAC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D0DA500DC3BEAC_TypeDefinitionIndex)->GetStaticField(0x4CF0);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Class_1_075C34D03AFA1215_46* Field_1_5; // 0x10
	::Class_1_8AFE572D3B5BA107* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20D0DA500DC3BEAC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D0DA500DC3BEAC*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20D0DA500DC3BEAC*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20D0DA500DC3BEAC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20D0DA500DC3BEAC* Clone()
	{
		return ((::Class_1_20D0DA500DC3BEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_CLONE_OFFSET))(this);
	}

	::Class_1_8AFE572D3B5BA107* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8AFE572D3B5BA107*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_46* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_075C34D03AFA1215_46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_075C34D03AFA1215_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_46*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20D0DA500DC3BEAC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D0DA500DC3BEAC*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20D0DA500DC3BEAC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D0DA500DC3BEAC*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC_MERGEFROM_1_OFFSET))(this, a1);
	}
};

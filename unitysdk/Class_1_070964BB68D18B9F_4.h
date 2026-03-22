#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_070964BB68D18B9F_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175C0130)
#define CLASS_1_070964BB68D18B9F_4_CLONE_OFFSET UNITYSDK_OFFSET(0x175BFB30)
#define CLASS_1_070964BB68D18B9F_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175BFC80)
#define CLASS_1_070964BB68D18B9F_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x175BFC50)
#define CLASS_1_070964BB68D18B9F_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175BFE00)
#define CLASS_1_070964BB68D18B9F_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175C0570)
#define CLASS_1_070964BB68D18B9F_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175C04D0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x175BFB80)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x175BFBA0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x175BFBC0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x175BFC00)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175BFB60)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x175BFBF0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x175BFC20)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x175BFB90)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x175BFBB0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x175BFBD0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x175BFC10)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175BFB70)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_AF0DEDC0F76C8BDF_OFFSET UNITYSDK_OFFSET(0x175BFC40)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x175BFBE0)
#define CLASS_1_070964BB68D18B9F_4_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x175BFC30)
#define CLASS_1_070964BB68D18B9F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175BFA20)
#define CLASS_1_070964BB68D18B9F_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175BFF10)
#define CLASS_1_070964BB68D18B9F_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x175BFF70)
#define CLASS_1_070964BB68D18B9F_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x175C06F0)
#define CLASS_1_070964BB68D18B9F_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175BFA70)
#define CLASS_1_070964BB68D18B9F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x175BFA30)

inline static constexpr unsigned int Class_1_070964BB68D18B9F_4_TypeDefinitionIndex = 26285;

class Class_1_070964BB68D18B9F_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_070964BB68D18B9F_4_TypeDefinitionIndex)->GetStaticField(0x171C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Field_1_17; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt64 Field_1_10; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_12; // 0x34
	::System::Single Field_1_14; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_070964BB68D18B9F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_4*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_070964BB68D18B9F_4* Clone()
	{
		return ((::Class_1_070964BB68D18B9F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>* Method_1_AF0DEDC0F76C8BDF()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_METHOD_1_AF0DEDC0F76C8BDF_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_070964BB68D18B9F_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_070964BB68D18B9F_4*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_070964BB68D18B9F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_4*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};

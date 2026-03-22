#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5CF1DDAFE12F0E87;
class Class_1_735612C94F558EAE_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FAEB60E7FA15317F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178A28F0)
#define CLASS_1_FAEB60E7FA15317F_CLONE_OFFSET UNITYSDK_OFFSET(0x178A2360)
#define CLASS_1_FAEB60E7FA15317F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178A2430)
#define CLASS_1_FAEB60E7FA15317F_EQUALS_OFFSET UNITYSDK_OFFSET(0x178A2400)
#define CLASS_1_FAEB60E7FA15317F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178A2550)
#define CLASS_1_FAEB60E7FA15317F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178A2C20)
#define CLASS_1_FAEB60E7FA15317F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178A2AF0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x178A23E0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x178A23C0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x178A23B0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x178A2390)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x178A23F0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x178A23D0)
#define CLASS_1_FAEB60E7FA15317F_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x178A23A0)
#define CLASS_1_FAEB60E7FA15317F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178A2200)
#define CLASS_1_FAEB60E7FA15317F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178A2720)
#define CLASS_1_FAEB60E7FA15317F_WRITETO_OFFSET UNITYSDK_OFFSET(0x178A2780)
#define CLASS_1_FAEB60E7FA15317F__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A2DC0)
#define CLASS_1_FAEB60E7FA15317F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178A22A0)
#define CLASS_1_FAEB60E7FA15317F__CTOR_OFFSET UNITYSDK_OFFSET(0x178A2210)

inline static constexpr unsigned int Class_1_FAEB60E7FA15317F_TypeDefinitionIndex = 22548;

class Class_1_FAEB60E7FA15317F : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAEB60E7FA15317F_TypeDefinitionIndex)->GetStaticField(0x329D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_735612C94F558EAE_3*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_735612C94F558EAE_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAEB60E7FA15317F_TypeDefinitionIndex)->GetStaticField(0x329D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5CF1DDAFE12F0E87*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5CF1DDAFE12F0E87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAEB60E7FA15317F_TypeDefinitionIndex)->GetStaticField(0x329E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_735612C94F558EAE_3*>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87*>* Field_1_3; // 0x28
	::System::UInt32 Field_1_13; // 0x30
	::System::UInt32 Field_1_11; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FAEB60E7FA15317F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAEB60E7FA15317F*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FAEB60E7FA15317F* Clone()
	{
		return ((::Class_1_FAEB60E7FA15317F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_735612C94F558EAE_3*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_735612C94F558EAE_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FAEB60E7FA15317F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FAEB60E7FA15317F*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FAEB60E7FA15317F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAEB60E7FA15317F*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FAEB60E7FA15317F_MERGEFROM_1_OFFSET))(this, a1);
	}
};

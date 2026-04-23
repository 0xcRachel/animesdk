#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F487A56015EDF324_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2EFB80)
#define CLASS_1_F487A56015EDF324_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2EF640)
#define CLASS_1_F487A56015EDF324_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2EF800)
#define CLASS_1_F487A56015EDF324_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2EF720)
#define CLASS_1_F487A56015EDF324_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2EF8B0)
#define CLASS_1_F487A56015EDF324_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2EFE70)
#define CLASS_1_F487A56015EDF324_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2EFE00)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A2EF6B0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A2EF6D0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A2EF700)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2EF690)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A2EF4E0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A2EF6F0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A2EF6C0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A2EF6E0)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A2EF710)
#define CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A2EF6A0)
#define CLASS_1_F487A56015EDF324_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2EF540)
#define CLASS_1_F487A56015EDF324_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2EF9D0)
#define CLASS_1_F487A56015EDF324_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2EFA30)
#define CLASS_1_F487A56015EDF324_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2EFF90)
#define CLASS_1_F487A56015EDF324_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2EF5A0)
#define CLASS_1_F487A56015EDF324_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EF550)

inline static constexpr unsigned int Class_1_F487A56015EDF324_2_TypeDefinitionIndex = 31832;

class Class_1_F487A56015EDF324_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_2_TypeDefinitionIndex)->GetStaticField(0x4FD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_2_TypeDefinitionIndex)->GetStaticField(0x4FD8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F487A56015EDF324_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_2*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F487A56015EDF324_2* Clone()
	{
		return ((::Class_1_F487A56015EDF324_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F487A56015EDF324_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F487A56015EDF324_2*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F487A56015EDF324_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_2*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

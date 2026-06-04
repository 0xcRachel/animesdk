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

#define CLASS_1_4BC858D7C27E10ED_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AD184C0)
#define CLASS_1_4BC858D7C27E10ED_44_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD17FD0)
#define CLASS_1_4BC858D7C27E10ED_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AD18170)
#define CLASS_1_4BC858D7C27E10ED_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AD18090)
#define CLASS_1_4BC858D7C27E10ED_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD18220)
#define CLASS_1_4BC858D7C27E10ED_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AD18710)
#define CLASS_1_4BC858D7C27E10ED_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AD186B0)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1AD18040)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1AD18060)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AD18020)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AD17E80)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AD18080)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1AD18050)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1AD18070)
#define CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AD18030)
#define CLASS_1_4BC858D7C27E10ED_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AD17EE0)
#define CLASS_1_4BC858D7C27E10ED_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AD18330)
#define CLASS_1_4BC858D7C27E10ED_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AD18390)
#define CLASS_1_4BC858D7C27E10ED_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD18820)
#define CLASS_1_4BC858D7C27E10ED_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD17F40)
#define CLASS_1_4BC858D7C27E10ED_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD17EF0)

inline static constexpr unsigned int Class_1_4BC858D7C27E10ED_44_TypeDefinitionIndex = 29181;

class Class_1_4BC858D7C27E10ED_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_44*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_44_TypeDefinitionIndex)->GetStaticField(0xE480);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_44_TypeDefinitionIndex)->GetStaticField(0xE488);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4BC858D7C27E10ED_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_44*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_44*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_44* Clone()
	{
		return ((::Class_1_4BC858D7C27E10ED_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4BC858D7C27E10ED_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_44*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4BC858D7C27E10ED_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_44*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B3B48B7EEC81A99A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17838A70)
#define CLASS_1_B3B48B7EEC81A99A_CLONE_OFFSET UNITYSDK_OFFSET(0x17838660)
#define CLASS_1_B3B48B7EEC81A99A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17838790)
#define CLASS_1_B3B48B7EEC81A99A_EQUALS_OFFSET UNITYSDK_OFFSET(0x178386E0)
#define CLASS_1_B3B48B7EEC81A99A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17838830)
#define CLASS_1_B3B48B7EEC81A99A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17838C30)
#define CLASS_1_B3B48B7EEC81A99A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17838BD0)
#define CLASS_1_B3B48B7EEC81A99A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x178386B0)
#define CLASS_1_B3B48B7EEC81A99A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17838690)
#define CLASS_1_B3B48B7EEC81A99A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x178386D0)
#define CLASS_1_B3B48B7EEC81A99A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x178386C0)
#define CLASS_1_B3B48B7EEC81A99A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x178386A0)
#define CLASS_1_B3B48B7EEC81A99A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17838570)
#define CLASS_1_B3B48B7EEC81A99A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17838940)
#define CLASS_1_B3B48B7EEC81A99A_WRITETO_OFFSET UNITYSDK_OFFSET(0x178389A0)
#define CLASS_1_B3B48B7EEC81A99A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17838D20)
#define CLASS_1_B3B48B7EEC81A99A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178385D0)
#define CLASS_1_B3B48B7EEC81A99A__CTOR_OFFSET UNITYSDK_OFFSET(0x17838580)

inline static constexpr unsigned int Class_1_B3B48B7EEC81A99A_TypeDefinitionIndex = 22928;

class Class_1_B3B48B7EEC81A99A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3B48B7EEC81A99A_TypeDefinitionIndex)->GetStaticField(0x426A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B3B48B7EEC81A99A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B3B48B7EEC81A99A* Clone()
	{
		return ((::Class_1_B3B48B7EEC81A99A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B3B48B7EEC81A99A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B3B48B7EEC81A99A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B3B48B7EEC81A99A_MERGEFROM_1_OFFSET))(this, a1);
	}
};

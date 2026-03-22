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

#define CLASS_1_735612C94F558EAE_70_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x175E3630)
#define CLASS_1_735612C94F558EAE_70_CLONE_OFFSET UNITYSDK_OFFSET(0x175E3290)
#define CLASS_1_735612C94F558EAE_70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x175E3390)
#define CLASS_1_735612C94F558EAE_70_EQUALS_OFFSET UNITYSDK_OFFSET(0x175E32F0)
#define CLASS_1_735612C94F558EAE_70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175E3420)
#define CLASS_1_735612C94F558EAE_70_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x175E3760)
#define CLASS_1_735612C94F558EAE_70_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x175E3710)
#define CLASS_1_735612C94F558EAE_70_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x175E32C0)
#define CLASS_1_735612C94F558EAE_70_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x175E32E0)
#define CLASS_1_735612C94F558EAE_70_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x175E32D0)
#define CLASS_1_735612C94F558EAE_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x175E31A0)
#define CLASS_1_735612C94F558EAE_70_TOSTRING_OFFSET UNITYSDK_OFFSET(0x175E3530)
#define CLASS_1_735612C94F558EAE_70_WRITETO_OFFSET UNITYSDK_OFFSET(0x175E3590)
#define CLASS_1_735612C94F558EAE_70__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E3810)
#define CLASS_1_735612C94F558EAE_70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175E3200)
#define CLASS_1_735612C94F558EAE_70__CTOR_OFFSET UNITYSDK_OFFSET(0x175E31B0)

inline static constexpr unsigned int Class_1_735612C94F558EAE_70_TypeDefinitionIndex = 25777;

class Class_1_735612C94F558EAE_70 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_70_TypeDefinitionIndex)->GetStaticField(0x19F60);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_70*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_70* Clone()
	{
		return ((::Class_1_735612C94F558EAE_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE_70* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE_70*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_70*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_70_MERGEFROM_1_OFFSET))(this, a1);
	}
};

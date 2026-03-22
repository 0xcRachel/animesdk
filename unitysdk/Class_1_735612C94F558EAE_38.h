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

#define CLASS_1_735612C94F558EAE_38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x174BA300)
#define CLASS_1_735612C94F558EAE_38_CLONE_OFFSET UNITYSDK_OFFSET(0x174B9EE0)
#define CLASS_1_735612C94F558EAE_38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174BA030)
#define CLASS_1_735612C94F558EAE_38_EQUALS_OFFSET UNITYSDK_OFFSET(0x174B9F60)
#define CLASS_1_735612C94F558EAE_38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174BA0C0)
#define CLASS_1_735612C94F558EAE_38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x174BA460)
#define CLASS_1_735612C94F558EAE_38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x174BA410)
#define CLASS_1_735612C94F558EAE_38_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174B9F30)
#define CLASS_1_735612C94F558EAE_38_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174B9F50)
#define CLASS_1_735612C94F558EAE_38_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174B9F40)
#define CLASS_1_735612C94F558EAE_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x174B9DF0)
#define CLASS_1_735612C94F558EAE_38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x174BA1D0)
#define CLASS_1_735612C94F558EAE_38_WRITETO_OFFSET UNITYSDK_OFFSET(0x174BA230)
#define CLASS_1_735612C94F558EAE_38__CCTOR_OFFSET UNITYSDK_OFFSET(0x174BA530)
#define CLASS_1_735612C94F558EAE_38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174B9E50)
#define CLASS_1_735612C94F558EAE_38__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9E00)

inline static constexpr unsigned int Class_1_735612C94F558EAE_38_TypeDefinitionIndex = 24427;

class Class_1_735612C94F558EAE_38 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_38_TypeDefinitionIndex)->GetStaticField(0x38C90);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_38*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_38* Clone()
	{
		return ((::Class_1_735612C94F558EAE_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE_38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE_38*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_38*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_38_MERGEFROM_1_OFFSET))(this, a1);
	}
};

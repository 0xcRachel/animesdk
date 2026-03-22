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

#define CLASS_1_0C037D6A61EBBE9D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17404A90)
#define CLASS_1_0C037D6A61EBBE9D_CLONE_OFFSET UNITYSDK_OFFSET(0x17404580)
#define CLASS_1_0C037D6A61EBBE9D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17404700)
#define CLASS_1_0C037D6A61EBBE9D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17404640)
#define CLASS_1_0C037D6A61EBBE9D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174047C0)
#define CLASS_1_0C037D6A61EBBE9D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17404E00)
#define CLASS_1_0C037D6A61EBBE9D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17404D90)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17404600)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x174045D0)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x174045C0)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17404630)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x174045F0)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17404610)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x174045E0)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17404620)
#define CLASS_1_0C037D6A61EBBE9D_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x174045B0)
#define CLASS_1_0C037D6A61EBBE9D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17404480)
#define CLASS_1_0C037D6A61EBBE9D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17404910)
#define CLASS_1_0C037D6A61EBBE9D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17404970)
#define CLASS_1_0C037D6A61EBBE9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17404F10)
#define CLASS_1_0C037D6A61EBBE9D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174044E0)
#define CLASS_1_0C037D6A61EBBE9D__CTOR_OFFSET UNITYSDK_OFFSET(0x17404490)

inline static constexpr unsigned int Class_1_0C037D6A61EBBE9D_TypeDefinitionIndex = 25274;

class Class_1_0C037D6A61EBBE9D : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C037D6A61EBBE9D_TypeDefinitionIndex)->GetStaticField(0x2F4E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::Int64 Field_1_11; // 0x20
	::System::UInt64 Field_1_2; // 0x28
	::System::UInt32 Field_1_9; // 0x30
	::System::UInt32 Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0C037D6A61EBBE9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C037D6A61EBBE9D*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0C037D6A61EBBE9D* Clone()
	{
		return ((::Class_1_0C037D6A61EBBE9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0C037D6A61EBBE9D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0C037D6A61EBBE9D*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0C037D6A61EBBE9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C037D6A61EBBE9D*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C037D6A61EBBE9D_MERGEFROM_1_OFFSET))(this, a1);
	}
};

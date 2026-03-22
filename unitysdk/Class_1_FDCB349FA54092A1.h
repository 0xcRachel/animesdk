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

#define CLASS_1_FDCB349FA54092A1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x176743F0)
#define CLASS_1_FDCB349FA54092A1_CLONE_OFFSET UNITYSDK_OFFSET(0x17673E00)
#define CLASS_1_FDCB349FA54092A1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17673ED0)
#define CLASS_1_FDCB349FA54092A1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17673EA0)
#define CLASS_1_FDCB349FA54092A1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17674070)
#define CLASS_1_FDCB349FA54092A1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17674580)
#define CLASS_1_FDCB349FA54092A1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17674500)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17673E30)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17673E70)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17673E40)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x17673E90)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17673E60)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x17673E80)
#define CLASS_1_FDCB349FA54092A1_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17673E50)
#define CLASS_1_FDCB349FA54092A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17673D00)
#define CLASS_1_FDCB349FA54092A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17674280)
#define CLASS_1_FDCB349FA54092A1_WRITETO_OFFSET UNITYSDK_OFFSET(0x176742E0)
#define CLASS_1_FDCB349FA54092A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17674670)
#define CLASS_1_FDCB349FA54092A1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17673D60)
#define CLASS_1_FDCB349FA54092A1__CTOR_OFFSET UNITYSDK_OFFSET(0x17673D10)

inline static constexpr unsigned int Class_1_FDCB349FA54092A1_TypeDefinitionIndex = 22482;

class Class_1_FDCB349FA54092A1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCB349FA54092A1_TypeDefinitionIndex)->GetStaticField(0x2B020);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::Double Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Double Field_1_9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FDCB349FA54092A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDCB349FA54092A1*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FDCB349FA54092A1* Clone()
	{
		return ((::Class_1_FDCB349FA54092A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FDCB349FA54092A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDCB349FA54092A1*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FDCB349FA54092A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDCB349FA54092A1*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDCB349FA54092A1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

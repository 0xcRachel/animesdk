#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_5185394FB8DBDF2C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x177E8CF0)
#define CLASS_1_5185394FB8DBDF2C_CLONE_OFFSET UNITYSDK_OFFSET(0x177E87B0)
#define CLASS_1_5185394FB8DBDF2C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x177E8870)
#define CLASS_1_5185394FB8DBDF2C_EQUALS_OFFSET UNITYSDK_OFFSET(0x177E8840)
#define CLASS_1_5185394FB8DBDF2C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177E8970)
#define CLASS_1_5185394FB8DBDF2C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x177E8F00)
#define CLASS_1_5185394FB8DBDF2C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x177E8E40)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x177E8800)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x177E8830)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x177E8820)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x177E87F0)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x177E87E0)
#define CLASS_1_5185394FB8DBDF2C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x177E8810)
#define CLASS_1_5185394FB8DBDF2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x177E85F0)
#define CLASS_1_5185394FB8DBDF2C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177E8B70)
#define CLASS_1_5185394FB8DBDF2C_WRITETO_OFFSET UNITYSDK_OFFSET(0x177E8BD0)
#define CLASS_1_5185394FB8DBDF2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177E9080)
#define CLASS_1_5185394FB8DBDF2C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177E8690)
#define CLASS_1_5185394FB8DBDF2C__CTOR_OFFSET UNITYSDK_OFFSET(0x177E8600)

inline static constexpr unsigned int Class_1_5185394FB8DBDF2C_TypeDefinitionIndex = 23707;

class Class_1_5185394FB8DBDF2C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5185394FB8DBDF2C_TypeDefinitionIndex)->GetStaticField(0x403B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5185394FB8DBDF2C_TypeDefinitionIndex)->GetStaticField(0x403B8);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5185394FB8DBDF2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5185394FB8DBDF2C*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5185394FB8DBDF2C* Clone()
	{
		return ((::Class_1_5185394FB8DBDF2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5185394FB8DBDF2C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5185394FB8DBDF2C*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5185394FB8DBDF2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5185394FB8DBDF2C*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5185394FB8DBDF2C_MERGEFROM_1_OFFSET))(this, a1);
	}
};

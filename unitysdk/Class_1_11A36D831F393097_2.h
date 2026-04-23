#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_11A36D831F393097_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D6BE80)
#define CLASS_1_11A36D831F393097_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19D6BA70)
#define CLASS_1_11A36D831F393097_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D6BC40)
#define CLASS_1_11A36D831F393097_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D6BB70)
#define CLASS_1_11A36D831F393097_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D6BD10)
#define CLASS_1_11A36D831F393097_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D6C080)
#define CLASS_1_11A36D831F393097_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D6BFD0)
#define CLASS_1_11A36D831F393097_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19D6BB50)
#define CLASS_1_11A36D831F393097_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19D6BB30)
#define CLASS_1_11A36D831F393097_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19D6B9B0)
#define CLASS_1_11A36D831F393097_2_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19D6BB20)
#define CLASS_1_11A36D831F393097_2_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19D6BB10)
#define CLASS_1_11A36D831F393097_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19D6BB60)
#define CLASS_1_11A36D831F393097_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19D6BB40)
#define CLASS_1_11A36D831F393097_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19D6BB00)
#define CLASS_1_11A36D831F393097_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19D6BAF0)
#define CLASS_1_11A36D831F393097_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D6B9E0)
#define CLASS_1_11A36D831F393097_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D6BD50)
#define CLASS_1_11A36D831F393097_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D6BDB0)
#define CLASS_1_11A36D831F393097_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6C170)
#define CLASS_1_11A36D831F393097_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D6BA00)
#define CLASS_1_11A36D831F393097_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6B9F0)

inline static constexpr unsigned int Class_1_11A36D831F393097_2_TypeDefinitionIndex = 26309;

class Class_1_11A36D831F393097_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_11A36D831F393097_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_11A36D831F393097_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11A36D831F393097_2_TypeDefinitionIndex)->GetStaticField(0x47BB0);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_11A36D831F393097_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A36D831F393097_2*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_11A36D831F393097_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_11A36D831F393097_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_11A36D831F393097_2* Clone()
	{
		return ((::Class_1_11A36D831F393097_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_11A36D831F393097_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_11A36D831F393097_2*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_11A36D831F393097_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A36D831F393097_2*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_11A36D831F393097_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

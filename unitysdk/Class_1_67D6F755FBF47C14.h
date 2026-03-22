#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_67D6F755FBF47C14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AD14A0)
#define CLASS_1_67D6F755FBF47C14_CLONE_OFFSET UNITYSDK_OFFSET(0x17AD0F90)
#define CLASS_1_67D6F755FBF47C14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AD1120)
#define CLASS_1_67D6F755FBF47C14_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AD1030)
#define CLASS_1_67D6F755FBF47C14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AD1200)
#define CLASS_1_67D6F755FBF47C14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AD1730)
#define CLASS_1_67D6F755FBF47C14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AD1670)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AD0FE0)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17AD1010)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17AD1020)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17AD0FD0)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17AD0FC0)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AD0FF0)
#define CLASS_1_67D6F755FBF47C14_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17AD1000)
#define CLASS_1_67D6F755FBF47C14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AD0E70)
#define CLASS_1_67D6F755FBF47C14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AD1330)
#define CLASS_1_67D6F755FBF47C14_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AD1390)
#define CLASS_1_67D6F755FBF47C14__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD1860)
#define CLASS_1_67D6F755FBF47C14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AD0ED0)
#define CLASS_1_67D6F755FBF47C14__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD0E80)

inline static constexpr unsigned int Class_1_67D6F755FBF47C14_TypeDefinitionIndex = 22908;

class Class_1_67D6F755FBF47C14 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67D6F755FBF47C14_TypeDefinitionIndex)->GetStaticField(0x2C7D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Enum_3_DFCB42601400F441 Field_1_6; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_67D6F755FBF47C14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67D6F755FBF47C14*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_67D6F755FBF47C14* Clone()
	{
		return ((::Class_1_67D6F755FBF47C14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_67D6F755FBF47C14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_67D6F755FBF47C14*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_67D6F755FBF47C14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_67D6F755FBF47C14*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_67D6F755FBF47C14_MERGEFROM_1_OFFSET))(this, a1);
	}
};

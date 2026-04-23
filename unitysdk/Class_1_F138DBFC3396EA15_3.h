#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F138DBFC3396EA15_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CD1210)
#define CLASS_1_F138DBFC3396EA15_3_CLONE_OFFSET UNITYSDK_OFFSET(0x19CD0D20)
#define CLASS_1_F138DBFC3396EA15_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CD0F40)
#define CLASS_1_F138DBFC3396EA15_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CD0E60)
#define CLASS_1_F138DBFC3396EA15_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CD0FF0)
#define CLASS_1_F138DBFC3396EA15_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CD1540)
#define CLASS_1_F138DBFC3396EA15_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CD14E0)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19CD0E40)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19CD0E00)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19CD0DB0)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19CD0DA0)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19CD0E30)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19CD0C50)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19CD0E50)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19CD0E10)
#define CLASS_1_F138DBFC3396EA15_3_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19CD0E20)
#define CLASS_1_F138DBFC3396EA15_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CD0CB0)
#define CLASS_1_F138DBFC3396EA15_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CD10D0)
#define CLASS_1_F138DBFC3396EA15_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CD1130)
#define CLASS_1_F138DBFC3396EA15_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CD1620)
#define CLASS_1_F138DBFC3396EA15_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CD0CD0)
#define CLASS_1_F138DBFC3396EA15_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD0CC0)

inline static constexpr unsigned int Class_1_F138DBFC3396EA15_3_TypeDefinitionIndex = 32155;

class Class_1_F138DBFC3396EA15_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F138DBFC3396EA15_3_TypeDefinitionIndex)->GetStaticField(0x5FA40);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::UInt64 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F138DBFC3396EA15_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_3*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F138DBFC3396EA15_3* Clone()
	{
		return ((::Class_1_F138DBFC3396EA15_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F138DBFC3396EA15_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F138DBFC3396EA15_3*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F138DBFC3396EA15_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_3*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};

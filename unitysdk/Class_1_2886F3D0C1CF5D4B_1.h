#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2886F3D0C1CF5D4B_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17932A80)
#define CLASS_1_2886F3D0C1CF5D4B_1_CLONE_OFFSET UNITYSDK_OFFSET(0x179326E0)
#define CLASS_1_2886F3D0C1CF5D4B_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17932830)
#define CLASS_1_2886F3D0C1CF5D4B_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17932780)
#define CLASS_1_2886F3D0C1CF5D4B_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179328E0)
#define CLASS_1_2886F3D0C1CF5D4B_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17932CD0)
#define CLASS_1_2886F3D0C1CF5D4B_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17932C60)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17932730)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17932760)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17932710)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17932740)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17932770)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17932720)
#define CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17932750)
#define CLASS_1_2886F3D0C1CF5D4B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17932620)
#define CLASS_1_2886F3D0C1CF5D4B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17932930)
#define CLASS_1_2886F3D0C1CF5D4B_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17932990)
#define CLASS_1_2886F3D0C1CF5D4B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17932DB0)
#define CLASS_1_2886F3D0C1CF5D4B_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17932660)
#define CLASS_1_2886F3D0C1CF5D4B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17932630)

inline static constexpr unsigned int Class_1_2886F3D0C1CF5D4B_1_TypeDefinitionIndex = 25747;

class Class_1_2886F3D0C1CF5D4B_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2886F3D0C1CF5D4B_1_TypeDefinitionIndex)->GetStaticField(0x38580);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2886F3D0C1CF5D4B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2886F3D0C1CF5D4B_1* Clone()
	{
		return ((::Class_1_2886F3D0C1CF5D4B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2886F3D0C1CF5D4B_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2886F3D0C1CF5D4B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2886F3D0C1CF5D4B_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};

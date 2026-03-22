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

#define CLASS_1_BD2C8496C23D4C2D_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x179E1910)
#define CLASS_1_BD2C8496C23D4C2D_2_CLONE_OFFSET UNITYSDK_OFFSET(0x179E1630)
#define CLASS_1_BD2C8496C23D4C2D_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x179E1760)
#define CLASS_1_BD2C8496C23D4C2D_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x179E16C0)
#define CLASS_1_BD2C8496C23D4C2D_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179E17F0)
#define CLASS_1_BD2C8496C23D4C2D_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x179E19D0)
#define CLASS_1_BD2C8496C23D4C2D_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x179E1980)
#define CLASS_1_BD2C8496C23D4C2D_2_METHOD_1_4090005D9A43383B_OFFSET UNITYSDK_OFFSET(0x179E16B0)
#define CLASS_1_BD2C8496C23D4C2D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x179E1580)
#define CLASS_1_BD2C8496C23D4C2D_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179E1830)
#define CLASS_1_BD2C8496C23D4C2D_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x179E1890)
#define CLASS_1_BD2C8496C23D4C2D_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E1A80)
#define CLASS_1_BD2C8496C23D4C2D_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E15C0)
#define CLASS_1_BD2C8496C23D4C2D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179E1590)

inline static constexpr unsigned int Class_1_BD2C8496C23D4C2D_2_TypeDefinitionIndex = 25836;

class Class_1_BD2C8496C23D4C2D_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Int32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2C8496C23D4C2D_2_TypeDefinitionIndex)->GetStaticField(0x10160);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BD2C8496C23D4C2D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BD2C8496C23D4C2D_2* Clone()
	{
		return ((::Class_1_BD2C8496C23D4C2D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* Method_1_4090005D9A43383B()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_METHOD_1_4090005D9A43383B_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BD2C8496C23D4C2D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BD2C8496C23D4C2D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BD2C8496C23D4C2D_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};

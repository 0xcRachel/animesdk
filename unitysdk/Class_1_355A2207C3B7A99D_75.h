#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19F4AE90)
#define CLASS_1_355A2207C3B7A99D_75_CLONE_OFFSET UNITYSDK_OFFSET(0x19F3F120)
#define CLASS_1_355A2207C3B7A99D_75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19F4AD30)
#define CLASS_1_355A2207C3B7A99D_75_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F4AC60)
#define CLASS_1_355A2207C3B7A99D_75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F3F4B0)
#define CLASS_1_355A2207C3B7A99D_75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19F4AEF0)
#define CLASS_1_355A2207C3B7A99D_75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19F3F740)
#define CLASS_1_355A2207C3B7A99D_75_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19F4AC40)
#define CLASS_1_355A2207C3B7A99D_75_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19F4AB60)
#define CLASS_1_355A2207C3B7A99D_75_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19F4AC50)
#define CLASS_1_355A2207C3B7A99D_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19F4ABC0)
#define CLASS_1_355A2207C3B7A99D_75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F4ADD0)
#define CLASS_1_355A2207C3B7A99D_75_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F4AE30)
#define CLASS_1_355A2207C3B7A99D_75__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F4AFD0)
#define CLASS_1_355A2207C3B7A99D_75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F4ABD0)
#define CLASS_1_355A2207C3B7A99D_75__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3F730)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_75_TypeDefinitionIndex = 30645;

class Class_1_355A2207C3B7A99D_75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_75*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_75_TypeDefinitionIndex)->GetStaticField(0x4CBF0);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Class_1_C74059A83466814F* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_75*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_75*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_75* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_CLONE_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_75*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_75*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_75_MERGEFROM_1_OFFSET))(this, a1);
	}
};

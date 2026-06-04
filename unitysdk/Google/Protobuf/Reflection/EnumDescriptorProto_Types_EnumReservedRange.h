#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x178A2660)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x178A2040)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x178A2220)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x178A21C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x178A23E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178A1E70)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x178A2140)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x178A21B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x178A2130)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x178A1E10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x178A20C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x178A29C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x178A28E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178A1F90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x178A21A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x178A2120)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178A24D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x178A2530)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A2B40)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178A2000)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x178A1FF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex = 5478;

	class EnumDescriptorProto_Types_EnumReservedRange : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0x3A140);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0xB4A4);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 end_; // 0x18
		::System::Int32 start_; // 0x1C
		::System::Int32 _hasBits0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET))(this, a1);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}

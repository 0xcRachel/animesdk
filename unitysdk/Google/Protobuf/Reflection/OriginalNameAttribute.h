#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15417EE0)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_PREFERREDALIAS_OFFSET UNITYSDK_OFFSET(0x15417F00)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15417EF0)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_PREFERREDALIAS_OFFSET UNITYSDK_OFFSET(0x15417F10)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15417F20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OriginalNameAttribute_TypeDefinitionIndex = 6244;

	class OriginalNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _PreferredAlias_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_PreferredAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_PREFERREDALIAS_OFFSET))(this);
		}

		::System::Void set_PreferredAlias(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_PREFERREDALIAS_OFFSET))(this, value);
		}
	};
}

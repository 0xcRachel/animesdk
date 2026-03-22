#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x15618670)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x15618660)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackFormatterAttribute_TypeDefinitionIndex = 8789;

	class MessagePackFormatterAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x10
		::System::Type* _FormatterType_k__BackingField; // 0x18

		::System::Type* get_FormatterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET))(this);
		}
	};
}

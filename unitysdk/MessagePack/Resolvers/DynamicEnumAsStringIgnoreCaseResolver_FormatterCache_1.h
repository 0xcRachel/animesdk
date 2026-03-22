#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumAsStringIgnoreCaseResolver_FormatterCache_1_TypeDefinitionIndex = 9513;

	template <typename T>
	class DynamicEnumAsStringIgnoreCaseResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_FormatterCtorArgs()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringIgnoreCaseResolver_FormatterCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringIgnoreCaseResolver_FormatterCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

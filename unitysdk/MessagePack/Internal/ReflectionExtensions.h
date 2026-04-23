#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x164BB460)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x164B6F70)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET UNITYSDK_OFFSET(0x164CB220)
#define MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x164B5C30)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 9349;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(type);
		}

		static ::System::Boolean IsAnonymous(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET))(type);
		}

		static ::System::Boolean IsIndexer(::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISINDEXER_OFFSET))(propertyInfo);
		}

		static ::System::Boolean IsConstructedGenericType(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET))(type);
		}
	};
}

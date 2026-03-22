#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE_GET_INCLUDELOCALFORMATTERS_OFFSET UNITYSDK_OFFSET(0x15625620)
#define MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE_SET_INCLUDELOCALFORMATTERS_OFFSET UNITYSDK_OFFSET(0x15625630)
#define MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15625610)

namespace MessagePack
{
	inline static constexpr unsigned int CompositeResolverAttribute_TypeDefinitionIndex = 9392;

	class CompositeResolverAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _IncludeLocalFormatters_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* formattersAndResolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE__CTOR_OFFSET))(this, formattersAndResolvers);
		}

		::System::Boolean get_IncludeLocalFormatters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE_GET_INCLUDELOCALFORMATTERS_OFFSET))(this);
		}

		::System::Void set_IncludeLocalFormatters(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_COMPOSITERESOLVERATTRIBUTE_SET_INCLUDELOCALFORMATTERS_OFFSET))(this, value);
		}
	};
}

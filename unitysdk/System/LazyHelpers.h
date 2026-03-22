#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LAZYHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C9C340)

namespace System
{
	inline static constexpr unsigned int LazyHelpers_TypeDefinitionIndex = 158;

	class LazyHelpers : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_PUBLICATION_ONLY_SENTINEL()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LazyHelpers_TypeDefinitionIndex)->GetStaticField(0x9340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPERS__CCTOR_OFFSET))();
		}
	};
}

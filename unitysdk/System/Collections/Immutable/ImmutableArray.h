#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableArray_1.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C78F20)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_TypeDefinitionIndex = 9138;

	class ImmutableArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_TwoElementArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableArray_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET))();
		}
	};
}

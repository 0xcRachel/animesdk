#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE_GET_USEMAPMODE_OFFSET UNITYSDK_OFFSET(0x15641450)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE_SET_USEMAPMODE_OFFSET UNITYSDK_OFFSET(0x15641460)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15641440)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolverAttribute_TypeDefinitionIndex = 9395;

	class GeneratedMessagePackResolverAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _UseMapMode_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseMapMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE_GET_USEMAPMODE_OFFSET))(this);
		}

		::System::Void set_UseMapMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVERATTRIBUTE_SET_USEMAPMODE_OFFSET))(this, value);
		}
	};
}

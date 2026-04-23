#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75B2F0)

namespace XLua
{
	inline static constexpr unsigned int AutoGenReturnTypeWrapAttribute_TypeDefinitionIndex = 6400;

	class AutoGenReturnTypeWrapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

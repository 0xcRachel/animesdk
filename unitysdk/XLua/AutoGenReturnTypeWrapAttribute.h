#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x172C8AA0)

namespace XLua
{
	inline static constexpr unsigned int AutoGenReturnTypeWrapAttribute_TypeDefinitionIndex = 8493;

	class AutoGenReturnTypeWrapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

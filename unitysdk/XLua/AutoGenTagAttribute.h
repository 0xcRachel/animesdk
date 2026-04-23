#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_AUTOGENTAGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75B300)

namespace XLua
{
	inline static constexpr unsigned int AutoGenTagAttribute_TypeDefinitionIndex = 6403;

	class AutoGenTagAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_AUTOGENTAGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

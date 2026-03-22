#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_CSHARPONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x181DCB80)

namespace UnityEngine
{
	inline static constexpr unsigned int CSharpOnlyAttribute_TypeDefinitionIndex = 4099;

	class CSharpOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CSHARPONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

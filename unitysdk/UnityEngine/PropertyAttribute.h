#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F470)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyAttribute_TypeDefinitionIndex = 4023;

	class PropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

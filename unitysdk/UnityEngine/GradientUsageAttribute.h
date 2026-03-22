#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_GRADIENTUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x181F8140)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientUsageAttribute_TypeDefinitionIndex = 4032;

	class GradientUsageAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Boolean hdr; // 0x10

		::System::Void _ctor(::System::Boolean hdr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTUSAGEATTRIBUTE__CTOR_OFFSET))(this, hdr);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197E1990)
#define UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x197E1960)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUsageAttribute_TypeDefinitionIndex = 4054;

	class ColorUsageAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single minBrightness; // 0x10
		::System::Single maxBrightness; // 0x14
		::System::Boolean hdr; // 0x18
		::System::Boolean showAlpha; // 0x19
		::System::Single minExposureValue; // 0x1C
		::System::Single maxExposureValue; // 0x20

		::System::Void _ctor(::System::Boolean showAlpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_OFFSET))(this, showAlpha);
		}

		::System::Void _ctor_1(::System::Boolean showAlpha, ::System::Boolean hdr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_1_OFFSET))(this, showAlpha, hdr);
		}
	};
}

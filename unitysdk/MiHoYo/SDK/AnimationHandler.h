#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_ANIMATIONHANDLER_ONFADEINFINISHED_OFFSET UNITYSDK_OFFSET(0x17E108B0)
#define MIHOYO_SDK_ANIMATIONHANDLER_ONFADEOUTFINISHED_OFFSET UNITYSDK_OFFSET(0x17E10960)
#define MIHOYO_SDK_ANIMATIONHANDLER_ONLOADINGICONFADEIN_OFFSET UNITYSDK_OFFSET(0x17E10A10)
#define MIHOYO_SDK_ANIMATIONHANDLER_ONLOADINGICONFADEOUT_OFFSET UNITYSDK_OFFSET(0x17E10B90)
#define MIHOYO_SDK_ANIMATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17361510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AnimationHandler_TypeDefinitionIndex = 43150;

	class AnimationHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnFadeInFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_ONFADEINFINISHED_OFFSET))(this);
		}

		::System::Void OnFadeOutFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_ONFADEOUTFINISHED_OFFSET))(this);
		}

		::System::Void OnLoadingIconFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_ONLOADINGICONFADEIN_OFFSET))(this);
		}

		::System::Void OnLoadingIconFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_ONLOADINGICONFADEOUT_OFFSET))(this);
		}
	};
}

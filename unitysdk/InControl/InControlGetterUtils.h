#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

namespace InControl { class IInControlGetter; }

#define INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x15B7C260)
#define INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x15B7C240)
#define INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x15B7C230)

namespace InControl
{
	inline static constexpr unsigned int InControlGetterUtils_TypeDefinitionIndex = 31434;

	class InControlGetterUtils : public ::System::Object
	{
	public:
		static ::InControl::IInControlGetter** StaticGet_mGetter()
		{
			return (::InControl::IInControlGetter**)Il2CppClass::FromTypeDefinitionIndex(InControlGetterUtils_TypeDefinitionIndex)->GetStaticField(0x38AD0);
		}

		static ::System::Void SetInControlGetterImpl(::InControl::IInControlGetter* getter)
		{
			return ((::System::Void(*)(::InControl::IInControlGetter*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET))(getter);
		}

		static ::System::Void PlayNavigationAudio()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET))();
		}

		static ::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection moveDir)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET))(moveDir);
		}
	};
}

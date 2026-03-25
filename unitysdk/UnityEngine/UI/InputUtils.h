#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class IInputGetter; }

#define UNITYENGINE_UI_INPUTUTILS_BUTTONVALIDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B4B850)
#define UNITYENGINE_UI_INPUTUTILS_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0x18B4B6F0)
#define UNITYENGINE_UI_INPUTUTILS_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0x18B4B630)
#define UNITYENGINE_UI_INPUTUTILS_ISTEXTPROOPEN_OFFSET UNITYSDK_OFFSET(0x18B4B710)
#define UNITYENGINE_UI_INPUTUTILS_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0x18B4B6D0)
#define UNITYENGINE_UI_INPUTUTILS_SETDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0x18B4B6B0)
#define UNITYENGINE_UI_INPUTUTILS_SETINPUTGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x18B4B620)
#define UNITYENGINE_UI_INPUTUTILS_SHAREDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18B4B7B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputUtils_TypeDefinitionIndex = 5742;

	class InputUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::IInputGetter** StaticGet_mGetter()
		{
			return (::UnityEngine::UI::IInputGetter**)Il2CppClass::FromTypeDefinitionIndex(InputUtils_TypeDefinitionIndex)->GetStaticField(0x5560);
		}

		static ::System::Void SetInputGetterImpl(::UnityEngine::UI::IInputGetter* getter)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IInputGetter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SETINPUTGETTERIMPL_OFFSET))(getter);
		}

		static ::System::Boolean IsControllerInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ISCONTROLLERINPUT_OFFSET))();
		}

		static ::System::Void SetDropdownShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SETDROPDOWNSHOW_OFFSET))(isShow);
		}

		static ::Il2CppArray<::System::Int32>* NoLeadingChars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_NOLEADINGCHARS_OFFSET))();
		}

		static ::System::Int32 Ellipsis()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ELLIPSIS_OFFSET))();
		}

		static ::System::Boolean IsTextProOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ISTEXTPROOPEN_OFFSET))();
		}

		static ::System::Single ShareDragThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SHAREDRAGTHRESHOLD_OFFSET))();
		}

		static ::System::Single ButtonValidThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_BUTTONVALIDTHRESHOLD_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUILayoutEntry.h"

namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUIWORDWRAPSIZER_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1826B320)
#define UNITYENGINE_GUIWORDWRAPSIZER_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1826B260)
#define UNITYENGINE_GUIWORDWRAPSIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x182653B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIWordWrapSizer_TypeDefinitionIndex = 5029;

	class GUIWordWrapSizer : public ::UnityEngine::GUILayoutEntry
	{
	public:
		::UnityEngine::GUIContent* m_Content; // 0x48
		::System::Single m_ForcedMinHeight; // 0x50
		::System::Single m_ForcedMaxHeight; // 0x54

		::System::Void _ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIContent*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER__CTOR_OFFSET))(this, style, content, options);
		}

		::System::Void CalcWidth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER_CALCWIDTH_OFFSET))(this);
		}

		::System::Void CalcHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER_CALCHEIGHT_OFFSET))(this);
		}
	};
}

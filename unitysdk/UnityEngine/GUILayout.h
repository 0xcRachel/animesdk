#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET UNITYSDK_OFFSET(0x19171870)
#define UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET UNITYSDK_OFFSET(0x19171740)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET UNITYSDK_OFFSET(0x19170E40)
#define UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x19170D10)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x19172020)
#define UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x19171F10)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET UNITYSDK_OFFSET(0x19171580)
#define UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET UNITYSDK_OFFSET(0x19171450)
#define UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET UNITYSDK_OFFSET(0x1916FBD0)
#define UNITYENGINE_GUILAYOUT_BUTTON_OFFSET UNITYSDK_OFFSET(0x1916F970)
#define UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET UNITYSDK_OFFSET(0x1916FAD0)
#define UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x19170640)
#define UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET UNITYSDK_OFFSET(0x1916F8C0)
#define UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1916FC80)
#define UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET UNITYSDK_OFFSET(0x191702B0)
#define UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET UNITYSDK_OFFSET(0x19171D00)
#define UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x191712A0)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET UNITYSDK_OFFSET(0x19172390)
#define UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x19172320)
#define UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET UNITYSDK_OFFSET(0x19171730)
#define UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x19172400)
#define UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1916D7A0)
#define UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x19170550)
#define UNITYENGINE_GUILAYOUT_LABEL_OFFSET UNITYSDK_OFFSET(0x1916F700)
#define UNITYENGINE_GUILAYOUT_SELECTIONGRID_1_OFFSET UNITYSDK_OFFSET(0x191704B0)
#define UNITYENGINE_GUILAYOUT_SELECTIONGRID_OFFSET UNITYSDK_OFFSET(0x191703B0)
#define UNITYENGINE_GUILAYOUT_SPACE_OFFSET UNITYSDK_OFFSET(0x19170880)
#define UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x1916FBE0)
#define UNITYENGINE_GUILAYOUT_TOGGLE_1_OFFSET UNITYSDK_OFFSET(0x19170330)
#define UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET UNITYSDK_OFFSET(0x191700D0)
#define UNITYENGINE_GUILAYOUT_WIDTH_OFFSET UNITYSDK_OFFSET(0x1916D730)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_TypeDefinitionIndex = 5122;

	class GUILayout : public ::System::Object
	{
	public:
		static ::System::Void Label(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_LABEL_OFFSET))(text, options);
		}

		static ::System::Void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOLABEL_OFFSET))(content, style, options);
		}

		static ::System::Boolean Button(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_OFFSET))(text, options);
		}

		static ::System::Boolean Button_1(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BUTTON_1_OFFSET))(content, style, options);
		}

		static ::System::Boolean DoButton(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOBUTTON_OFFSET))(content, style, options);
		}

		static ::System::String* TextField(::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TEXTFIELD_OFFSET))(text, options);
		}

		static ::System::String* DoTextField(::System::String* text, ::System::Int32 maxLength, ::System::Boolean multiline, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTEXTFIELD_OFFSET))(text, maxLength, multiline, style, options);
		}

		static ::System::Boolean Toggle(::System::Boolean value, ::System::String* text, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_OFFSET))(value, text, options);
		}

		static ::System::Boolean Toggle_1(::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_TOGGLE_1_OFFSET))(value, content, style, options);
		}

		static ::System::Boolean DoToggle(::System::Boolean value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOTOGGLE_OFFSET))(value, content, style, options);
		}

		static ::System::Int32 SelectionGrid(::System::Int32 selected, ::Il2CppArray<::System::String*>* texts, ::System::Int32 xCount, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SELECTIONGRID_OFFSET))(selected, texts, xCount, style, options);
		}

		static ::System::Int32 SelectionGrid_1(::System::Int32 selected, ::Il2CppArray<::UnityEngine::GUIContent*>* contents, ::System::Int32 xCount, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SELECTIONGRID_1_OFFSET))(selected, contents, xCount, style, options);
		}

		static ::System::Single HorizontalSlider(::System::Single value, ::System::Single leftValue, ::System::Single rightValue, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HORIZONTALSLIDER_OFFSET))(value, leftValue, rightValue, options);
		}

		static ::System::Single DoHorizontalSlider(::System::Single value, ::System::Single leftValue, ::System::Single rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_DOHORIZONTALSLIDER_OFFSET))(value, leftValue, rightValue, slider, thumb, options);
		}

		static ::System::Void Space(::System::Single pixels)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_SPACE_OFFSET))(pixels);
		}

		static ::System::Void BeginHorizontal(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_OFFSET))(options);
		}

		static ::System::Void BeginHorizontal_1(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINHORIZONTAL_1_OFFSET))(content, style, options);
		}

		static ::System::Void EndHorizontal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDHORIZONTAL_OFFSET))();
		}

		static ::System::Void BeginVertical(::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_OFFSET))(options);
		}

		static ::System::Void BeginVertical_1(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINVERTICAL_1_OFFSET))(content, style, options);
		}

		static ::System::Void EndVertical()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDVERTICAL_OFFSET))();
		}

		static ::System::Void BeginArea(::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_OFFSET))(screenRect);
		}

		static ::System::Void BeginArea_1(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINAREA_1_OFFSET))(screenRect, content, style);
		}

		static ::System::Void EndArea()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDAREA_OFFSET))();
		}

		static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Vector2 scrollPosition, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_OFFSET))(scrollPosition, options);
		}

		static ::UnityEngine::Vector2 BeginScrollView_1(::UnityEngine::Vector2 scrollPosition, ::System::Boolean alwaysShowHorizontal, ::System::Boolean alwaysShowVertical, ::UnityEngine::GUIStyle* horizontalScrollbar, ::UnityEngine::GUIStyle* verticalScrollbar, ::UnityEngine::GUIStyle* background, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* options)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_BEGINSCROLLVIEW_1_OFFSET))(scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, options);
		}

		static ::System::Void EndScrollView()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_OFFSET))();
		}

		static ::System::Void EndScrollView_1(::System::Boolean handleScrollWheel)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_ENDSCROLLVIEW_1_OFFSET))(handleScrollWheel);
		}

		static ::UnityEngine::GUILayoutOption* Width(::System::Single width)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WIDTH_OFFSET))(width);
		}

		static ::UnityEngine::GUILayoutOption* Height(::System::Single height)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET))(height);
		}

		static ::UnityEngine::GUILayoutOption* ExpandWidth(::System::Boolean expand)
		{
			return ((::UnityEngine::GUILayoutOption*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_EXPANDWIDTH_OFFSET))(expand);
		}
	};
}

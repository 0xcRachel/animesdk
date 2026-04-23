#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2383230)
#define UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x6469A0)
#define UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x5078B0)
#define UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0x608BA0)
#define UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x58FAA0)
#define UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x1464EB0)
#define UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x6163B0)
#define UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0x6163C0)
#define UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x878E80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SpriteState_TypeDefinitionIndex = 5739;

	struct alignas(8) SpriteState
	{
		::UnityEngine::Sprite* m_HighlightedSprite; // 0x10
		::UnityEngine::Sprite* m_PressedSprite; // 0x18
		::UnityEngine::Sprite* m_SelectedSprite; // 0x20
		::UnityEngine::Sprite* m_DisabledSprite; // 0x28

		::UnityEngine::Sprite* get_highlightedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET))(this);
		}

		::System::Void set_highlightedSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_pressedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET))(this);
		}

		::System::Void set_pressedSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_selectedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET))(this);
		}

		::System::Void set_selectedSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_disabledSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET))(this);
		}

		::System::Void set_disabledSprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::UI::SpriteState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET))(this, other);
		}
	};
}

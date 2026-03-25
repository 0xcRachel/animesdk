#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x11A79940)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x11A79C00)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A71D70)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 31359;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* oldPickedObject; // 0x10
		::UnityEngine::GameObject* pickedUIElement; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::System::Single lastPinch; // 0x30
		::System::Boolean lockPinch; // 0x34
		::System::Boolean isGuiCamera; // 0x35
		::System::Boolean dragStart; // 0x36
		::UnityEngine::Vector2 deltaPosition; // 0x38
		::System::Single timeSinceStartAction; // 0x40
		::System::Single oldFingerDistance; // 0x44
		::System::Int32 finger0; // 0x48
		::UnityEngine::Vector2 oldStartPosition; // 0x4C
		::System::Single startDistance; // 0x54
		::UnityEngine::Vector2 position; // 0x58
		::UnityEngine::Vector2 startPosition; // 0x60
		::System::Single tapCurentTime; // 0x68
		::System::Boolean swipeStart; // 0x6C
		::System::Boolean isOverGui; // 0x6D
		::System::Boolean lockTwist; // 0x6E
		::System::Boolean inSingleDoubleTaps; // 0x6F
		::System::Single startTimeAction; // 0x70
		::System::Int32 finger1; // 0x74
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x78
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x7C
		::System::Single fingerDistance; // 0x80
		::System::Single lastTwistAngle; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET))(this);
		}

		::System::Void ClearPickedObjectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET))(this);
		}

		::System::Void ClearPickedUIData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET))(this);
		}
	};
}

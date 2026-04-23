#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19192500)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x191927C0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1918A880)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 37079;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::Camera* pickedCamera; // 0x18
		::UnityEngine::GameObject* oldPickedObject; // 0x20
		::UnityEngine::GameObject* pickedObject; // 0x28
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x30
		::UnityEngine::Vector2 startPosition; // 0x34
		::System::Single tapCurentTime; // 0x3C
		::System::Single lastPinch; // 0x40
		::System::Single oldFingerDistance; // 0x44
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x48
		::System::Int32 finger0; // 0x4C
		::System::Single timeSinceStartAction; // 0x50
		::UnityEngine::Vector2 oldStartPosition; // 0x54
		::System::Single startDistance; // 0x5C
		::UnityEngine::Vector2 deltaPosition; // 0x60
		::System::Boolean inSingleDoubleTaps; // 0x68
		::System::Boolean swipeStart; // 0x69
		::System::Boolean isGuiCamera; // 0x6A
		::System::Boolean lockTwist; // 0x6B
		::System::Boolean lockPinch; // 0x6C
		::System::Boolean dragStart; // 0x6D
		::System::Boolean isOverGui; // 0x6E
		::System::Single fingerDistance; // 0x70
		::UnityEngine::Vector2 position; // 0x74
		::System::Int32 finger1; // 0x7C
		::System::Single startTimeAction; // 0x80
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

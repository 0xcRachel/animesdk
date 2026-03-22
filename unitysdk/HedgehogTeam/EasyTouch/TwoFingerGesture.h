#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x112F2AE0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x112F2DA0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x112EAE20)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 30484;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* pickedObject; // 0x18
		::UnityEngine::GameObject* oldPickedObject; // 0x20
		::UnityEngine::Camera* pickedCamera; // 0x28
		::UnityEngine::Vector2 position; // 0x30
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x38
		::System::Single tapCurentTime; // 0x3C
		::System::Single timeSinceStartAction; // 0x40
		::System::Single fingerDistance; // 0x44
		::System::Single oldFingerDistance; // 0x48
		::UnityEngine::Vector2 oldStartPosition; // 0x4C
		::UnityEngine::Vector2 deltaPosition; // 0x54
		::System::Single startTimeAction; // 0x5C
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x60
		::System::Single lastTwistAngle; // 0x64
		::System::Int32 finger1; // 0x68
		::System::Boolean isGuiCamera; // 0x6C
		::System::Boolean inSingleDoubleTaps; // 0x6D
		::System::Boolean lockPinch; // 0x6E
		::System::Boolean isOverGui; // 0x6F
		::System::Single startDistance; // 0x70
		::System::Single lastPinch; // 0x74
		::System::Boolean swipeStart; // 0x78
		::System::Boolean dragStart; // 0x79
		::System::Boolean lockTwist; // 0x7A
		::System::Int32 finger0; // 0x7C
		::UnityEngine::Vector2 startPosition; // 0x80

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

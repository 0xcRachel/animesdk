#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CALCULATEPROJECTIONONELLIPSE_OFFSET UNITYSDK_OFFSET(0x162C6700)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x162C62D0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_FINDMIRRORPOINTACROSSCAMERAPLANE_OFFSET UNITYSDK_OFFSET(0x162C6AD0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_GETCROSSEDPOINT_OFFSET UNITYSDK_OFFSET(0x162C64B0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINLEFTSCREEN_OFFSET UNITYSDK_OFFSET(0x162C6950)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINUPPERSCREEN_OFFSET UNITYSDK_OFFSET(0x162C68F0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISPOINTINELLIPSE_OFFSET UNITYSDK_OFFSET(0x162C6430)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET UNITYSDK_OFFSET(0x162C69B0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162C63C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourCrossroadPositionCalculator_TypeDefinitionIndex = 57035;

	class ParkourCrossroadPositionCalculator : public ::System::Object
	{
	public:
		::System::Single EllipseSizeA; // 0x10
		::System::Single EllipseSizeB; // 0x14
		::UnityEngine::Vector2 _ScreenSize; // 0x18

		::System::Void _ctor(::System::Single radioA, ::System::Single radioB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR__CTOR_OFFSET))(this, radioA, radioB);
		}

		static ::RPG::Client::ParkourCrossroadPositionCalculator* Create(::System::Single radioA, ::System::Single radioB)
		{
			return ((::RPG::Client::ParkourCrossroadPositionCalculator*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CREATE_OFFSET))(radioA, radioB);
		}

		::System::Boolean IsPointInEllipse(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISPOINTINELLIPSE_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 GetCrossedPoint(::UnityEngine::Vector3 screenPos, ::System::Boolean isPointBehindCamera)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_GETCROSSEDPOINT_OFFSET))(this, screenPos, isPointBehindCamera);
		}

		::System::Boolean IsInUpperScreen(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINUPPERSCREEN_OFFSET))(this, point);
		}

		::System::Boolean IsInLeftScreen(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINLEFTSCREEN_OFFSET))(this, point);
		}

		::System::Boolean IsWorldPosClampedInCameraZ(::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET))(this, worldPos);
		}

		::UnityEngine::Vector2 CalculateProjectionOnEllipse(::UnityEngine::Vector3 screenPoint)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CALCULATEPROJECTIONONELLIPSE_OFFSET))(this, screenPoint);
		}

		::UnityEngine::Vector3 FindMirrorPointAcrossCameraPlane(::UnityEngine::Vector3 originalPoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_FINDMIRRORPOINTACROSSCAMERAPLANE_OFFSET))(this, originalPoint);
		}
	};
}

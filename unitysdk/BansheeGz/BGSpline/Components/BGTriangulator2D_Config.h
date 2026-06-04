#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPpu.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGTriangulator2D_Config_UvModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_Mode2DEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x151F5840)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGTriangulator2D_Config_TypeDefinitionIndex = 34153;

	class BGTriangulator2D_Config : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnitBack; // 0x10
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnit; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum Mode2D; // 0x20
		::System::Boolean Closed; // 0x24
		::System::Boolean Flip; // 0x25
		::System::Boolean DoubleSided; // 0x26
		::System::Boolean AutoFlip; // 0x27
		::UnityEngine::Vector2 OffsetUV; // 0x28
		::UnityEngine::Vector2 OffsetBackUV; // 0x30
		::UnityEngine::Vector2 ScaleBackUV; // 0x38
		::BansheeGz::BGSpline::Components::BGTriangulator2D_Config_UvModeEnum UvMode; // 0x40
		::BansheeGz::BGSpline::Components::BGPpu TextureSize; // 0x44
		::UnityEngine::Vector2 ScaleUV; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET))(this);
		}
	};
}

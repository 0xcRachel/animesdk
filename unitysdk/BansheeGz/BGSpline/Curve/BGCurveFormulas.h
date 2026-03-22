#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBICDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x15ED21B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBIC_OFFSET UNITYSDK_OFFSET(0x15ED1970)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATICDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x15ED2100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATIC_OFFSET UNITYSDK_OFFSET(0x15ED18F0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveFormulas_TypeDefinitionIndex = 27450;

	class BGCurveFormulas : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 BezierCubic(::System::Single t, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 fromControl, ::UnityEngine::Vector3 toControl, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBIC_OFFSET))(t, from, fromControl, toControl, to);
		}

		static ::UnityEngine::Vector3 BezierQuadratic(::System::Single t, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 control, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATIC_OFFSET))(t, from, control, to);
		}

		static ::UnityEngine::Vector3 BezierCubicDerivative(::System::Single t, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 fromControl, ::UnityEngine::Vector3 toControl, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERCUBICDERIVATIVE_OFFSET))(t, from, fromControl, toControl, to);
		}

		static ::UnityEngine::Vector3 BezierQuadraticDerivative(::System::Single t, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 control, ::UnityEngine::Vector3 to)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAS_BEZIERQUADRATICDERIVATIVE_OFFSET))(t, from, control, to);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/HableCurve_DirectParams.h"

namespace UnityEngine::Rendering { class HableCurve_Segment; }
namespace UnityEngine::Rendering { class HableCurve_Uniforms; }

#define UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET UNITYSDK_OFFSET(0x180D1080)
#define UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET UNITYSDK_OFFSET(0x180D10D0)
#define UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET UNITYSDK_OFFSET(0x180D0840)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x180D0620)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x180D0600)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET UNITYSDK_OFFSET(0x180D0640)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET UNITYSDK_OFFSET(0x180D0660)
#define UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET UNITYSDK_OFFSET(0x180D0B70)
#define UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET UNITYSDK_OFFSET(0x180D0960)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x180D0630)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x180D0610)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET UNITYSDK_OFFSET(0x180D0650)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET UNITYSDK_OFFSET(0x180D0670)
#define UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET UNITYSDK_OFFSET(0x180D1120)
#define UNITYENGINE_RENDERING_HABLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D0680)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_TypeDefinitionIndex = 27151;

	class HableCurve : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Rendering::HableCurve_Segment*>* segments; // 0x10
		::UnityEngine::Rendering::HableCurve_Uniforms* uniforms; // 0x18
		::System::Single _x1_k__BackingField; // 0x20
		::System::Single _inverseWhitePoint_k__BackingField; // 0x24
		::System::Single _x0_k__BackingField; // 0x28
		::System::Single _whitePoint_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE__CTOR_OFFSET))(this);
		}

		::System::Single get_whitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET))(this);
		}

		::System::Void set_whitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_inverseWhitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET))(this);
		}

		::System::Void set_inverseWhitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_x0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET))(this);
		}

		::System::Void set_x0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET))(this, value);
		}

		::System::Single get_x1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET))(this);
		}

		::System::Void set_x1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET))(this, value);
		}

		::System::Single Eval(::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET))(this, x);
		}

		::System::Void Init(::System::Single toeStrength, ::System::Single toeLength, ::System::Single shoulderStrength, ::System::Single shoulderLength, ::System::Single shoulderAngle, ::System::Single gamma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET))(this, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
		}

		::System::Void InitSegments(::UnityEngine::Rendering::HableCurve_DirectParams srcParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::HableCurve_DirectParams))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET))(this, srcParams);
		}

		::System::Void SolveAB(::System::Single& lnA, ::System::Single& B, ::System::Single x0, ::System::Single y0, ::System::Single m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET))(this, lnA, B, x0, y0, m);
		}

		::System::Void AsSlopeIntercept(::System::Single& m, ::System::Single& b, ::System::Single x0, ::System::Single x1, ::System::Single y0, ::System::Single y1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET))(this, m, b, x0, x1, y0, y1);
		}

		::System::Single EvalDerivativeLinearGamma(::System::Single m, ::System::Single b, ::System::Single g, ::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET))(this, m, b, g, x);
		}
	};
}
